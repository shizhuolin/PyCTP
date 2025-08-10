
#include "PyCThostFtdcRspUserLoginField.h"

///用户登录应答

static PyObject *PyCThostFtdcRspUserLoginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspUserLoginField *self = (PyCThostFtdcRspUserLoginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspUserLoginField_init(PyCThostFtdcRspUserLoginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "LoginTime", "BrokerID", "UserID", "SystemName", "FrontID", "SessionID", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "INETime", "SysVersion", "GFEXTime", "LoginDRIdentityID", "UserDRIdentityID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *RspUserLoginField_TradingDay = NULL;
    Py_ssize_t RspUserLoginField_TradingDay_len = 0;
            
    ///登录成功时间
    // TThostFtdcTimeType char[9]
    const char *RspUserLoginField_LoginTime = NULL;
    Py_ssize_t RspUserLoginField_LoginTime_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspUserLoginField_BrokerID = NULL;
    Py_ssize_t RspUserLoginField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *RspUserLoginField_UserID = NULL;
    Py_ssize_t RspUserLoginField_UserID_len = 0;
            
    ///交易系统名称
    // TThostFtdcSystemNameType char[41]
    const char *RspUserLoginField_SystemName = NULL;
    Py_ssize_t RspUserLoginField_SystemName_len = 0;
            
    ///前置编号
    // TThostFtdcFrontIDType int
    int RspUserLoginField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int RspUserLoginField_SessionID = 0;
        
    ///最大报单引用
    // TThostFtdcOrderRefType char[13]
    const char *RspUserLoginField_MaxOrderRef = NULL;
    Py_ssize_t RspUserLoginField_MaxOrderRef_len = 0;
            
    ///上期所时间
    // TThostFtdcTimeType char[9]
    const char *RspUserLoginField_SHFETime = NULL;
    Py_ssize_t RspUserLoginField_SHFETime_len = 0;
            
    ///大商所时间
    // TThostFtdcTimeType char[9]
    const char *RspUserLoginField_DCETime = NULL;
    Py_ssize_t RspUserLoginField_DCETime_len = 0;
            
    ///郑商所时间
    // TThostFtdcTimeType char[9]
    const char *RspUserLoginField_CZCETime = NULL;
    Py_ssize_t RspUserLoginField_CZCETime_len = 0;
            
    ///中金所时间
    // TThostFtdcTimeType char[9]
    const char *RspUserLoginField_FFEXTime = NULL;
    Py_ssize_t RspUserLoginField_FFEXTime_len = 0;
            
    ///能源中心时间
    // TThostFtdcTimeType char[9]
    const char *RspUserLoginField_INETime = NULL;
    Py_ssize_t RspUserLoginField_INETime_len = 0;
            
    ///后台版本信息
    // TThostFtdcSysVersionType char[41]
    const char *RspUserLoginField_SysVersion = NULL;
    Py_ssize_t RspUserLoginField_SysVersion_len = 0;
            
    ///广期所时间
    // TThostFtdcTimeType char[9]
    const char *RspUserLoginField_GFEXTime = NULL;
    Py_ssize_t RspUserLoginField_GFEXTime_len = 0;
            
    ///当前登录中心号
    // TThostFtdcDRIdentityIDType int
    int RspUserLoginField_LoginDRIdentityID = 0;
        
    ///用户所属中心号
    // TThostFtdcDRIdentityIDType int
    int RspUserLoginField_UserDRIdentityID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#y#y#y#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#s#s#s#s#s#s#s#ii", (char **)kwlist
#endif

        , &RspUserLoginField_TradingDay, &RspUserLoginField_TradingDay_len 
        , &RspUserLoginField_LoginTime, &RspUserLoginField_LoginTime_len 
        , &RspUserLoginField_BrokerID, &RspUserLoginField_BrokerID_len 
        , &RspUserLoginField_UserID, &RspUserLoginField_UserID_len 
        , &RspUserLoginField_SystemName, &RspUserLoginField_SystemName_len 
        , &RspUserLoginField_FrontID 
        , &RspUserLoginField_SessionID 
        , &RspUserLoginField_MaxOrderRef, &RspUserLoginField_MaxOrderRef_len 
        , &RspUserLoginField_SHFETime, &RspUserLoginField_SHFETime_len 
        , &RspUserLoginField_DCETime, &RspUserLoginField_DCETime_len 
        , &RspUserLoginField_CZCETime, &RspUserLoginField_CZCETime_len 
        , &RspUserLoginField_FFEXTime, &RspUserLoginField_FFEXTime_len 
        , &RspUserLoginField_INETime, &RspUserLoginField_INETime_len 
        , &RspUserLoginField_SysVersion, &RspUserLoginField_SysVersion_len 
        , &RspUserLoginField_GFEXTime, &RspUserLoginField_GFEXTime_len 
        , &RspUserLoginField_LoginDRIdentityID 
        , &RspUserLoginField_UserDRIdentityID 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( RspUserLoginField_TradingDay != NULL ) {
        if(RspUserLoginField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RspUserLoginField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RspUserLoginField_TradingDay, RspUserLoginField_TradingDay_len);        
        strncpy(self->data.TradingDay, RspUserLoginField_TradingDay, sizeof(self->data.TradingDay) );
        RspUserLoginField_TradingDay = NULL;
    }
            
    ///登录成功时间
    // TThostFtdcTimeType char[9]
    if( RspUserLoginField_LoginTime != NULL ) {
        if(RspUserLoginField_LoginTime_len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
            PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is %zd)", RspUserLoginField_LoginTime_len, (Py_ssize_t)sizeof(self->data.LoginTime));
            return -1;
        }
        // memset(self->data.LoginTime, 0, sizeof(self->data.LoginTime));
        // memcpy(self->data.LoginTime, RspUserLoginField_LoginTime, RspUserLoginField_LoginTime_len);        
        strncpy(self->data.LoginTime, RspUserLoginField_LoginTime, sizeof(self->data.LoginTime) );
        RspUserLoginField_LoginTime = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RspUserLoginField_BrokerID != NULL ) {
        if(RspUserLoginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspUserLoginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspUserLoginField_BrokerID, RspUserLoginField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspUserLoginField_BrokerID, sizeof(self->data.BrokerID) );
        RspUserLoginField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( RspUserLoginField_UserID != NULL ) {
        if(RspUserLoginField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspUserLoginField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspUserLoginField_UserID, RspUserLoginField_UserID_len);        
        strncpy(self->data.UserID, RspUserLoginField_UserID, sizeof(self->data.UserID) );
        RspUserLoginField_UserID = NULL;
    }
            
    ///交易系统名称
    // TThostFtdcSystemNameType char[41]
    if( RspUserLoginField_SystemName != NULL ) {
        if(RspUserLoginField_SystemName_len > (Py_ssize_t)sizeof(self->data.SystemName)) {
            PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is %zd)", RspUserLoginField_SystemName_len, (Py_ssize_t)sizeof(self->data.SystemName));
            return -1;
        }
        // memset(self->data.SystemName, 0, sizeof(self->data.SystemName));
        // memcpy(self->data.SystemName, RspUserLoginField_SystemName, RspUserLoginField_SystemName_len);        
        strncpy(self->data.SystemName, RspUserLoginField_SystemName, sizeof(self->data.SystemName) );
        RspUserLoginField_SystemName = NULL;
    }
            
    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = RspUserLoginField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = RspUserLoginField_SessionID;
        
    ///最大报单引用
    // TThostFtdcOrderRefType char[13]
    if( RspUserLoginField_MaxOrderRef != NULL ) {
        if(RspUserLoginField_MaxOrderRef_len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is %zd)", RspUserLoginField_MaxOrderRef_len, (Py_ssize_t)sizeof(self->data.MaxOrderRef));
            return -1;
        }
        // memset(self->data.MaxOrderRef, 0, sizeof(self->data.MaxOrderRef));
        // memcpy(self->data.MaxOrderRef, RspUserLoginField_MaxOrderRef, RspUserLoginField_MaxOrderRef_len);        
        strncpy(self->data.MaxOrderRef, RspUserLoginField_MaxOrderRef, sizeof(self->data.MaxOrderRef) );
        RspUserLoginField_MaxOrderRef = NULL;
    }
            
    ///上期所时间
    // TThostFtdcTimeType char[9]
    if( RspUserLoginField_SHFETime != NULL ) {
        if(RspUserLoginField_SHFETime_len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
            PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is %zd)", RspUserLoginField_SHFETime_len, (Py_ssize_t)sizeof(self->data.SHFETime));
            return -1;
        }
        // memset(self->data.SHFETime, 0, sizeof(self->data.SHFETime));
        // memcpy(self->data.SHFETime, RspUserLoginField_SHFETime, RspUserLoginField_SHFETime_len);        
        strncpy(self->data.SHFETime, RspUserLoginField_SHFETime, sizeof(self->data.SHFETime) );
        RspUserLoginField_SHFETime = NULL;
    }
            
    ///大商所时间
    // TThostFtdcTimeType char[9]
    if( RspUserLoginField_DCETime != NULL ) {
        if(RspUserLoginField_DCETime_len > (Py_ssize_t)sizeof(self->data.DCETime)) {
            PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is %zd)", RspUserLoginField_DCETime_len, (Py_ssize_t)sizeof(self->data.DCETime));
            return -1;
        }
        // memset(self->data.DCETime, 0, sizeof(self->data.DCETime));
        // memcpy(self->data.DCETime, RspUserLoginField_DCETime, RspUserLoginField_DCETime_len);        
        strncpy(self->data.DCETime, RspUserLoginField_DCETime, sizeof(self->data.DCETime) );
        RspUserLoginField_DCETime = NULL;
    }
            
    ///郑商所时间
    // TThostFtdcTimeType char[9]
    if( RspUserLoginField_CZCETime != NULL ) {
        if(RspUserLoginField_CZCETime_len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
            PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is %zd)", RspUserLoginField_CZCETime_len, (Py_ssize_t)sizeof(self->data.CZCETime));
            return -1;
        }
        // memset(self->data.CZCETime, 0, sizeof(self->data.CZCETime));
        // memcpy(self->data.CZCETime, RspUserLoginField_CZCETime, RspUserLoginField_CZCETime_len);        
        strncpy(self->data.CZCETime, RspUserLoginField_CZCETime, sizeof(self->data.CZCETime) );
        RspUserLoginField_CZCETime = NULL;
    }
            
    ///中金所时间
    // TThostFtdcTimeType char[9]
    if( RspUserLoginField_FFEXTime != NULL ) {
        if(RspUserLoginField_FFEXTime_len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
            PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is %zd)", RspUserLoginField_FFEXTime_len, (Py_ssize_t)sizeof(self->data.FFEXTime));
            return -1;
        }
        // memset(self->data.FFEXTime, 0, sizeof(self->data.FFEXTime));
        // memcpy(self->data.FFEXTime, RspUserLoginField_FFEXTime, RspUserLoginField_FFEXTime_len);        
        strncpy(self->data.FFEXTime, RspUserLoginField_FFEXTime, sizeof(self->data.FFEXTime) );
        RspUserLoginField_FFEXTime = NULL;
    }
            
    ///能源中心时间
    // TThostFtdcTimeType char[9]
    if( RspUserLoginField_INETime != NULL ) {
        if(RspUserLoginField_INETime_len > (Py_ssize_t)sizeof(self->data.INETime)) {
            PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is %zd)", RspUserLoginField_INETime_len, (Py_ssize_t)sizeof(self->data.INETime));
            return -1;
        }
        // memset(self->data.INETime, 0, sizeof(self->data.INETime));
        // memcpy(self->data.INETime, RspUserLoginField_INETime, RspUserLoginField_INETime_len);        
        strncpy(self->data.INETime, RspUserLoginField_INETime, sizeof(self->data.INETime) );
        RspUserLoginField_INETime = NULL;
    }
            
    ///后台版本信息
    // TThostFtdcSysVersionType char[41]
    if( RspUserLoginField_SysVersion != NULL ) {
        if(RspUserLoginField_SysVersion_len > (Py_ssize_t)sizeof(self->data.SysVersion)) {
            PyErr_Format(PyExc_ValueError, "SysVersion too long: length=%zd (max allowed is %zd)", RspUserLoginField_SysVersion_len, (Py_ssize_t)sizeof(self->data.SysVersion));
            return -1;
        }
        // memset(self->data.SysVersion, 0, sizeof(self->data.SysVersion));
        // memcpy(self->data.SysVersion, RspUserLoginField_SysVersion, RspUserLoginField_SysVersion_len);        
        strncpy(self->data.SysVersion, RspUserLoginField_SysVersion, sizeof(self->data.SysVersion) );
        RspUserLoginField_SysVersion = NULL;
    }
            
    ///广期所时间
    // TThostFtdcTimeType char[9]
    if( RspUserLoginField_GFEXTime != NULL ) {
        if(RspUserLoginField_GFEXTime_len > (Py_ssize_t)sizeof(self->data.GFEXTime)) {
            PyErr_Format(PyExc_ValueError, "GFEXTime too long: length=%zd (max allowed is %zd)", RspUserLoginField_GFEXTime_len, (Py_ssize_t)sizeof(self->data.GFEXTime));
            return -1;
        }
        // memset(self->data.GFEXTime, 0, sizeof(self->data.GFEXTime));
        // memcpy(self->data.GFEXTime, RspUserLoginField_GFEXTime, RspUserLoginField_GFEXTime_len);        
        strncpy(self->data.GFEXTime, RspUserLoginField_GFEXTime, sizeof(self->data.GFEXTime) );
        RspUserLoginField_GFEXTime = NULL;
    }
            
    ///当前登录中心号
    // TThostFtdcDRIdentityIDType int
    self->data.LoginDRIdentityID = RspUserLoginField_LoginDRIdentityID;
        
    ///用户所属中心号
    // TThostFtdcDRIdentityIDType int
    self->data.UserDRIdentityID = RspUserLoginField_UserDRIdentityID;
        

    return 0;
}

