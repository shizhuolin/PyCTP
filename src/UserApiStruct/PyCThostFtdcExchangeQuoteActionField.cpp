
#include "PyCThostFtdcExchangeQuoteActionField.h"

///交易所报价操作

static PyObject *PyCThostFtdcExchangeQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeQuoteActionField *self = (PyCThostFtdcExchangeQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeQuoteActionField_init(PyCThostFtdcExchangeQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "QuoteSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "QuoteLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "reserve1", "MacAddress", "IPAddress",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeQuoteActionField_ExchangeID = NULL;
    Py_ssize_t ExchangeQuoteActionField_ExchangeID_len = 0;
            
    ///报价操作编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ExchangeQuoteActionField_QuoteSysID = NULL;
    Py_ssize_t ExchangeQuoteActionField_QuoteSysID_len = 0;
            
    ///操作标志
    // TThostFtdcActionFlagType char
    char ExchangeQuoteActionField_ActionFlag = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *ExchangeQuoteActionField_ActionDate = NULL;
    Py_ssize_t ExchangeQuoteActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeQuoteActionField_ActionTime = NULL;
    Py_ssize_t ExchangeQuoteActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeQuoteActionField_TraderID = NULL;
    Py_ssize_t ExchangeQuoteActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeQuoteActionField_InstallID = 0;
        
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeQuoteActionField_QuoteLocalID = NULL;
    Py_ssize_t ExchangeQuoteActionField_QuoteLocalID_len = 0;
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeQuoteActionField_ActionLocalID = NULL;
    Py_ssize_t ExchangeQuoteActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeQuoteActionField_ParticipantID = NULL;
    Py_ssize_t ExchangeQuoteActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeQuoteActionField_ClientID = NULL;
    Py_ssize_t ExchangeQuoteActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeQuoteActionField_BusinessUnit = NULL;
    Py_ssize_t ExchangeQuoteActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char ExchangeQuoteActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExchangeQuoteActionField_UserID = NULL;
    Py_ssize_t ExchangeQuoteActionField_UserID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeQuoteActionField_reserve1 = NULL;
    Py_ssize_t ExchangeQuoteActionField_reserve1_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeQuoteActionField_MacAddress = NULL;
    Py_ssize_t ExchangeQuoteActionField_MacAddress_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeQuoteActionField_IPAddress = NULL;
    Py_ssize_t ExchangeQuoteActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#is#s#s#s#s#cs#s#s#s#", (char **)kwlist
#endif

        , &ExchangeQuoteActionField_ExchangeID, &ExchangeQuoteActionField_ExchangeID_len 
        , &ExchangeQuoteActionField_QuoteSysID, &ExchangeQuoteActionField_QuoteSysID_len 
        , &ExchangeQuoteActionField_ActionFlag 
        , &ExchangeQuoteActionField_ActionDate, &ExchangeQuoteActionField_ActionDate_len 
        , &ExchangeQuoteActionField_ActionTime, &ExchangeQuoteActionField_ActionTime_len 
        , &ExchangeQuoteActionField_TraderID, &ExchangeQuoteActionField_TraderID_len 
        , &ExchangeQuoteActionField_InstallID 
        , &ExchangeQuoteActionField_QuoteLocalID, &ExchangeQuoteActionField_QuoteLocalID_len 
        , &ExchangeQuoteActionField_ActionLocalID, &ExchangeQuoteActionField_ActionLocalID_len 
        , &ExchangeQuoteActionField_ParticipantID, &ExchangeQuoteActionField_ParticipantID_len 
        , &ExchangeQuoteActionField_ClientID, &ExchangeQuoteActionField_ClientID_len 
        , &ExchangeQuoteActionField_BusinessUnit, &ExchangeQuoteActionField_BusinessUnit_len 
        , &ExchangeQuoteActionField_OrderActionStatus 
        , &ExchangeQuoteActionField_UserID, &ExchangeQuoteActionField_UserID_len 
        , &ExchangeQuoteActionField_reserve1, &ExchangeQuoteActionField_reserve1_len 
        , &ExchangeQuoteActionField_MacAddress, &ExchangeQuoteActionField_MacAddress_len 
        , &ExchangeQuoteActionField_IPAddress, &ExchangeQuoteActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeQuoteActionField_ExchangeID != NULL ) {
        if(ExchangeQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeQuoteActionField_ExchangeID, ExchangeQuoteActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeQuoteActionField_ExchangeID = NULL;
    }
            
    ///报价操作编号
    // TThostFtdcOrderSysIDType char[21]
    if( ExchangeQuoteActionField_QuoteSysID != NULL ) {
        if(ExchangeQuoteActionField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
            return -1;
        }
        // memset(self->data.QuoteSysID, 0, sizeof(self->data.QuoteSysID));
        // memcpy(self->data.QuoteSysID, ExchangeQuoteActionField_QuoteSysID, ExchangeQuoteActionField_QuoteSysID_len);        
        strncpy(self->data.QuoteSysID, ExchangeQuoteActionField_QuoteSysID, sizeof(self->data.QuoteSysID) );
        ExchangeQuoteActionField_QuoteSysID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionFlagType char
    self->data.ActionFlag = ExchangeQuoteActionField_ActionFlag;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( ExchangeQuoteActionField_ActionDate != NULL ) {
        if(ExchangeQuoteActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, ExchangeQuoteActionField_ActionDate, ExchangeQuoteActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, ExchangeQuoteActionField_ActionDate, sizeof(self->data.ActionDate) );
        ExchangeQuoteActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( ExchangeQuoteActionField_ActionTime != NULL ) {
        if(ExchangeQuoteActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, ExchangeQuoteActionField_ActionTime, ExchangeQuoteActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, ExchangeQuoteActionField_ActionTime, sizeof(self->data.ActionTime) );
        ExchangeQuoteActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeQuoteActionField_TraderID != NULL ) {
        if(ExchangeQuoteActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeQuoteActionField_TraderID, ExchangeQuoteActionField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeQuoteActionField_TraderID, sizeof(self->data.TraderID) );
        ExchangeQuoteActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeQuoteActionField_InstallID;
        
    ///本地报价编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeQuoteActionField_QuoteLocalID != NULL ) {
        if(ExchangeQuoteActionField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
            return -1;
        }
        // memset(self->data.QuoteLocalID, 0, sizeof(self->data.QuoteLocalID));
        // memcpy(self->data.QuoteLocalID, ExchangeQuoteActionField_QuoteLocalID, ExchangeQuoteActionField_QuoteLocalID_len);        
        strncpy(self->data.QuoteLocalID, ExchangeQuoteActionField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
        ExchangeQuoteActionField_QuoteLocalID = NULL;
    }
            
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeQuoteActionField_ActionLocalID != NULL ) {
        if(ExchangeQuoteActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, ExchangeQuoteActionField_ActionLocalID, ExchangeQuoteActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, ExchangeQuoteActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        ExchangeQuoteActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeQuoteActionField_ParticipantID != NULL ) {
        if(ExchangeQuoteActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeQuoteActionField_ParticipantID, ExchangeQuoteActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeQuoteActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeQuoteActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeQuoteActionField_ClientID != NULL ) {
        if(ExchangeQuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeQuoteActionField_ClientID, ExchangeQuoteActionField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeQuoteActionField_ClientID, sizeof(self->data.ClientID) );
        ExchangeQuoteActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeQuoteActionField_BusinessUnit != NULL ) {
        if(ExchangeQuoteActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeQuoteActionField_BusinessUnit, ExchangeQuoteActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeQuoteActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeQuoteActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = ExchangeQuoteActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ExchangeQuoteActionField_UserID != NULL ) {
        if(ExchangeQuoteActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ExchangeQuoteActionField_UserID, ExchangeQuoteActionField_UserID_len);        
        strncpy(self->data.UserID, ExchangeQuoteActionField_UserID, sizeof(self->data.UserID) );
        ExchangeQuoteActionField_UserID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeQuoteActionField_reserve1 != NULL ) {
        if(ExchangeQuoteActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeQuoteActionField_reserve1, ExchangeQuoteActionField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeQuoteActionField_reserve1, sizeof(self->data.reserve1) );
        ExchangeQuoteActionField_reserve1 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeQuoteActionField_MacAddress != NULL ) {
        if(ExchangeQuoteActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeQuoteActionField_MacAddress, ExchangeQuoteActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeQuoteActionField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeQuoteActionField_MacAddress = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeQuoteActionField_IPAddress != NULL ) {
        if(ExchangeQuoteActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeQuoteActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeQuoteActionField_IPAddress, ExchangeQuoteActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeQuoteActionField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeQuoteActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeQuoteActionField_dealloc(PyCThostFtdcExchangeQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_repr(PyCThostFtdcExchangeQuoteActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"QuoteSysID", self->data.QuoteSysID//, (Py_ssize_t)sizeof(self->data.QuoteSysID) 
        ,"ActionFlag", self->data.ActionFlag 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
        ,"QuoteLocalID", self->data.QuoteLocalID//, (Py_ssize_t)sizeof(self->data.QuoteLocalID) 
        ,"ActionLocalID", self->data.ActionLocalID//, (Py_ssize_t)sizeof(self->data.ActionLocalID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"BusinessUnit", self->data.BusinessUnit//, (Py_ssize_t)sizeof(self->data.BusinessUnit) 
        ,"OrderActionStatus", self->data.OrderActionStatus 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ExchangeID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeQuoteActionField_set_ExchangeID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
            
///报价操作编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_QuoteSysID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteSysID, (Py_ssize_t)sizeof(self->data.QuoteSysID));
    return PyBytes_FromString(self->data.QuoteSysID);
}

///报价操作编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcExchangeQuoteActionField_set_QuoteSysID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.QuoteSysID, 0, sizeof(self->data.QuoteSysID));
    // memcpy(self->data.QuoteSysID, buf, len);
    strncpy(self->data.QuoteSysID, buf, sizeof(self->data.QuoteSysID));
    return 0;
}
            
///操作标志
// TThostFtdcActionFlagType char
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionFlag(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

///操作标志
// TThostFtdcActionFlagType char
static int PyCThostFtdcExchangeQuoteActionField_set_ActionFlag(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionDate(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeQuoteActionField_set_ActionDate(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionTime(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeQuoteActionField_set_ActionTime(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_TraderID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeQuoteActionField_set_TraderID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_InstallID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeQuoteActionField_set_InstallID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
        
///本地报价编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_QuoteLocalID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteLocalID, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
    return PyBytes_FromString(self->data.QuoteLocalID);
}

///本地报价编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeQuoteActionField_set_QuoteLocalID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.QuoteLocalID, 0, sizeof(self->data.QuoteLocalID));
    // memcpy(self->data.QuoteLocalID, buf, len);
    strncpy(self->data.QuoteLocalID, buf, sizeof(self->data.QuoteLocalID));
    return 0;
}
            
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionLocalID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeQuoteActionField_set_ActionLocalID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ParticipantID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeQuoteActionField_set_ParticipantID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ClientID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeQuoteActionField_set_ClientID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_BusinessUnit(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeQuoteActionField_set_BusinessUnit(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_OrderActionStatus(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcExchangeQuoteActionField_set_OrderActionStatus(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_UserID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExchangeQuoteActionField_set_UserID(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_reserve1(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeQuoteActionField_set_reserve1(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_MacAddress(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeQuoteActionField_set_MacAddress(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeQuoteActionField_get_IPAddress(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeQuoteActionField_set_IPAddress(PyCThostFtdcExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeQuoteActionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报价操作编号 
    {(char *)"QuoteSysID", (getter)PyCThostFtdcExchangeQuoteActionField_get_QuoteSysID, (setter)PyCThostFtdcExchangeQuoteActionField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
    ///操作标志 
    {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionDate, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionTime, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeQuoteActionField_get_TraderID, (setter)PyCThostFtdcExchangeQuoteActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeQuoteActionField_get_InstallID, (setter)PyCThostFtdcExchangeQuoteActionField_set_InstallID, (char *)"InstallID", NULL},
    ///本地报价编号 
    {(char *)"QuoteLocalID", (getter)PyCThostFtdcExchangeQuoteActionField_get_QuoteLocalID, (setter)PyCThostFtdcExchangeQuoteActionField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ClientID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeQuoteActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeQuoteActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeQuoteActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeQuoteActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcExchangeQuoteActionField_get_UserID, (setter)PyCThostFtdcExchangeQuoteActionField_set_UserID, (char *)"UserID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeQuoteActionField_get_reserve1, (setter)PyCThostFtdcExchangeQuoteActionField_set_reserve1, (char *)"reserve1", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeQuoteActionField_get_MacAddress, (setter)PyCThostFtdcExchangeQuoteActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeQuoteActionField_get_IPAddress, (setter)PyCThostFtdcExchangeQuoteActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeQuoteActionField", (PyObject *)&PyCThostFtdcExchangeQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeQuoteActionFieldType);
		return -1;
    }

    return 0;
}
