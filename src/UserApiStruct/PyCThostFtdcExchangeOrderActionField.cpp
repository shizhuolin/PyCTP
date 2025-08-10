
#include "PyCThostFtdcExchangeOrderActionField.h"

///交易所报单操作

static PyObject *PyCThostFtdcExchangeOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOrderActionField *self = (PyCThostFtdcExchangeOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOrderActionField_init(PyCThostFtdcExchangeOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "BranchID", "reserve1", "MacAddress", "IPAddress",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeOrderActionField_ExchangeID = NULL;
    Py_ssize_t ExchangeOrderActionField_ExchangeID_len = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeOrderActionField_OrderSysID = NULL;
    Py_ssize_t ExchangeOrderActionField_OrderSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char ExchangeOrderActionField_ActionFlag = 0;
            
    ///价格
    // TThostFtdcPriceType double
    double ExchangeOrderActionField_LimitPrice = 0.0;
        
    ///数量变化
    // TThostFtdcVolumeType int
    int ExchangeOrderActionField_VolumeChange = 0;
        
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *ExchangeOrderActionField_ActionDate = NULL;
    Py_ssize_t ExchangeOrderActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeOrderActionField_ActionTime = NULL;
    Py_ssize_t ExchangeOrderActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeOrderActionField_TraderID = NULL;
    Py_ssize_t ExchangeOrderActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeOrderActionField_InstallID = 0;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeOrderActionField_OrderLocalID = NULL;
    Py_ssize_t ExchangeOrderActionField_OrderLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeOrderActionField_ActionLocalID = NULL;
    Py_ssize_t ExchangeOrderActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeOrderActionField_ParticipantID = NULL;
    Py_ssize_t ExchangeOrderActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeOrderActionField_ClientID = NULL;
    Py_ssize_t ExchangeOrderActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeOrderActionField_BusinessUnit = NULL;
    Py_ssize_t ExchangeOrderActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char ExchangeOrderActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExchangeOrderActionField_UserID = NULL;
    Py_ssize_t ExchangeOrderActionField_UserID_len = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *ExchangeOrderActionField_BranchID = NULL;
    Py_ssize_t ExchangeOrderActionField_BranchID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeOrderActionField_reserve1 = NULL;
    Py_ssize_t ExchangeOrderActionField_reserve1_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeOrderActionField_MacAddress = NULL;
    Py_ssize_t ExchangeOrderActionField_MacAddress_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeOrderActionField_IPAddress = NULL;
    Py_ssize_t ExchangeOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cdiy#y#y#iy#y#y#y#y#cy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cdis#s#s#is#s#s#s#s#cs#s#s#s#s#", (char **)kwlist
#endif

        , &ExchangeOrderActionField_ExchangeID, &ExchangeOrderActionField_ExchangeID_len 
        , &ExchangeOrderActionField_OrderSysID, &ExchangeOrderActionField_OrderSysID_len 
        , &ExchangeOrderActionField_ActionFlag 
        , &ExchangeOrderActionField_LimitPrice 
        , &ExchangeOrderActionField_VolumeChange 
        , &ExchangeOrderActionField_ActionDate, &ExchangeOrderActionField_ActionDate_len 
        , &ExchangeOrderActionField_ActionTime, &ExchangeOrderActionField_ActionTime_len 
        , &ExchangeOrderActionField_TraderID, &ExchangeOrderActionField_TraderID_len 
        , &ExchangeOrderActionField_InstallID 
        , &ExchangeOrderActionField_OrderLocalID, &ExchangeOrderActionField_OrderLocalID_len 
        , &ExchangeOrderActionField_ActionLocalID, &ExchangeOrderActionField_ActionLocalID_len 
        , &ExchangeOrderActionField_ParticipantID, &ExchangeOrderActionField_ParticipantID_len 
        , &ExchangeOrderActionField_ClientID, &ExchangeOrderActionField_ClientID_len 
        , &ExchangeOrderActionField_BusinessUnit, &ExchangeOrderActionField_BusinessUnit_len 
        , &ExchangeOrderActionField_OrderActionStatus 
        , &ExchangeOrderActionField_UserID, &ExchangeOrderActionField_UserID_len 
        , &ExchangeOrderActionField_BranchID, &ExchangeOrderActionField_BranchID_len 
        , &ExchangeOrderActionField_reserve1, &ExchangeOrderActionField_reserve1_len 
        , &ExchangeOrderActionField_MacAddress, &ExchangeOrderActionField_MacAddress_len 
        , &ExchangeOrderActionField_IPAddress, &ExchangeOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeOrderActionField_ExchangeID != NULL ) {
        if(ExchangeOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeOrderActionField_ExchangeID, ExchangeOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeOrderActionField_ExchangeID = NULL;
    }
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeOrderActionField_OrderSysID != NULL ) {
        if(ExchangeOrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, ExchangeOrderActionField_OrderSysID, ExchangeOrderActionField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, ExchangeOrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
        ExchangeOrderActionField_OrderSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = ExchangeOrderActionField_ActionFlag;
            
    ///价格
    // TThostFtdcPriceType double
    self->data.LimitPrice = ExchangeOrderActionField_LimitPrice;
        
    ///数量变化
    // TThostFtdcVolumeType int
    self->data.VolumeChange = ExchangeOrderActionField_VolumeChange;
        
    ///操作日期
    // TThostFtdcDateType char[9]
    if( ExchangeOrderActionField_ActionDate != NULL ) {
        if(ExchangeOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, ExchangeOrderActionField_ActionDate, ExchangeOrderActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, ExchangeOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
        ExchangeOrderActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( ExchangeOrderActionField_ActionTime != NULL ) {
        if(ExchangeOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, ExchangeOrderActionField_ActionTime, ExchangeOrderActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, ExchangeOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
        ExchangeOrderActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeOrderActionField_TraderID != NULL ) {
        if(ExchangeOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeOrderActionField_TraderID, ExchangeOrderActionField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeOrderActionField_TraderID, sizeof(self->data.TraderID) );
        ExchangeOrderActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeOrderActionField_InstallID;
        
    ///本地报单编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeOrderActionField_OrderLocalID != NULL ) {
        if(ExchangeOrderActionField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
            return -1;
        }
        // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
        // memcpy(self->data.OrderLocalID, ExchangeOrderActionField_OrderLocalID, ExchangeOrderActionField_OrderLocalID_len);        
        strncpy(self->data.OrderLocalID, ExchangeOrderActionField_OrderLocalID, sizeof(self->data.OrderLocalID) );
        ExchangeOrderActionField_OrderLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeOrderActionField_ActionLocalID != NULL ) {
        if(ExchangeOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, ExchangeOrderActionField_ActionLocalID, ExchangeOrderActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, ExchangeOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        ExchangeOrderActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeOrderActionField_ParticipantID != NULL ) {
        if(ExchangeOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeOrderActionField_ParticipantID, ExchangeOrderActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeOrderActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeOrderActionField_ClientID != NULL ) {
        if(ExchangeOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeOrderActionField_ClientID, ExchangeOrderActionField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeOrderActionField_ClientID, sizeof(self->data.ClientID) );
        ExchangeOrderActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeOrderActionField_BusinessUnit != NULL ) {
        if(ExchangeOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeOrderActionField_BusinessUnit, ExchangeOrderActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeOrderActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = ExchangeOrderActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ExchangeOrderActionField_UserID != NULL ) {
        if(ExchangeOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ExchangeOrderActionField_UserID, ExchangeOrderActionField_UserID_len);        
        strncpy(self->data.UserID, ExchangeOrderActionField_UserID, sizeof(self->data.UserID) );
        ExchangeOrderActionField_UserID = NULL;
    }
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( ExchangeOrderActionField_BranchID != NULL ) {
        if(ExchangeOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, ExchangeOrderActionField_BranchID, ExchangeOrderActionField_BranchID_len);        
        strncpy(self->data.BranchID, ExchangeOrderActionField_BranchID, sizeof(self->data.BranchID) );
        ExchangeOrderActionField_BranchID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeOrderActionField_reserve1 != NULL ) {
        if(ExchangeOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeOrderActionField_reserve1, ExchangeOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeOrderActionField_reserve1, sizeof(self->data.reserve1) );
        ExchangeOrderActionField_reserve1 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeOrderActionField_MacAddress != NULL ) {
        if(ExchangeOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeOrderActionField_MacAddress, ExchangeOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeOrderActionField_MacAddress = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeOrderActionField_IPAddress != NULL ) {
        if(ExchangeOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeOrderActionField_IPAddress, ExchangeOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeOrderActionField_dealloc(PyCThostFtdcExchangeOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_repr(PyCThostFtdcExchangeOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"LimitPrice", self->data.LimitPrice 
        ,"VolumeChange", self->data.VolumeChange 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"OrderLocalID", self->data.OrderLocalID//, (Py_ssize_t)sizeof(self->data.OrderLocalID) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeOrderActionField_get_ExchangeID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeOrderActionField_set_ExchangeID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
            
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcExchangeOrderActionField_get_OrderSysID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeOrderActionField_set_OrderSysID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionFlag(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcExchangeOrderActionField_set_ActionFlag(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
            
///价格
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcExchangeOrderActionField_get_LimitPrice(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LimitPrice);
}

///价格
// TThostFtdcPriceType double
static int PyCThostFtdcExchangeOrderActionField_set_LimitPrice(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LimitPrice = buf;
    return 0;
}
        
///数量变化
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcExchangeOrderActionField_get_VolumeChange(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.VolumeChange);
#else
    return PyInt_FromLong(self->data.VolumeChange);
#endif
}

///数量变化
// TThostFtdcVolumeType int
static int PyCThostFtdcExchangeOrderActionField_set_VolumeChange(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the VolumeChange value out of range for C int");
        return -1;
    }
    self->data.VolumeChange = (int)buf;
    return 0;
}
        
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionDate(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeOrderActionField_set_ActionDate(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionTime(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeOrderActionField_set_ActionTime(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_TraderID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeOrderActionField_set_TraderID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_InstallID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeOrderActionField_set_InstallID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
        
///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeOrderActionField_get_OrderLocalID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderLocalID, (Py_ssize_t)sizeof(self->data.OrderLocalID));
    return PyBytes_FromString(self->data.OrderLocalID);
}

///本地报单编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeOrderActionField_set_OrderLocalID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.OrderLocalID, 0, sizeof(self->data.OrderLocalID));
    // memcpy(self->data.OrderLocalID, buf, len);
    strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
    return 0;
}
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionLocalID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeOrderActionField_set_ActionLocalID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_ParticipantID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeOrderActionField_set_ParticipantID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_ClientID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeOrderActionField_set_ClientID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_BusinessUnit(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeOrderActionField_set_BusinessUnit(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_OrderActionStatus(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcExchangeOrderActionField_set_OrderActionStatus(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_UserID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExchangeOrderActionField_set_UserID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_BranchID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcExchangeOrderActionField_set_BranchID(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_reserve1(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeOrderActionField_set_reserve1(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeOrderActionField_get_MacAddress(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeOrderActionField_set_MacAddress(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcExchangeOrderActionField_get_IPAddress(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeOrderActionField_set_IPAddress(PyCThostFtdcExchangeOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeOrderActionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcExchangeOrderActionField_get_OrderSysID, (setter)PyCThostFtdcExchangeOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///价格 
    {(char *)"LimitPrice", (getter)PyCThostFtdcExchangeOrderActionField_get_LimitPrice, (setter)PyCThostFtdcExchangeOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
    ///数量变化 
    {(char *)"VolumeChange", (getter)PyCThostFtdcExchangeOrderActionField_get_VolumeChange, (setter)PyCThostFtdcExchangeOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionDate, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionTime, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeOrderActionField_get_TraderID, (setter)PyCThostFtdcExchangeOrderActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeOrderActionField_get_InstallID, (setter)PyCThostFtdcExchangeOrderActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报单编号 
    {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeOrderActionField_get_OrderLocalID, (setter)PyCThostFtdcExchangeOrderActionField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeOrderActionField_get_ClientID, (setter)PyCThostFtdcExchangeOrderActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcExchangeOrderActionField_get_UserID, (setter)PyCThostFtdcExchangeOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcExchangeOrderActionField_get_BranchID, (setter)PyCThostFtdcExchangeOrderActionField_set_BranchID, (char *)"BranchID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeOrderActionField_get_reserve1, (setter)PyCThostFtdcExchangeOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOrderActionField_get_MacAddress, (setter)PyCThostFtdcExchangeOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeOrderActionField_get_IPAddress, (setter)PyCThostFtdcExchangeOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderActionField", (PyObject *)&PyCThostFtdcExchangeOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeOrderActionFieldType);
		return -1;
    }

    return 0;
}