static void PyCThostFtdcRspUserLoginField_dealloc(PyCThostFtdcRspUserLoginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspUserLoginField_repr(PyCThostFtdcRspUserLoginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"LoginTime", self->data.LoginTime//, (Py_ssize_t)sizeof(self->data.LoginTime) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"SystemName", self->data.SystemName//, (Py_ssize_t)sizeof(self->data.SystemName) 
        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"MaxOrderRef", self->data.MaxOrderRef//, (Py_ssize_t)sizeof(self->data.MaxOrderRef) 
        ,"SHFETime", self->data.SHFETime//, (Py_ssize_t)sizeof(self->data.SHFETime) 
        ,"DCETime", self->data.DCETime//, (Py_ssize_t)sizeof(self->data.DCETime) 
        ,"CZCETime", self->data.CZCETime//, (Py_ssize_t)sizeof(self->data.CZCETime) 
        ,"FFEXTime", self->data.FFEXTime//, (Py_ssize_t)sizeof(self->data.FFEXTime) 
        ,"INETime", self->data.INETime//, (Py_ssize_t)sizeof(self->data.INETime) 
        ,"SysVersion", self->data.SysVersion//, (Py_ssize_t)sizeof(self->data.SysVersion) 
        ,"GFEXTime", self->data.GFEXTime//, (Py_ssize_t)sizeof(self->data.GFEXTime) 
        ,"LoginDRIdentityID", self->data.LoginDRIdentityID 
        ,"UserDRIdentityID", self->data.UserDRIdentityID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserLoginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_TradingDay(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRspUserLoginField_set_TradingDay(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
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
            
///登录成功时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_LoginTime(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginTime, (Py_ssize_t)sizeof(self->data.LoginTime));
    return PyBytes_FromString(self->data.LoginTime);
}

///登录成功时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspUserLoginField_set_LoginTime(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LoginTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.LoginTime, 0, sizeof(self->data.LoginTime));
    // memcpy(self->data.LoginTime, buf, len);
    strncpy(self->data.LoginTime, buf, sizeof(self->data.LoginTime));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcRspUserLoginField_get_BrokerID(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspUserLoginField_set_BrokerID(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcRspUserLoginField_get_UserID(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspUserLoginField_set_UserID(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
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
            
///交易系统名称
// TThostFtdcSystemNameType char[41]
static PyObject *PyCThostFtdcRspUserLoginField_get_SystemName(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SystemName, (Py_ssize_t)sizeof(self->data.SystemName));
    return PyBytes_FromString(self->data.SystemName);
}

///交易系统名称
// TThostFtdcSystemNameType char[41]
static int PyCThostFtdcRspUserLoginField_set_SystemName(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SystemName)) {
        PyErr_SetString(PyExc_ValueError, "SystemName must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.SystemName, 0, sizeof(self->data.SystemName));
    // memcpy(self->data.SystemName, buf, len);
    strncpy(self->data.SystemName, buf, sizeof(self->data.SystemName));
    return 0;
}
            
///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcRspUserLoginField_get_FrontID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcRspUserLoginField_set_FrontID(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspUserLoginField_get_SessionID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcRspUserLoginField_set_SessionID(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
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
        
///最大报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcRspUserLoginField_get_MaxOrderRef(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MaxOrderRef, (Py_ssize_t)sizeof(self->data.MaxOrderRef));
    return PyBytes_FromString(self->data.MaxOrderRef);
}

///最大报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcRspUserLoginField_set_MaxOrderRef(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "MaxOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.MaxOrderRef, 0, sizeof(self->data.MaxOrderRef));
    // memcpy(self->data.MaxOrderRef, buf, len);
    strncpy(self->data.MaxOrderRef, buf, sizeof(self->data.MaxOrderRef));
    return 0;
}
            
///上期所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_SHFETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SHFETime, (Py_ssize_t)sizeof(self->data.SHFETime));
    return PyBytes_FromString(self->data.SHFETime);
}

///上期所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspUserLoginField_set_SHFETime(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SHFETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
        PyErr_SetString(PyExc_ValueError, "SHFETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.SHFETime, 0, sizeof(self->data.SHFETime));
    // memcpy(self->data.SHFETime, buf, len);
    strncpy(self->data.SHFETime, buf, sizeof(self->data.SHFETime));
    return 0;
}
            
///大商所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_DCETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DCETime, (Py_ssize_t)sizeof(self->data.DCETime));
    return PyBytes_FromString(self->data.DCETime);
}

///大商所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspUserLoginField_set_DCETime(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DCETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DCETime)) {
        PyErr_SetString(PyExc_ValueError, "DCETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.DCETime, 0, sizeof(self->data.DCETime));
    // memcpy(self->data.DCETime, buf, len);
    strncpy(self->data.DCETime, buf, sizeof(self->data.DCETime));
    return 0;
}
            
///郑商所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_CZCETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CZCETime, (Py_ssize_t)sizeof(self->data.CZCETime));
    return PyBytes_FromString(self->data.CZCETime);
}

///郑商所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspUserLoginField_set_CZCETime(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CZCETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
        PyErr_SetString(PyExc_ValueError, "CZCETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CZCETime, 0, sizeof(self->data.CZCETime));
    // memcpy(self->data.CZCETime, buf, len);
    strncpy(self->data.CZCETime, buf, sizeof(self->data.CZCETime));
    return 0;
}
            
///中金所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_FFEXTime(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FFEXTime, (Py_ssize_t)sizeof(self->data.FFEXTime));
    return PyBytes_FromString(self->data.FFEXTime);
}

