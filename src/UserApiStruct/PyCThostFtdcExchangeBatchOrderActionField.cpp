
#include "PyCThostFtdcExchangeBatchOrderActionField.h"

///交易所批量报单操作

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeBatchOrderActionField *self = (PyCThostFtdcExchangeBatchOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeBatchOrderActionField_init(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ActionDate", "ActionTime", "TraderID", "InstallID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "reserve1", "MacAddress", "IPAddress",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeBatchOrderActionField_ExchangeID = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_ExchangeID_len = 0;
            
    ///操作日期
    // TThostFtdcDateType char[9]
    const char *ExchangeBatchOrderActionField_ActionDate = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_ActionDate_len = 0;
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    const char *ExchangeBatchOrderActionField_ActionTime = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_ActionTime_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *ExchangeBatchOrderActionField_TraderID = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_TraderID_len = 0;
            
    ///安装编号
    // TThostFtdcInstallIDType int
    int ExchangeBatchOrderActionField_InstallID = 0;
        
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    const char *ExchangeBatchOrderActionField_ActionLocalID = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_ActionLocalID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *ExchangeBatchOrderActionField_ParticipantID = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *ExchangeBatchOrderActionField_ClientID = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_ClientID_len = 0;
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    const char *ExchangeBatchOrderActionField_BusinessUnit = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_BusinessUnit_len = 0;
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    char ExchangeBatchOrderActionField_OrderActionStatus = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ExchangeBatchOrderActionField_UserID = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_UserID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ExchangeBatchOrderActionField_reserve1 = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_reserve1_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ExchangeBatchOrderActionField_MacAddress = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_MacAddress_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ExchangeBatchOrderActionField_IPAddress = NULL;
    Py_ssize_t ExchangeBatchOrderActionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#y#y#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#s#s#s#cs#s#s#s#", (char **)kwlist
#endif

        , &ExchangeBatchOrderActionField_ExchangeID, &ExchangeBatchOrderActionField_ExchangeID_len 
        , &ExchangeBatchOrderActionField_ActionDate, &ExchangeBatchOrderActionField_ActionDate_len 
        , &ExchangeBatchOrderActionField_ActionTime, &ExchangeBatchOrderActionField_ActionTime_len 
        , &ExchangeBatchOrderActionField_TraderID, &ExchangeBatchOrderActionField_TraderID_len 
        , &ExchangeBatchOrderActionField_InstallID 
        , &ExchangeBatchOrderActionField_ActionLocalID, &ExchangeBatchOrderActionField_ActionLocalID_len 
        , &ExchangeBatchOrderActionField_ParticipantID, &ExchangeBatchOrderActionField_ParticipantID_len 
        , &ExchangeBatchOrderActionField_ClientID, &ExchangeBatchOrderActionField_ClientID_len 
        , &ExchangeBatchOrderActionField_BusinessUnit, &ExchangeBatchOrderActionField_BusinessUnit_len 
        , &ExchangeBatchOrderActionField_OrderActionStatus 
        , &ExchangeBatchOrderActionField_UserID, &ExchangeBatchOrderActionField_UserID_len 
        , &ExchangeBatchOrderActionField_reserve1, &ExchangeBatchOrderActionField_reserve1_len 
        , &ExchangeBatchOrderActionField_MacAddress, &ExchangeBatchOrderActionField_MacAddress_len 
        , &ExchangeBatchOrderActionField_IPAddress, &ExchangeBatchOrderActionField_IPAddress_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeBatchOrderActionField_ExchangeID != NULL ) {
        if(ExchangeBatchOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeBatchOrderActionField_ExchangeID, ExchangeBatchOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeBatchOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeBatchOrderActionField_ExchangeID = NULL;
    }
            
    ///操作日期
    // TThostFtdcDateType char[9]
    if( ExchangeBatchOrderActionField_ActionDate != NULL ) {
        if(ExchangeBatchOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
            return -1;
        }
        // memset(self->data.ActionDate, 0, sizeof(self->data.ActionDate));
        // memcpy(self->data.ActionDate, ExchangeBatchOrderActionField_ActionDate, ExchangeBatchOrderActionField_ActionDate_len);        
        strncpy(self->data.ActionDate, ExchangeBatchOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
        ExchangeBatchOrderActionField_ActionDate = NULL;
    }
            
    ///操作时间
    // TThostFtdcTimeType char[9]
    if( ExchangeBatchOrderActionField_ActionTime != NULL ) {
        if(ExchangeBatchOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
            return -1;
        }
        // memset(self->data.ActionTime, 0, sizeof(self->data.ActionTime));
        // memcpy(self->data.ActionTime, ExchangeBatchOrderActionField_ActionTime, ExchangeBatchOrderActionField_ActionTime_len);        
        strncpy(self->data.ActionTime, ExchangeBatchOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
        ExchangeBatchOrderActionField_ActionTime = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( ExchangeBatchOrderActionField_TraderID != NULL ) {
        if(ExchangeBatchOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, ExchangeBatchOrderActionField_TraderID, ExchangeBatchOrderActionField_TraderID_len);        
        strncpy(self->data.TraderID, ExchangeBatchOrderActionField_TraderID, sizeof(self->data.TraderID) );
        ExchangeBatchOrderActionField_TraderID = NULL;
    }
            
    ///安装编号
    // TThostFtdcInstallIDType int
    self->data.InstallID = ExchangeBatchOrderActionField_InstallID;
        
    ///操作本地编号
    // TThostFtdcOrderLocalIDType char[13]
    if( ExchangeBatchOrderActionField_ActionLocalID != NULL ) {
        if(ExchangeBatchOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
            return -1;
        }
        // memset(self->data.ActionLocalID, 0, sizeof(self->data.ActionLocalID));
        // memcpy(self->data.ActionLocalID, ExchangeBatchOrderActionField_ActionLocalID, ExchangeBatchOrderActionField_ActionLocalID_len);        
        strncpy(self->data.ActionLocalID, ExchangeBatchOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
        ExchangeBatchOrderActionField_ActionLocalID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( ExchangeBatchOrderActionField_ParticipantID != NULL ) {
        if(ExchangeBatchOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, ExchangeBatchOrderActionField_ParticipantID, ExchangeBatchOrderActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, ExchangeBatchOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        ExchangeBatchOrderActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( ExchangeBatchOrderActionField_ClientID != NULL ) {
        if(ExchangeBatchOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, ExchangeBatchOrderActionField_ClientID, ExchangeBatchOrderActionField_ClientID_len);        
        strncpy(self->data.ClientID, ExchangeBatchOrderActionField_ClientID, sizeof(self->data.ClientID) );
        ExchangeBatchOrderActionField_ClientID = NULL;
    }
            
    ///业务单元
    // TThostFtdcBusinessUnitType char[21]
    if( ExchangeBatchOrderActionField_BusinessUnit != NULL ) {
        if(ExchangeBatchOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
            return -1;
        }
        // memset(self->data.BusinessUnit, 0, sizeof(self->data.BusinessUnit));
        // memcpy(self->data.BusinessUnit, ExchangeBatchOrderActionField_BusinessUnit, ExchangeBatchOrderActionField_BusinessUnit_len);        
        strncpy(self->data.BusinessUnit, ExchangeBatchOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
        ExchangeBatchOrderActionField_BusinessUnit = NULL;
    }
            
    ///报单操作状态
    // TThostFtdcOrderActionStatusType char
    self->data.OrderActionStatus = ExchangeBatchOrderActionField_OrderActionStatus;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ExchangeBatchOrderActionField_UserID != NULL ) {
        if(ExchangeBatchOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ExchangeBatchOrderActionField_UserID, ExchangeBatchOrderActionField_UserID_len);        
        strncpy(self->data.UserID, ExchangeBatchOrderActionField_UserID, sizeof(self->data.UserID) );
        ExchangeBatchOrderActionField_UserID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ExchangeBatchOrderActionField_reserve1 != NULL ) {
        if(ExchangeBatchOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeBatchOrderActionField_reserve1, ExchangeBatchOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeBatchOrderActionField_reserve1, sizeof(self->data.reserve1) );
        ExchangeBatchOrderActionField_reserve1 = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ExchangeBatchOrderActionField_MacAddress != NULL ) {
        if(ExchangeBatchOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ExchangeBatchOrderActionField_MacAddress, ExchangeBatchOrderActionField_MacAddress_len);        
        strncpy(self->data.MacAddress, ExchangeBatchOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
        ExchangeBatchOrderActionField_MacAddress = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( ExchangeBatchOrderActionField_IPAddress != NULL ) {
        if(ExchangeBatchOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", ExchangeBatchOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, ExchangeBatchOrderActionField_IPAddress, ExchangeBatchOrderActionField_IPAddress_len);        
        strncpy(self->data.IPAddress, ExchangeBatchOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
        ExchangeBatchOrderActionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeBatchOrderActionField_dealloc(PyCThostFtdcExchangeBatchOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_repr(PyCThostFtdcExchangeBatchOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ActionDate", self->data.ActionDate//, (Py_ssize_t)sizeof(self->data.ActionDate) 
        ,"ActionTime", self->data.ActionTime//, (Py_ssize_t)sizeof(self->data.ActionTime) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"InstallID", self->data.InstallID 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeBatchOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ExchangeID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeBatchOrderActionField_set_ExchangeID(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
            
///操作日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ActionDate(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDate, (Py_ssize_t)sizeof(self->data.ActionDate));
    return PyBytes_FromString(self->data.ActionDate);
}

///操作日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcExchangeBatchOrderActionField_set_ActionDate(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ActionTime(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionTime, (Py_ssize_t)sizeof(self->data.ActionTime));
    return PyBytes_FromString(self->data.ActionTime);
}

///操作时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcExchangeBatchOrderActionField_set_ActionTime(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_TraderID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcExchangeBatchOrderActionField_set_TraderID(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_InstallID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.InstallID);
#else
    return PyInt_FromLong(self->data.InstallID);
#endif
}

///安装编号
// TThostFtdcInstallIDType int
static int PyCThostFtdcExchangeBatchOrderActionField_set_InstallID(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
        
///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ActionLocalID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionLocalID, (Py_ssize_t)sizeof(self->data.ActionLocalID));
    return PyBytes_FromString(self->data.ActionLocalID);
}

///操作本地编号
// TThostFtdcOrderLocalIDType char[13]
static int PyCThostFtdcExchangeBatchOrderActionField_set_ActionLocalID(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ParticipantID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcExchangeBatchOrderActionField_set_ParticipantID(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ClientID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcExchangeBatchOrderActionField_set_ClientID(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_BusinessUnit(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BusinessUnit, (Py_ssize_t)sizeof(self->data.BusinessUnit));
    return PyBytes_FromString(self->data.BusinessUnit);
}

///业务单元
// TThostFtdcBusinessUnitType char[21]
static int PyCThostFtdcExchangeBatchOrderActionField_set_BusinessUnit(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_OrderActionStatus(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

///报单操作状态
// TThostFtdcOrderActionStatusType char
static int PyCThostFtdcExchangeBatchOrderActionField_set_OrderActionStatus(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_UserID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcExchangeBatchOrderActionField_set_UserID(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_reserve1(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcExchangeBatchOrderActionField_set_reserve1(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_MacAddress(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcExchangeBatchOrderActionField_set_MacAddress(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_IPAddress(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcExchangeBatchOrderActionField_set_IPAddress(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeBatchOrderActionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///操作日期 
    {(char *)"ActionDate", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ActionDate, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
    ///操作时间 
    {(char *)"ActionTime", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ActionTime, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_TraderID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_TraderID, (char *)"TraderID", NULL},
    ///安装编号 
    {(char *)"InstallID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_InstallID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_InstallID, (char *)"InstallID", NULL},
    ///操作本地编号 
    {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ClientID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ClientID, (char *)"ClientID", NULL},
    ///业务单元 
    {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
    ///报单操作状态 
    {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_UserID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_UserID, (char *)"UserID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_reserve1, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_MacAddress, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_IPAddress, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeBatchOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeBatchOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeBatchOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeBatchOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeBatchOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeBatchOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeBatchOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeBatchOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeBatchOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeBatchOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeBatchOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeBatchOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeBatchOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeBatchOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeBatchOrderActionField", (PyObject *)&PyCThostFtdcExchangeBatchOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeBatchOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeBatchOrderActionFieldType);
		return -1;
    }

    return 0;
}
