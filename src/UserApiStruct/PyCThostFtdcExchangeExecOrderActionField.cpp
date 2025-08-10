
#include "PyCThostFtdcExchangeExecOrderActionField.h"

///交易所执行宣告操作

static PyObject *PyCThostFtdcExchangeExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeExecOrderActionField *self = (PyCThostFtdcExchangeExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeExecOrderActionField_init(PyCThostFtdcExchangeExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ExecOrderSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "ExecOrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "ActionType", "BranchID", "reserve1", "MacAddress", "reserve2", "Volume", "IPAddress", "ExchangeInstID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ExchangeID_len = 0;
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    const char *ExchangeExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ExecOrderSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char ExchangeExecOrderActionField_ActionFlag = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *ExchangeExecOrderActionField_ActionDate = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeExecOrderActionField_ActionTime = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeExecOrderActionField_TraderID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeExecOrderActionField_InstallID = 0;
        
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeExecOrderActionField_ExecOrderLocalID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ExecOrderLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeExecOrderActionField_ActionLocalID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeExecOrderActionField_ParticipantID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeExecOrderActionField_ClientID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeExecOrderActionField_BusinessUnit = NULL;
    Py_ssize_t ExchangeExecOrderActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char ExchangeExecOrderActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExchangeExecOrderActionField_UserID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_UserID_len = 0;
            
    ///执行类型
    // TThostFtdcActionTypeType char
    char ExchangeExecOrderActionField_ActionType = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeExecOrderActionField_BranchID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_BranchID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeExecOrderActionField_reserve1 = NULL;
    Py_ssize_t ExchangeExecOrderActionField_reserve1_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeExecOrderActionField_MacAddress = NULL;
    Py_ssize_t ExchangeExecOrderActionField_MacAddress_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeExecOrderActionField_reserve2 = NULL;
    Py_ssize_t ExchangeExecOrderActionField_reserve2_len = 0;
            
    ///数量
    // TThostFtdcVolumeType int
    int ExchangeExecOrderActionField_Volume = 0;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeExecOrderActionField_IPAddress = NULL;
    Py_ssize_t ExchangeExecOrderActionField_IPAddress_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeExecOrderActionField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeExecOrderActionField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#cy#y#y#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#is#s#s#s#s#cs#cs#s#s#s#is#s#", (char **)kwlist
#endif

        , &ExchangeExecOrderActionField_ExchangeID, &ExchangeExecOrderActionField_ExchangeID_len 
        , &ExchangeExecOrderActionField_ExecOrderSysID, &ExchangeExecOrderActionField_ExecOrderSysID_len 
        , &ExchangeExecOrderActionField_ActionFlag 
        , &ExchangeExecOrderActionField_ActionDate, &ExchangeExecOrderActionField_ActionDate_len 
        , &ExchangeExecOrderActionField_ActionTime, &ExchangeExecOrderActionField_ActionTime_len 
        , &ExchangeExecOrderActionField_TraderID, &ExchangeExecOrderActionField_TraderID_len 
        , &ExchangeExecOrderActionField_InstallID 
        , &ExchangeExecOrderActionField_ExecOrderLocalID, &ExchangeExecOrderActionField_ExecOrderLocalID_len 
        , &ExchangeExecOrderActionField_ActionLocalID, &ExchangeExecOrderActionField_ActionLocalID_len 
        , &ExchangeExecOrderActionField_ParticipantID, &ExchangeExecOrderActionField_ParticipantID_len 
        , &ExchangeExecOrderActionField_ClientID, &ExchangeExecOrderActionField_ClientID_len 
        , &ExchangeExecOrderActionField_BusinessUnit, &ExchangeExecOrderActionField_BusinessUnit_len 
        , &ExchangeExecOrderActionField_OrderActionStatus 
        , &ExchangeExecOrderActionField_UserID, &ExchangeExecOrderActionField_UserID_len 
        , &ExchangeExecOrderActionField_ActionType 
        , &ExchangeExecOrderActionField_BranchID, &ExchangeExecOrderActionField_BranchID_len 
        , &ExchangeExecOrderActionField_reserve1, &ExchangeExecOrderActionField_reserve1_len 
        , &ExchangeExecOrderActionField_MacAddress, &ExchangeExecOrderActionField_MacAddress_len 
        , &ExchangeExecOrderActionField_reserve2, &ExchangeExecOrderActionField_reserve2_len 
        , &ExchangeExecOrderActionField_Volume 
        , &ExchangeExecOrderActionField_IPAddress, &ExchangeExecOrderActionField_IPAddress_len 
        , &ExchangeExecOrderActionField_ExchangeInstID, &ExchangeExecOrderActionField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeExecOrderActionField_ExchangeID != NULL ) {
        if(ExchangeExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeExecOrderActionField_ExchangeID, ExchangeExecOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeExecOrderActionField_ExchangeID = NULL;
    }
            
    ///执行宣告操作编号
    // TThostFtdcExecOrderSysIDType char[21]
    if( ExchangeExecOrderActionField_ExecOrderSysID != NULL ) {
        if(ExchangeExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
            return -1;
        }
        // memset(self->data.ExecOrderSysID, 0, sizeof(self->data.ExecOrderSysID));
        // memcpy(self->data.ExecOrderSysID, ExchangeExecOrderActionField_ExecOrderSysID, ExchangeExecOrderActionField_ExecOrderSysID_len);        
        strncpy(self->data.ExecOrderSysID, ExchangeExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
        ExchangeExecOrderActionField_ExecOrderSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = ExchangeExecOrderActionField_ActionFlag;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( ExchangeExecOrderActionField_ActionDate != NULL ) {
        if(ExchangeExecOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, ExchangeExecOrderActionField_ActionDate, ExchangeExecOrderActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, ExchangeExecOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
        ExchangeExecOrderActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( ExchangeExecOrderActionField_ActionTime != NULL ) {
        if(ExchangeExecOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, ExchangeExecOrderActionField_ActionTime, ExchangeExecOrderActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, ExchangeExecOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
        ExchangeExecOrderActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeExecOrderActionField_TraderID != NULL ) {
        if(ExchangeExecOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeExecOrderActionField_TraderID, ExchangeExecOrderActionField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeExecOrderActionField_TraderID, sizeof(self->data.TraderID) );
        ExchangeExecOrderActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeExecOrderActionField_InstallID;
        
    ///本地执行宣告编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeExecOrderActionField_ExecOrderLocalID != NULL ) {
        if(ExchangeExecOrderActionField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
            return -1;
        }
        // memset(self->data.ExecOrderLocalID, 0, sizeof(self->data.ExecOrderLocalID));
        // memcpy(self->data.ExecOrderLocalID, ExchangeExecOrderActionField_ExecOrderLocalID, ExchangeExecOrderActionField_ExecOrderLocalID_len);        
        strncpy(self->data.ExecOrderLocalID, ExchangeExecOrderActionField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
        ExchangeExecOrderActionField_ExecOrderLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeExecOrderActionField_ActionLocalID != NULL ) {
        if(ExchangeExecOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, ExchangeExecOrderActionField_ActionLocalID, ExchangeExecOrderActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, ExchangeExecOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        ExchangeExecOrderActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeExecOrderActionField_ParticipantID != NULL ) {
        if(ExchangeExecOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeExecOrderActionField_ParticipantID, ExchangeExecOrderActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeExecOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeExecOrderActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeExecOrderActionField_ClientID != NULL ) {
        if(ExchangeExecOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeExecOrderActionField_ClientID, ExchangeExecOrderActionField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeExecOrderActionField_ClientID, sizeof(self->data.ClientID) );
        ExchangeExecOrderActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeExecOrderActionField_BusinessUnit != NULL ) {
        if(ExchangeExecOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeExecOrderActionField_BusinessUnit, ExchangeExecOrderActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeExecOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeExecOrderActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = ExchangeExecOrderActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ExchangeExecOrderActionField_UserID != NULL ) {
        if(ExchangeExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ExchangeExecOrderActionField_UserID, ExchangeExecOrderActionField_UserID_len);        
        strncpy(self->data.UserID, ExchangeExecOrderActionField_UserID, sizeof(self->data.UserID) );
        ExchangeExecOrderActionField_UserID = NULL;
    }
            
    ///执行类型
    // TThostFtdcActionTypeType char
    self->data.ActionType = ExchangeExecOrderActionField_ActionType;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeExecOrderActionField_BranchID != NULL ) {
        if(ExchangeExecOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeExecOrderActionField_BranchID, ExchangeExecOrderActionField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeExecOrderActionField_BranchID, sizeof(self->data.BranchID) );
        ExchangeExecOrderActionField_BranchID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeExecOrderActionField_reserve1 != NULL ) {
        if(ExchangeExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeExecOrderActionField_reserve1, ExchangeExecOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
        ExchangeExecOrderActionField_reserve1 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeExecOrderActionField_MacAddress != NULL ) {
        if(ExchangeExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeExecOrderActionField_MacAddress, ExchangeExecOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeExecOrderActionField_MacAddress = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeExecOrderActionField_reserve2 != NULL ) {
        if(ExchangeExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeExecOrderActionField_reserve2, ExchangeExecOrderActionField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
        ExchangeExecOrderActionField_reserve2 = NULL;
    }
            
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = ExchangeExecOrderActionField_Volume;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeExecOrderActionField_IPAddress != NULL ) {
        if(ExchangeExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeExecOrderActionField_IPAddress, ExchangeExecOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeExecOrderActionField_IPAddress = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeExecOrderActionField_ExchangeInstID != NULL ) {
        if(ExchangeExecOrderActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeExecOrderActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeExecOrderActionField_ExchangeInstID, ExchangeExecOrderActionField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeExecOrderActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeExecOrderActionField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeExecOrderActionField_dealloc(PyCThostFtdcExchangeExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_repr(PyCThostFtdcExchangeExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ExecOrderSysID", self->data.ExecOrderSysID//, (Py_ssize_t)sizeof(self->data.ExecOrderSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"ExecOrderLocalID", self->data.ExecOrderLocalID//, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ActionType", self->data.ActionType 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"Volume", self->data.Volume 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExchangeID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeExecOrderActionField_set_ExchangeID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///执行宣告操作编号
// TThostFtdcExecOrderSysIDType char[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderSysID, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
    return PyBytes_FromString(self->data.ExecOrderSysID);
}

///执行宣告操作编号
// TThostFtdcExecOrderSysIDType char[21]
static int PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionFlag(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcExchangeExecOrderActionField_set_ActionFlag(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    self->data.ActionFlag = *buf;
    return 0;
}
            
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionDate(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeExecOrderActionField_set_ActionDate(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
    // memcpy(self->data.ActionDate, buf, len);
    strncpy(self->data.ActionDate, buf, sizeof(self->data.ActionDate));
    return 0;
}
            
///操作时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionTime(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeExecOrderActionField_set_ActionTime(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
    // memcpy(self->data.ActionTime, buf, len);
    strncpy(self->data.ActionTime, buf, sizeof(self->data.ActionTime));
    return 0;
}
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_TraderID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeExecOrderActionField_set_TraderID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_InstallID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeExecOrderActionField_set_InstallID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
        
///本地执行宣告编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExecOrderLocalID, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
    return PyBytes_FromString(self->data.ExecOrderLocalID);
}

///本地执行宣告编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionLocalID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeExecOrderActionField_set_ActionLocalID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ParticipantID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeExecOrderActionField_set_ParticipantID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ClientID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeExecOrderActionField_set_ClientID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///业务单元
// TThostFtdcBusinessUnitType char[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_BusinessUnit(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeExecOrderActionField_set_BusinessUnit(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///报单操作状态
// TThostFtdcOrderActionStatusType char
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_OrderActionStatus(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcExchangeExecOrderActionField_set_OrderActionStatus(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    self->data.OrderActionStatus = *buf;
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_UserID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExchangeExecOrderActionField_set_UserID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///执行类型
// TThostFtdcActionTypeType char
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionType(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

///执行类型
// TThostFtdcActionTypeType char
static int PyCThostFtdcExchangeExecOrderActionField_set_ActionType(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_BranchID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeExecOrderActionField_set_BranchID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_reserve1(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeExecOrderActionField_set_reserve1(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_MacAddress(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeExecOrderActionField_set_MacAddress(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_reserve2(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeExecOrderActionField_set_reserve2(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_Volume(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeExecOrderActionField_set_Volume(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
        
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_IPAddress(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeExecOrderActionField_set_IPAddress(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExchangeInstID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeExecOrderActionField_set_ExchangeInstID(PyCThostFtdcExchangeExecOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeExecOrderActionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///执行宣告操作编号 
    {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionDate, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionTime, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_TraderID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_InstallID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地执行宣告编号 
    {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderLocalID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ClientID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeExecOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeExecOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeExecOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeExecOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_UserID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///执行类型 
    {(char *)"ActionType", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionType, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionType, (char *)"ActionType", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_BranchID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_BranchID, (char *)"BranchID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeExecOrderActionField_get_reserve1, (setter)PyCThostFtdcExchangeExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcExchangeExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeExecOrderActionField_get_reserve2, (setter)PyCThostFtdcExchangeExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcExchangeExecOrderActionField_get_Volume, (setter)PyCThostFtdcExchangeExecOrderActionField_set_Volume, (char *)"Volume", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcExchangeExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeExecOrderActionField", (PyObject *)&PyCThostFtdcExchangeExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