///中金所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspUserLoginField_set_FFEXTime(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FFEXTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
        PyErr_SetString(PyExc_ValueError, "FFEXTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.FFEXTime, 0, sizeof(self->data.FFEXTime));
    // memcpy(self->data.FFEXTime, buf, len);
    strncpy(self->data.FFEXTime, buf, sizeof(self->data.FFEXTime));
    return 0;
}
            
///能源中心时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_INETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.INETime, (Py_ssize_t)sizeof(self->data.INETime));
    return PyBytes_FromString(self->data.INETime);
}

///能源中心时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspUserLoginField_set_INETime(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "INETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.INETime)) {
        PyErr_SetString(PyExc_ValueError, "INETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.INETime, 0, sizeof(self->data.INETime));
    // memcpy(self->data.INETime, buf, len);
    strncpy(self->data.INETime, buf, sizeof(self->data.INETime));
    return 0;
}
            
///后台版本信息
// TThostFtdcSysVersionType char[41]
static PyObject *PyCThostFtdcRspUserLoginField_get_SysVersion(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SysVersion, (Py_ssize_t)sizeof(self->data.SysVersion));
    return PyBytes_FromString(self->data.SysVersion);
}

///后台版本信息
// TThostFtdcSysVersionType char[41]
static int PyCThostFtdcRspUserLoginField_set_SysVersion(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SysVersion Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SysVersion)) {
        PyErr_SetString(PyExc_ValueError, "SysVersion must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.SysVersion, 0, sizeof(self->data.SysVersion));
    // memcpy(self->data.SysVersion, buf, len);
    strncpy(self->data.SysVersion, buf, sizeof(self->data.SysVersion));
    return 0;
}
            
///广期所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcRspUserLoginField_get_GFEXTime(PyCThostFtdcRspUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.GFEXTime, (Py_ssize_t)sizeof(self->data.GFEXTime));
    return PyBytes_FromString(self->data.GFEXTime);
}

