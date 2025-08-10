
#include "PyCThostFtdcExchangeOptionSelfCloseField.h"

///交易所期权自对冲信息

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOptionSelfCloseField *self = (PyCThostFtdcExchangeOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOptionSelfCloseField_init(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "OptionSelfCloseLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OptionSelfCloseSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};


    ///数量
    // TThostFtdcVolumeType int
    int ExchangeOptionSelfCloseField_Volume = 0;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    int ExchangeOptionSelfCloseField_RequestID = 0;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeOptionSelfCloseField_BusinessUnit = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_BusinessUnit_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExchangeOptionSelfCloseField_HedgeFlag = 0;
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    char ExchangeOptionSelfCloseField_OptSelfCloseFlag = 0;
            
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeOptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_ExchangeID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeOptionSelfCloseField_ParticipantID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeOptionSelfCloseField_ClientID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeOptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_reserve1_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeOptionSelfCloseField_TraderID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeOptionSelfCloseField_InstallID = 0;
        
    ///期权自对冲提交状态
    // TThostFtdcOrderSubmitStatusType char
    char ExchangeOptionSelfCloseField_OrderSubmitStatus = 0;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    int ExchangeOptionSelfCloseField_NotifySequence = 0;
        
    ///交易日
    // TThostFtdcDateType char[9]
    const char *ExchangeOptionSelfCloseField_TradingDay = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_TradingDay_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int ExchangeOptionSelfCloseField_SettlementID = 0;
        
    ///期权自对冲编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_OptionSelfCloseSysID_len = 0;
            
    ///报单日期
    // TThostFtdcDateType char[9]
    const char *ExchangeOptionSelfCloseField_InsertDate = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_InsertDate_len = 0;
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOptionSelfCloseField_InsertTime = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_InsertTime_len = 0;
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOptionSelfCloseField_CancelTime = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_CancelTime_len = 0;
            
    ///自对冲结果
    // TThostFtdcExecResultType char
    char ExchangeOptionSelfCloseField_ExecResult = 0;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeOptionSelfCloseField_ClearingPartID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_ClearingPartID_len = 0;
            
    ///序号
    // TThostFtdcSequenceNoType int
    int ExchangeOptionSelfCloseField_SequenceNo = 0;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeOptionSelfCloseField_BranchID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_BranchID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeOptionSelfCloseField_reserve2 = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_reserve2_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeOptionSelfCloseField_MacAddress = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_MacAddress_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeOptionSelfCloseField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_ExchangeInstID_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeOptionSelfCloseField_IPAddress = NULL;
    Py_ssize_t ExchangeOptionSelfCloseField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#ccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#ccs#s#s#s#s#s#icis#is#s#s#s#cs#is#s#s#s#s#", (char **)kwlist
#endif

        , &ExchangeOptionSelfCloseField_Volume 
        , &ExchangeOptionSelfCloseField_RequestID 
        , &ExchangeOptionSelfCloseField_BusinessUnit, &ExchangeOptionSelfCloseField_BusinessUnit_len 
        , &ExchangeOptionSelfCloseField_HedgeFlag 
        , &ExchangeOptionSelfCloseField_OptSelfCloseFlag 
        , &ExchangeOptionSelfCloseField_OptionSelfCloseLocalID, &ExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len 
        , &ExchangeOptionSelfCloseField_ExchangeID, &ExchangeOptionSelfCloseField_ExchangeID_len 
        , &ExchangeOptionSelfCloseField_ParticipantID, &ExchangeOptionSelfCloseField_ParticipantID_len 
        , &ExchangeOptionSelfCloseField_ClientID, &ExchangeOptionSelfCloseField_ClientID_len 
        , &ExchangeOptionSelfCloseField_reserve1, &ExchangeOptionSelfCloseField_reserve1_len 
        , &ExchangeOptionSelfCloseField_TraderID, &ExchangeOptionSelfCloseField_TraderID_len 
        , &ExchangeOptionSelfCloseField_InstallID 
        , &ExchangeOptionSelfCloseField_OrderSubmitStatus 
        , &ExchangeOptionSelfCloseField_NotifySequence 
        , &ExchangeOptionSelfCloseField_TradingDay, &ExchangeOptionSelfCloseField_TradingDay_len 
        , &ExchangeOptionSelfCloseField_SettlementID 
        , &ExchangeOptionSelfCloseField_OptionSelfCloseSysID, &ExchangeOptionSelfCloseField_OptionSelfCloseSysID_len 
        , &ExchangeOptionSelfCloseField_InsertDate, &ExchangeOptionSelfCloseField_InsertDate_len 
        , &ExchangeOptionSelfCloseField_InsertTime, &ExchangeOptionSelfCloseField_InsertTime_len 
        , &ExchangeOptionSelfCloseField_CancelTime, &ExchangeOptionSelfCloseField_CancelTime_len 
        , &ExchangeOptionSelfCloseField_ExecResult 
        , &ExchangeOptionSelfCloseField_ClearingPartID, &ExchangeOptionSelfCloseField_ClearingPartID_len 
        , &ExchangeOptionSelfCloseField_SequenceNo 
        , &ExchangeOptionSelfCloseField_BranchID, &ExchangeOptionSelfCloseField_BranchID_len 
        , &ExchangeOptionSelfCloseField_reserve2, &ExchangeOptionSelfCloseField_reserve2_len 
        , &ExchangeOptionSelfCloseField_MacAddress, &ExchangeOptionSelfCloseField_MacAddress_len 
        , &ExchangeOptionSelfCloseField_ExchangeInstID, &ExchangeOptionSelfCloseField_ExchangeInstID_len 
        , &ExchangeOptionSelfCloseField_IPAddress, &ExchangeOptionSelfCloseField_IPAddress_len 


    )) {
        return -1;
    }


    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = ExchangeOptionSelfCloseField_Volume;
        
    ///请求编号
    // TThostFtdcRequestIDType int
    self->data.RequestID = ExchangeOptionSelfCloseField_RequestID;
        
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeOptionSelfCloseField_BusinessUnit != NULL ) {
        if(ExchangeOptionSelfCloseField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeOptionSelfCloseField_BusinessUnit, ExchangeOptionSelfCloseField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeOptionSelfCloseField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeOptionSelfCloseField_BusinessUnit = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = ExchangeOptionSelfCloseField_HedgeFlag;
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    self->data.OptSelfCloseFlag = ExchangeOptionSelfCloseField_OptSelfCloseFlag;
            
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeOptionSelfCloseField_OptionSelfCloseLocalID != NULL ) {
        if(ExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseLocalID, 0, sizeof(self->data.OptionSelfCloseLocalID));
        // memcpy(self->data.OptionSelfCloseLocalID, ExchangeOptionSelfCloseField_OptionSelfCloseLocalID, ExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len);        
        strncpy(self->data.OptionSelfCloseLocalID, ExchangeOptionSelfCloseField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
        ExchangeOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeOptionSelfCloseField_ExchangeID != NULL ) {
        if(ExchangeOptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeOptionSelfCloseField_ExchangeID, ExchangeOptionSelfCloseField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeOptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeOptionSelfCloseField_ExchangeID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeOptionSelfCloseField_ParticipantID != NULL ) {
        if(ExchangeOptionSelfCloseField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeOptionSelfCloseField_ParticipantID, ExchangeOptionSelfCloseField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeOptionSelfCloseField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeOptionSelfCloseField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeOptionSelfCloseField_ClientID != NULL ) {
        if(ExchangeOptionSelfCloseField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeOptionSelfCloseField_ClientID, ExchangeOptionSelfCloseField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeOptionSelfCloseField_ClientID, sizeof(self->data.ClientID) );
        ExchangeOptionSelfCloseField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeOptionSelfCloseField_reserve1 != NULL ) {
        if(ExchangeOptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeOptionSelfCloseField_reserve1, ExchangeOptionSelfCloseField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeOptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
        ExchangeOptionSelfCloseField_reserve1 = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeOptionSelfCloseField_TraderID != NULL ) {
        if(ExchangeOptionSelfCloseField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeOptionSelfCloseField_TraderID, ExchangeOptionSelfCloseField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeOptionSelfCloseField_TraderID, sizeof(self->data.TraderID) );
        ExchangeOptionSelfCloseField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeOptionSelfCloseField_InstallID;
        
    ///期权自对冲提交状态
    // TThostFtdcOrderSubmitStatusType char
    self->data.OrderSubmitStatus = ExchangeOptionSelfCloseField_OrderSubmitStatus;
            
    ///报单提示序号
    // TThostFtdcSequenceNoType int
    self->data.NotifySequence = ExchangeOptionSelfCloseField_NotifySequence;
        
    ///交易日
    // TThostFtdcDateType char[9]
    if( ExchangeOptionSelfCloseField_TradingDay != NULL ) {
        if(ExchangeOptionSelfCloseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ExchangeOptionSelfCloseField_TradingDay, ExchangeOptionSelfCloseField_TradingDay_len);        
        strncpy(self->data.TradingDay, ExchangeOptionSelfCloseField_TradingDay, sizeof(self->data.TradingDay) );
        ExchangeOptionSelfCloseField_TradingDay = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = ExchangeOptionSelfCloseField_SettlementID;
        
    ///期权自对冲编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeOptionSelfCloseField_OptionSelfCloseSysID != NULL ) {
        if(ExchangeOptionSelfCloseField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
        // memcpy(self->data.OptionSelfCloseSysID, ExchangeOptionSelfCloseField_OptionSelfCloseSysID, ExchangeOptionSelfCloseField_OptionSelfCloseSysID_len);        
        strncpy(self->data.OptionSelfCloseSysID, ExchangeOptionSelfCloseField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
        ExchangeOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    }
            
    ///报单日期
    // TThostFtdcDateType char[9]
    if( ExchangeOptionSelfCloseField_InsertDate != NULL ) {
        if(ExchangeOptionSelfCloseField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
            return -1;
        }
        // memset(self->data.InsertDate, 0, sizeof(self->data.InsertDate));
        // memcpy(self->data.InsertDate, ExchangeOptionSelfCloseField_InsertDate, ExchangeOptionSelfCloseField_InsertDate_len);        
        strncpy(self->data.InsertDate, ExchangeOptionSelfCloseField_InsertDate, sizeof(self->data.InsertDate) );
        ExchangeOptionSelfCloseField_InsertDate = NULL;
    }
            
    ///插入时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOptionSelfCloseField_InsertTime != NULL ) {
        if(ExchangeOptionSelfCloseField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
            return -1;
        }
        // memset(self->data.InsertTime, 0, sizeof(self->data.InsertTime));
        // memcpy(self->data.InsertTime, ExchangeOptionSelfCloseField_InsertTime, ExchangeOptionSelfCloseField_InsertTime_len);        
        strncpy(self->data.InsertTime, ExchangeOptionSelfCloseField_InsertTime, sizeof(self->data.InsertTime) );
        ExchangeOptionSelfCloseField_InsertTime = NULL;
    }
            
    ///撤销时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOptionSelfCloseField_CancelTime != NULL ) {
        if(ExchangeOptionSelfCloseField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
            return -1;
        }
        // memset(self->data.CancelTime, 0, sizeof(self->data.CancelTime));
        // memcpy(self->data.CancelTime, ExchangeOptionSelfCloseField_CancelTime, ExchangeOptionSelfCloseField_CancelTime_len);        
        strncpy(self->data.CancelTime, ExchangeOptionSelfCloseField_CancelTime, sizeof(self->data.CancelTime) );
        ExchangeOptionSelfCloseField_CancelTime = NULL;
    }
            
    ///自对冲结果
    // TThostFtdcExecResultType char
    self->data.ExecResult = ExchangeOptionSelfCloseField_ExecResult;
            
    ///结算会员编号
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeOptionSelfCloseField_ClearingPartID != NULL ) {
        if(ExchangeOptionSelfCloseField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
            return -1;
        }
        // memset(self->data.ClearingPartID, 0, sizeof(self->data.ClearingPartID));
        // memcpy(self->data.ClearingPartID, ExchangeOptionSelfCloseField_ClearingPartID, ExchangeOptionSelfCloseField_ClearingPartID_len);        
        strncpy(self->data.ClearingPartID, ExchangeOptionSelfCloseField_ClearingPartID, sizeof(self->data.ClearingPartID) );
        ExchangeOptionSelfCloseField_ClearingPartID = NULL;
    }
            
    ///序号
    // TThostFtdcSequenceNoType int
    self->data.SequenceNo = ExchangeOptionSelfCloseField_SequenceNo;
        
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeOptionSelfCloseField_BranchID != NULL ) {
        if(ExchangeOptionSelfCloseField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeOptionSelfCloseField_BranchID, ExchangeOptionSelfCloseField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeOptionSelfCloseField_BranchID, sizeof(self->data.BranchID) );
        ExchangeOptionSelfCloseField_BranchID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeOptionSelfCloseField_reserve2 != NULL ) {
        if(ExchangeOptionSelfCloseField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeOptionSelfCloseField_reserve2, ExchangeOptionSelfCloseField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeOptionSelfCloseField_reserve2, sizeof(self->data.reserve2) );
        ExchangeOptionSelfCloseField_reserve2 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeOptionSelfCloseField_MacAddress != NULL ) {
        if(ExchangeOptionSelfCloseField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeOptionSelfCloseField_MacAddress, ExchangeOptionSelfCloseField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeOptionSelfCloseField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeOptionSelfCloseField_MacAddress = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeOptionSelfCloseField_ExchangeInstID != NULL ) {
        if(ExchangeOptionSelfCloseField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeOptionSelfCloseField_ExchangeInstID, ExchangeOptionSelfCloseField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeOptionSelfCloseField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeOptionSelfCloseField_ExchangeInstID = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeOptionSelfCloseField_IPAddress != NULL ) {
        if(ExchangeOptionSelfCloseField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeOptionSelfCloseField_IPAddress, ExchangeOptionSelfCloseField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeOptionSelfCloseField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeOptionSelfCloseField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeOptionSelfCloseField_dealloc(PyCThostFtdcExchangeOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_repr(PyCThostFtdcExchangeOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"Volume", self->data.Volume 
        ,"RequestID", self->data.RequestID 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"OptSelfCloseFlag", self->data.OptSelfCloseFlag 
        ,"OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID) 
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
        ,"OptionSelfCloseSysID", self->data.OptionSelfCloseSysID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID) 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_Volume(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeOptionSelfCloseField_set_Volume(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_RequestID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.RequestID);
#else
    return PyInt_FromLong(self->data.RequestID);
#endif
}

///请求编号
// TThostFtdcRequestIDType int
static int PyCThostFtdcExchangeOptionSelfCloseField_set_RequestID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_HedgeFlag(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExchangeOptionSelfCloseField_set_HedgeFlag(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

///期权行权的头寸是否自对冲
// TThostFtdcOptSelfCloseFlagType char
static int PyCThostFtdcExchangeOptionSelfCloseField_set_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseLocalID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
    return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

///本地期权自对冲编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ClientID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_ClientID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_reserve1(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_reserve1(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_TraderID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_TraderID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_InstallID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeOptionSelfCloseField_set_InstallID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OrderSubmitStatus(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

///期权自对冲提交状态
// TThostFtdcOrderSubmitStatusType char
static int PyCThostFtdcExchangeOptionSelfCloseField_set_OrderSubmitStatus(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_NotifySequence(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.NotifySequence);
#else
    return PyInt_FromLong(self->data.NotifySequence);
#endif
}

///报单提示序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeOptionSelfCloseField_set_NotifySequence(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_TradingDay(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_TradingDay(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_SettlementID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcExchangeOptionSelfCloseField_set_SettlementID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseSysID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
    return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

///期权自对冲编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_InsertDate(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertDate, (Py_ssize_t)sizeof(self->data.InsertDate));
    return PyBytes_FromString(self->data.InsertDate);
}

///报单日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_InsertDate(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_InsertTime(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InsertTime, (Py_ssize_t)sizeof(self->data.InsertTime));
    return PyBytes_FromString(self->data.InsertTime);
}

///插入时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_InsertTime(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_CancelTime(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CancelTime, (Py_ssize_t)sizeof(self->data.CancelTime));
    return PyBytes_FromString(self->data.CancelTime);
}

///撤销时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_CancelTime(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ExecResult(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

///自对冲结果
// TThostFtdcExecResultType char
static int PyCThostFtdcExchangeOptionSelfCloseField_set_ExecResult(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ClearingPartID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClearingPartID, (Py_ssize_t)sizeof(self->data.ClearingPartID));
    return PyBytes_FromString(self->data.ClearingPartID);
}

///结算会员编号
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_ClearingPartID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_SequenceNo(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SequenceNo);
#else
    return PyInt_FromLong(self->data.SequenceNo);
#endif
}

///序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcExchangeOptionSelfCloseField_set_SequenceNo(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_BranchID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_BranchID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_reserve2(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_reserve2(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_MacAddress(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_MacAddress(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_IPAddress(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeOptionSelfCloseField_set_IPAddress(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeOptionSelfCloseField_getset[] = {
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_Volume, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_Volume, (char *)"Volume", NULL},
    ///请求编号 
    {(char *)"RequestID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_RequestID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_RequestID, (char *)"RequestID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_HedgeFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///期权行权的头寸是否自对冲 
    {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OptSelfCloseFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
    ///本地期权自对冲编号 
    {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ParticipantID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ClientID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_TraderID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_InstallID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_InstallID, (char *)"InstallID", NULL},
    ///期权自对冲提交状态 
    {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
    ///报单提示序号 
    {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_NotifySequence, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_NotifySequence, (char *)"NotifySequence", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_TradingDay, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_TradingDay, (char *)"TradingDay", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_SettlementID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_SettlementID, (char *)"SettlementID", NULL},
    ///期权自对冲编号 
    {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
    ///报单日期 
    {(char *)"InsertDate", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_InsertDate, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_InsertDate, (char *)"InsertDate", NULL},
    ///插入时间 
    {(char *)"InsertTime", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_InsertTime, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_InsertTime, (char *)"InsertTime", NULL},
    ///撤销时间 
    {(char *)"CancelTime", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_CancelTime, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_CancelTime, (char *)"CancelTime", NULL},
    ///自对冲结果 
    {(char *)"ExecResult", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ExecResult, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ExecResult, (char *)"ExecResult", NULL},
    ///结算会员编号 
    {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ClearingPartID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
    ///序号 
    {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_SequenceNo, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_SequenceNo, (char *)"SequenceNo", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_BranchID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_BranchID, (char *)"BranchID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_reserve2, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_reserve2, (char *)"reserve2", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_MacAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_MacAddress, (char *)"MacAddress", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_IPAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOptionSelfCloseField", (PyObject *)&PyCThostFtdcExchangeOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcExchangeOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
