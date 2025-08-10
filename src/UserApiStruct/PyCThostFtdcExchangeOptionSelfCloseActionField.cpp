
#include "PyCThostFtdcExchangeOptionSelfCloseActionField.h"

///交易所期权自对冲操作

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOptionSelfCloseActionField *self = (PyCThostFtdcExchangeOptionSelfCloseActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOptionSelfCloseActionField_init(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "OptionSelfCloseLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "BranchID", "reserve1", "MacAddress", "reserve2", "OptSelfCloseFlag", "IPAddress", "ExchangeInstID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeOptionSelfCloseActionField_ExchangeID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_ExchangeID_len = 0;
            
    ///期权自对冲操作编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char ExchangeOptionSelfCloseActionField_ActionFlag = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *ExchangeOptionSelfCloseActionField_ActionDate = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOptionSelfCloseActionField_ActionTime = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeOptionSelfCloseActionField_TraderID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeOptionSelfCloseActionField_InstallID = 0;
        
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeOptionSelfCloseActionField_ActionLocalID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeOptionSelfCloseActionField_ParticipantID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeOptionSelfCloseActionField_ClientID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeOptionSelfCloseActionField_BusinessUnit = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char ExchangeOptionSelfCloseActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExchangeOptionSelfCloseActionField_UserID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_UserID_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeOptionSelfCloseActionField_BranchID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_BranchID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeOptionSelfCloseActionField_reserve1 = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_reserve1_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeOptionSelfCloseActionField_MacAddress = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_MacAddress_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *ExchangeOptionSelfCloseActionField_reserve2 = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_reserve2_len = 0;
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    char ExchangeOptionSelfCloseActionField_OptSelfCloseFlag = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeOptionSelfCloseActionField_IPAddress = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_IPAddress_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *ExchangeOptionSelfCloseActionField_ExchangeInstID = NULL;
    Py_ssize_t ExchangeOptionSelfCloseActionField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#is#s#s#s#s#cs#s#s#s#s#cs#s#", (char **)kwlist
#endif

        , &ExchangeOptionSelfCloseActionField_ExchangeID, &ExchangeOptionSelfCloseActionField_ExchangeID_len 
        , &ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, &ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len 
        , &ExchangeOptionSelfCloseActionField_ActionFlag 
        , &ExchangeOptionSelfCloseActionField_ActionDate, &ExchangeOptionSelfCloseActionField_ActionDate_len 
        , &ExchangeOptionSelfCloseActionField_ActionTime, &ExchangeOptionSelfCloseActionField_ActionTime_len 
        , &ExchangeOptionSelfCloseActionField_TraderID, &ExchangeOptionSelfCloseActionField_TraderID_len 
        , &ExchangeOptionSelfCloseActionField_InstallID 
        , &ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, &ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len 
        , &ExchangeOptionSelfCloseActionField_ActionLocalID, &ExchangeOptionSelfCloseActionField_ActionLocalID_len 
        , &ExchangeOptionSelfCloseActionField_ParticipantID, &ExchangeOptionSelfCloseActionField_ParticipantID_len 
        , &ExchangeOptionSelfCloseActionField_ClientID, &ExchangeOptionSelfCloseActionField_ClientID_len 
        , &ExchangeOptionSelfCloseActionField_BusinessUnit, &ExchangeOptionSelfCloseActionField_BusinessUnit_len 
        , &ExchangeOptionSelfCloseActionField_OrderActionStatus 
        , &ExchangeOptionSelfCloseActionField_UserID, &ExchangeOptionSelfCloseActionField_UserID_len 
        , &ExchangeOptionSelfCloseActionField_BranchID, &ExchangeOptionSelfCloseActionField_BranchID_len 
        , &ExchangeOptionSelfCloseActionField_reserve1, &ExchangeOptionSelfCloseActionField_reserve1_len 
        , &ExchangeOptionSelfCloseActionField_MacAddress, &ExchangeOptionSelfCloseActionField_MacAddress_len 
        , &ExchangeOptionSelfCloseActionField_reserve2, &ExchangeOptionSelfCloseActionField_reserve2_len 
        , &ExchangeOptionSelfCloseActionField_OptSelfCloseFlag 
        , &ExchangeOptionSelfCloseActionField_IPAddress, &ExchangeOptionSelfCloseActionField_IPAddress_len 
        , &ExchangeOptionSelfCloseActionField_ExchangeInstID, &ExchangeOptionSelfCloseActionField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeOptionSelfCloseActionField_ExchangeID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeOptionSelfCloseActionField_ExchangeID, ExchangeOptionSelfCloseActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeOptionSelfCloseActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeOptionSelfCloseActionField_ExchangeID = NULL;
    }
            
    ///期权自对冲操作编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseSysID, 0, sizeof(self->data.OptionSelfCloseSysID));
        // memcpy(self->data.OptionSelfCloseSysID, ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len);        
        strncpy(self->data.OptionSelfCloseSysID, ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
        ExchangeOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = ExchangeOptionSelfCloseActionField_ActionFlag;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( ExchangeOptionSelfCloseActionField_ActionDate != NULL ) {
        if(ExchangeOptionSelfCloseActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, ExchangeOptionSelfCloseActionField_ActionDate, ExchangeOptionSelfCloseActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, ExchangeOptionSelfCloseActionField_ActionDate, sizeof(self->data.ActionDate) );
        ExchangeOptionSelfCloseActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOptionSelfCloseActionField_ActionTime != NULL ) {
        if(ExchangeOptionSelfCloseActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, ExchangeOptionSelfCloseActionField_ActionTime, ExchangeOptionSelfCloseActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, ExchangeOptionSelfCloseActionField_ActionTime, sizeof(self->data.ActionTime) );
        ExchangeOptionSelfCloseActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeOptionSelfCloseActionField_TraderID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeOptionSelfCloseActionField_TraderID, ExchangeOptionSelfCloseActionField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeOptionSelfCloseActionField_TraderID, sizeof(self->data.TraderID) );
        ExchangeOptionSelfCloseActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeOptionSelfCloseActionField_InstallID;
        
    ///本地期权自对冲编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
            return -1;
        }
        // memset(self->data.OptionSelfCloseLocalID, 0, sizeof(self->data.OptionSelfCloseLocalID));
        // memcpy(self->data.OptionSelfCloseLocalID, ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len);        
        strncpy(self->data.OptionSelfCloseLocalID, ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
        ExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeOptionSelfCloseActionField_ActionLocalID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, ExchangeOptionSelfCloseActionField_ActionLocalID, ExchangeOptionSelfCloseActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, ExchangeOptionSelfCloseActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        ExchangeOptionSelfCloseActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeOptionSelfCloseActionField_ParticipantID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeOptionSelfCloseActionField_ParticipantID, ExchangeOptionSelfCloseActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeOptionSelfCloseActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeOptionSelfCloseActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeOptionSelfCloseActionField_ClientID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeOptionSelfCloseActionField_ClientID, ExchangeOptionSelfCloseActionField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeOptionSelfCloseActionField_ClientID, sizeof(self->data.ClientID) );
        ExchangeOptionSelfCloseActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeOptionSelfCloseActionField_BusinessUnit != NULL ) {
        if(ExchangeOptionSelfCloseActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeOptionSelfCloseActionField_BusinessUnit, ExchangeOptionSelfCloseActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeOptionSelfCloseActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeOptionSelfCloseActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = ExchangeOptionSelfCloseActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ExchangeOptionSelfCloseActionField_UserID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ExchangeOptionSelfCloseActionField_UserID, ExchangeOptionSelfCloseActionField_UserID_len);        
        strncpy(self->data.UserID, ExchangeOptionSelfCloseActionField_UserID, sizeof(self->data.UserID) );
        ExchangeOptionSelfCloseActionField_UserID = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeOptionSelfCloseActionField_BranchID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeOptionSelfCloseActionField_BranchID, ExchangeOptionSelfCloseActionField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeOptionSelfCloseActionField_BranchID, sizeof(self->data.BranchID) );
        ExchangeOptionSelfCloseActionField_BranchID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeOptionSelfCloseActionField_reserve1 != NULL ) {
        if(ExchangeOptionSelfCloseActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeOptionSelfCloseActionField_reserve1, ExchangeOptionSelfCloseActionField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeOptionSelfCloseActionField_reserve1, sizeof(self->data.reserve1) );
        ExchangeOptionSelfCloseActionField_reserve1 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeOptionSelfCloseActionField_MacAddress != NULL ) {
        if(ExchangeOptionSelfCloseActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeOptionSelfCloseActionField_MacAddress, ExchangeOptionSelfCloseActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeOptionSelfCloseActionField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeOptionSelfCloseActionField_MacAddress = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( ExchangeOptionSelfCloseActionField_reserve2 != NULL ) {
        if(ExchangeOptionSelfCloseActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ExchangeOptionSelfCloseActionField_reserve2, ExchangeOptionSelfCloseActionField_reserve2_len);        
        strncpy(self->data.reserve2, ExchangeOptionSelfCloseActionField_reserve2, sizeof(self->data.reserve2) );
        ExchangeOptionSelfCloseActionField_reserve2 = NULL;
    }
            
    ///期权行权的头寸是否自对冲
    // TThostFtdcOptSelfCloseFlagType char
    self->data.OptSelfCloseFlag = ExchangeOptionSelfCloseActionField_OptSelfCloseFlag;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeOptionSelfCloseActionField_IPAddress != NULL ) {
        if(ExchangeOptionSelfCloseActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeOptionSelfCloseActionField_IPAddress, ExchangeOptionSelfCloseActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeOptionSelfCloseActionField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeOptionSelfCloseActionField_IPAddress = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( ExchangeOptionSelfCloseActionField_ExchangeInstID != NULL ) {
        if(ExchangeOptionSelfCloseActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", ExchangeOptionSelfCloseActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, ExchangeOptionSelfCloseActionField_ExchangeInstID, ExchangeOptionSelfCloseActionField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, ExchangeOptionSelfCloseActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        ExchangeOptionSelfCloseActionField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeOptionSelfCloseActionField_dealloc(PyCThostFtdcExchangeOptionSelfCloseActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_repr(PyCThostFtdcExchangeOptionSelfCloseActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OptionSelfCloseSysID", self->data.OptionSelfCloseSysID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"OptSelfCloseFlag", self->data.OptSelfCloseFlag 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///期权自对冲操作编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseSysID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
    return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

///期权自对冲操作编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionFlag(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionFlag(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionDate(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionDate(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionTime(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionTime(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_TraderID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_TraderID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_InstallID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_InstallID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
        
///本地期权自对冲编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OptionSelfCloseLocalID, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
    return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

///本地期权自对冲编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ClientID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ClientID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OrderActionStatus(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OrderActionStatus(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_UserID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_UserID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_BranchID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_BranchID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve1(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve1(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_MacAddress(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_MacAddress(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve2(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve2(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///期权行权的头寸是否自对冲
// TThostFtdcOptSelfCloseFlagType char
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

///期权行权的头寸是否自对冲
// TThostFtdcOptSelfCloseFlagType char
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_IPAddress(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_IPAddress(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeOptionSelfCloseActionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///期权自对冲操作编号 
    {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionDate, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionTime, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_TraderID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_InstallID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地期权自对冲编号 
    {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ClientID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_UserID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_UserID, (char *)"UserID", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_BranchID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_BranchID, (char *)"BranchID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve1, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve1, (char *)"reserve1", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_MacAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve2, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve2, (char *)"reserve2", NULL},
    ///期权行权的头寸是否自对冲 
    {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptSelfCloseFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_IPAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_IPAddress, (char *)"IPAddress", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOptionSelfCloseActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOptionSelfCloseActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOptionSelfCloseActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOptionSelfCloseActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOptionSelfCloseActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOptionSelfCloseActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOptionSelfCloseActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOptionSelfCloseActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOptionSelfCloseActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOptionSelfCloseActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOptionSelfCloseActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOptionSelfCloseActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOptionSelfCloseActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOptionSelfCloseActionField", (PyObject *)&PyCThostFtdcExchangeOptionSelfCloseActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOptionSelfCloseActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeOptionSelfCloseActionFieldType);
		return -1;
    }

    return 0;
}