///广期所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcRspUserLoginField_set_GFEXTime(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "GFEXTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.GFEXTime)) {
        PyErr_SetString(PyExc_ValueError, "GFEXTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.GFEXTime, 0, sizeof(self->data.GFEXTime));
    // memcpy(self->data.GFEXTime, buf, len);
    strncpy(self->data.GFEXTime, buf, sizeof(self->data.GFEXTime));
    return 0;
}
            
///当前登录中心号
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcRspUserLoginField_get_LoginDRIdentityID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LoginDRIdentityID);
#else
    return PyInt_FromLong(self->data.LoginDRIdentityID);
#endif
}

///当前登录中心号
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcRspUserLoginField_set_LoginDRIdentityID(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginDRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginDRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LoginDRIdentityID value out of range for C int");
        return -1;
    }
    self->data.LoginDRIdentityID = (int)buf;
    return 0;
}
        
///用户所属中心号
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcRspUserLoginField_get_UserDRIdentityID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UserDRIdentityID);
#else
    return PyInt_FromLong(self->data.UserDRIdentityID);
#endif
}

///用户所属中心号
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcRspUserLoginField_set_UserDRIdentityID(PyCThostFtdcRspUserLoginField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserDRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserDRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the UserDRIdentityID value out of range for C int");
        return -1;
    }
    self->data.UserDRIdentityID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcRspUserLoginField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRspUserLoginField_get_TradingDay, (setter)PyCThostFtdcRspUserLoginField_set_TradingDay, (char *)"TradingDay", NULL},
    ///登录成功时间 
    {(char *)"LoginTime", (getter)PyCThostFtdcRspUserLoginField_get_LoginTime, (setter)PyCThostFtdcRspUserLoginField_set_LoginTime, (char *)"LoginTime", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspUserLoginField_get_BrokerID, (setter)PyCThostFtdcRspUserLoginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcRspUserLoginField_get_UserID, (setter)PyCThostFtdcRspUserLoginField_set_UserID, (char *)"UserID", NULL},
    ///交易系统名称 
    {(char *)"SystemName", (getter)PyCThostFtdcRspUserLoginField_get_SystemName, (setter)PyCThostFtdcRspUserLoginField_set_SystemName, (char *)"SystemName", NULL},
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcRspUserLoginField_get_FrontID, (setter)PyCThostFtdcRspUserLoginField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcRspUserLoginField_get_SessionID, (setter)PyCThostFtdcRspUserLoginField_set_SessionID, (char *)"SessionID", NULL},
    ///最大报单引用 
    {(char *)"MaxOrderRef", (getter)PyCThostFtdcRspUserLoginField_get_MaxOrderRef, (setter)PyCThostFtdcRspUserLoginField_set_MaxOrderRef, (char *)"MaxOrderRef", NULL},
    ///上期所时间 
    {(char *)"SHFETime", (getter)PyCThostFtdcRspUserLoginField_get_SHFETime, (setter)PyCThostFtdcRspUserLoginField_set_SHFETime, (char *)"SHFETime", NULL},
    ///大商所时间 
    {(char *)"DCETime", (getter)PyCThostFtdcRspUserLoginField_get_DCETime, (setter)PyCThostFtdcRspUserLoginField_set_DCETime, (char *)"DCETime", NULL},
    ///郑商所时间 
    {(char *)"CZCETime", (getter)PyCThostFtdcRspUserLoginField_get_CZCETime, (setter)PyCThostFtdcRspUserLoginField_set_CZCETime, (char *)"CZCETime", NULL},
    ///中金所时间 
    {(char *)"FFEXTime", (getter)PyCThostFtdcRspUserLoginField_get_FFEXTime, (setter)PyCThostFtdcRspUserLoginField_set_FFEXTime, (char *)"FFEXTime", NULL},
    ///能源中心时间 
    {(char *)"INETime", (getter)PyCThostFtdcRspUserLoginField_get_INETime, (setter)PyCThostFtdcRspUserLoginField_set_INETime, (char *)"INETime", NULL},
    ///后台版本信息 
    {(char *)"SysVersion", (getter)PyCThostFtdcRspUserLoginField_get_SysVersion, (setter)PyCThostFtdcRspUserLoginField_set_SysVersion, (char *)"SysVersion", NULL},
    ///广期所时间 
    {(char *)"GFEXTime", (getter)PyCThostFtdcRspUserLoginField_get_GFEXTime, (setter)PyCThostFtdcRspUserLoginField_set_GFEXTime, (char *)"GFEXTime", NULL},
    ///当前登录中心号 
    {(char *)"LoginDRIdentityID", (getter)PyCThostFtdcRspUserLoginField_get_LoginDRIdentityID, (setter)PyCThostFtdcRspUserLoginField_set_LoginDRIdentityID, (char *)"LoginDRIdentityID", NULL},
    ///用户所属中心号 
    {(char *)"UserDRIdentityID", (getter)PyCThostFtdcRspUserLoginField_get_UserDRIdentityID, (setter)PyCThostFtdcRspUserLoginField_set_UserDRIdentityID, (char *)"UserDRIdentityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspUserLoginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspUserLoginField",	/* tp_name */
	sizeof(PyCThostFtdcRspUserLoginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspUserLoginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspUserLoginField_repr,   /* tp_repr */
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
	"CThostFtdcRspUserLoginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspUserLoginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspUserLoginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspUserLoginField_new,       /* tp_new */
};

int PyCThostFtdcRspUserLoginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspUserLoginField  */
	if (PyType_Ready(&PyCThostFtdcRspUserLoginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspUserLoginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspUserLoginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspUserLoginField", (PyObject *)&PyCThostFtdcRspUserLoginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspUserLoginField to module");
        Py_DECREF(&PyCThostFtdcRspUserLoginFieldType);
		return -1;
    }

    return 0;
}
