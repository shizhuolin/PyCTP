
#include "PyCThostFtdcTGIpAddrParamField.h"

///服务地址参数

static PyObject *PyCThostFtdcTGIpAddrParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTGIpAddrParamField *self = (PyCThostFtdcTGIpAddrParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTGIpAddrParamField_init(PyCThostFtdcTGIpAddrParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "Address", "DRIdentityID", "DRIdentityName", "AddrSrvMode", "AddrVer", "AddrNo", "AddrName", "IsSM", "IsLocalAddr", "Remark", "Site", "NetOperator",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TGIpAddrParamField_BrokerID = NULL;
    Py_ssize_t TGIpAddrParamField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *TGIpAddrParamField_UserID = NULL;
    Py_ssize_t TGIpAddrParamField_UserID_len = 0;
            
    ///服务地址
    // TThostFtdcIpAddrType char[129]
    const char *TGIpAddrParamField_Address = NULL;
    Py_ssize_t TGIpAddrParamField_Address_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int TGIpAddrParamField_DRIdentityID = 0;
        
    ///交易中心名称
    // TThostFtdcDRIdentityNameType char[65]
    const char *TGIpAddrParamField_DRIdentityName = NULL;
    Py_ssize_t TGIpAddrParamField_DRIdentityName_len = 0;
            
    ///交易地址OR行情地址
    // TThostFtdcAddrSrvModeType char
    char TGIpAddrParamField_AddrSrvMode = 0;
            
    ///地址版本
    // TThostFtdcAddrVerType char
    char TGIpAddrParamField_AddrVer = 0;
            
    ///服务地址编号
    // TThostFtdcCommonIntType int
    int TGIpAddrParamField_AddrNo = 0;
        
    ///服务地址名称
    // TThostFtdcAddrNameType char[65]
    const char *TGIpAddrParamField_AddrName = NULL;
    Py_ssize_t TGIpAddrParamField_AddrName_len = 0;
            
    ///是否是国密地址
    // TThostFtdcBoolType int
    int TGIpAddrParamField_IsSM = 0;
        
    ///是否是内网地址
    // TThostFtdcBoolType int
    int TGIpAddrParamField_IsLocalAddr = 0;
        
    ///地址补充信息
    // TThostFtdcAddrRemarkType char[161]
    const char *TGIpAddrParamField_Remark = NULL;
    Py_ssize_t TGIpAddrParamField_Remark_len = 0;
            
    ///站点
    // TThostFtdcSiteType char[51]
    const char *TGIpAddrParamField_Site = NULL;
    Py_ssize_t TGIpAddrParamField_Site_len = 0;
            
    ///网络运营商
    // TThostFtdcNetOperatorType char[9]
    const char *TGIpAddrParamField_NetOperator = NULL;
    Py_ssize_t TGIpAddrParamField_NetOperator_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#cciy#iiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#ccis#iis#s#s#", (char **)kwlist
#endif

        , &TGIpAddrParamField_BrokerID, &TGIpAddrParamField_BrokerID_len 
        , &TGIpAddrParamField_UserID, &TGIpAddrParamField_UserID_len 
        , &TGIpAddrParamField_Address, &TGIpAddrParamField_Address_len 
        , &TGIpAddrParamField_DRIdentityID 
        , &TGIpAddrParamField_DRIdentityName, &TGIpAddrParamField_DRIdentityName_len 
        , &TGIpAddrParamField_AddrSrvMode 
        , &TGIpAddrParamField_AddrVer 
        , &TGIpAddrParamField_AddrNo 
        , &TGIpAddrParamField_AddrName, &TGIpAddrParamField_AddrName_len 
        , &TGIpAddrParamField_IsSM 
        , &TGIpAddrParamField_IsLocalAddr 
        , &TGIpAddrParamField_Remark, &TGIpAddrParamField_Remark_len 
        , &TGIpAddrParamField_Site, &TGIpAddrParamField_Site_len 
        , &TGIpAddrParamField_NetOperator, &TGIpAddrParamField_NetOperator_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TGIpAddrParamField_BrokerID != NULL ) {
        if(TGIpAddrParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TGIpAddrParamField_BrokerID, TGIpAddrParamField_BrokerID_len);        
        strncpy(self->data.BrokerID, TGIpAddrParamField_BrokerID, sizeof(self->data.BrokerID) );
        TGIpAddrParamField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( TGIpAddrParamField_UserID != NULL ) {
        if(TGIpAddrParamField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, TGIpAddrParamField_UserID, TGIpAddrParamField_UserID_len);        
        strncpy(self->data.UserID, TGIpAddrParamField_UserID, sizeof(self->data.UserID) );
        TGIpAddrParamField_UserID = NULL;
    }
            
    ///服务地址
    // TThostFtdcIpAddrType char[129]
    if( TGIpAddrParamField_Address != NULL ) {
        if(TGIpAddrParamField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, TGIpAddrParamField_Address, TGIpAddrParamField_Address_len);        
        strncpy(self->data.Address, TGIpAddrParamField_Address, sizeof(self->data.Address) );
        TGIpAddrParamField_Address = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = TGIpAddrParamField_DRIdentityID;
        
    ///交易中心名称
    // TThostFtdcDRIdentityNameType char[65]
    if( TGIpAddrParamField_DRIdentityName != NULL ) {
        if(TGIpAddrParamField_DRIdentityName_len > (Py_ssize_t)sizeof(self->data.DRIdentityName)) {
            PyErr_Format(PyExc_ValueError, "DRIdentityName too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_DRIdentityName_len, (Py_ssize_t)sizeof(self->data.DRIdentityName));
            return -1;
        }
        // memset(self->data.DRIdentityName, 0, sizeof(self->data.DRIdentityName));
        // memcpy(self->data.DRIdentityName, TGIpAddrParamField_DRIdentityName, TGIpAddrParamField_DRIdentityName_len);        
        strncpy(self->data.DRIdentityName, TGIpAddrParamField_DRIdentityName, sizeof(self->data.DRIdentityName) );
        TGIpAddrParamField_DRIdentityName = NULL;
    }
            
    ///交易地址OR行情地址
    // TThostFtdcAddrSrvModeType char
    self->data.AddrSrvMode = TGIpAddrParamField_AddrSrvMode;
            
    ///地址版本
    // TThostFtdcAddrVerType char
    self->data.AddrVer = TGIpAddrParamField_AddrVer;
            
    ///服务地址编号
    // TThostFtdcCommonIntType int
    self->data.AddrNo = TGIpAddrParamField_AddrNo;
        
    ///服务地址名称
    // TThostFtdcAddrNameType char[65]
    if( TGIpAddrParamField_AddrName != NULL ) {
        if(TGIpAddrParamField_AddrName_len > (Py_ssize_t)sizeof(self->data.AddrName)) {
            PyErr_Format(PyExc_ValueError, "AddrName too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_AddrName_len, (Py_ssize_t)sizeof(self->data.AddrName));
            return -1;
        }
        // memset(self->data.AddrName, 0, sizeof(self->data.AddrName));
        // memcpy(self->data.AddrName, TGIpAddrParamField_AddrName, TGIpAddrParamField_AddrName_len);        
        strncpy(self->data.AddrName, TGIpAddrParamField_AddrName, sizeof(self->data.AddrName) );
        TGIpAddrParamField_AddrName = NULL;
    }
            
    ///是否是国密地址
    // TThostFtdcBoolType int
    self->data.IsSM = TGIpAddrParamField_IsSM;
        
    ///是否是内网地址
    // TThostFtdcBoolType int
    self->data.IsLocalAddr = TGIpAddrParamField_IsLocalAddr;
        
    ///地址补充信息
    // TThostFtdcAddrRemarkType char[161]
    if( TGIpAddrParamField_Remark != NULL ) {
        if(TGIpAddrParamField_Remark_len > (Py_ssize_t)sizeof(self->data.Remark)) {
            PyErr_Format(PyExc_ValueError, "Remark too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_Remark_len, (Py_ssize_t)sizeof(self->data.Remark));
            return -1;
        }
        // memset(self->data.Remark, 0, sizeof(self->data.Remark));
        // memcpy(self->data.Remark, TGIpAddrParamField_Remark, TGIpAddrParamField_Remark_len);        
        strncpy(self->data.Remark, TGIpAddrParamField_Remark, sizeof(self->data.Remark) );
        TGIpAddrParamField_Remark = NULL;
    }
            
    ///站点
    // TThostFtdcSiteType char[51]
    if( TGIpAddrParamField_Site != NULL ) {
        if(TGIpAddrParamField_Site_len > (Py_ssize_t)sizeof(self->data.Site)) {
            PyErr_Format(PyExc_ValueError, "Site too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_Site_len, (Py_ssize_t)sizeof(self->data.Site));
            return -1;
        }
        // memset(self->data.Site, 0, sizeof(self->data.Site));
        // memcpy(self->data.Site, TGIpAddrParamField_Site, TGIpAddrParamField_Site_len);        
        strncpy(self->data.Site, TGIpAddrParamField_Site, sizeof(self->data.Site) );
        TGIpAddrParamField_Site = NULL;
    }
            
    ///网络运营商
    // TThostFtdcNetOperatorType char[9]
    if( TGIpAddrParamField_NetOperator != NULL ) {
        if(TGIpAddrParamField_NetOperator_len > (Py_ssize_t)sizeof(self->data.NetOperator)) {
            PyErr_Format(PyExc_ValueError, "NetOperator too long: length=%zd (max allowed is %zd)", TGIpAddrParamField_NetOperator_len, (Py_ssize_t)sizeof(self->data.NetOperator));
            return -1;
        }
        // memset(self->data.NetOperator, 0, sizeof(self->data.NetOperator));
        // memcpy(self->data.NetOperator, TGIpAddrParamField_NetOperator, TGIpAddrParamField_NetOperator_len);        
        strncpy(self->data.NetOperator, TGIpAddrParamField_NetOperator, sizeof(self->data.NetOperator) );
        TGIpAddrParamField_NetOperator = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTGIpAddrParamField_dealloc(PyCThostFtdcTGIpAddrParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_repr(PyCThostFtdcTGIpAddrParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:c,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:c,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Address", self->data.Address//, (Py_ssize_t)sizeof(self->data.Address) 
        ,"DRIdentityID", self->data.DRIdentityID 
        ,"DRIdentityName", self->data.DRIdentityName//, (Py_ssize_t)sizeof(self->data.DRIdentityName) 
        ,"AddrSrvMode", self->data.AddrSrvMode 
        ,"AddrVer", self->data.AddrVer 
        ,"AddrNo", self->data.AddrNo 
        ,"AddrName", self->data.AddrName//, (Py_ssize_t)sizeof(self->data.AddrName) 
        ,"IsSM", self->data.IsSM 
        ,"IsLocalAddr", self->data.IsLocalAddr 
        ,"Remark", self->data.Remark//, (Py_ssize_t)sizeof(self->data.Remark) 
        ,"Site", self->data.Site//, (Py_ssize_t)sizeof(self->data.Site) 
        ,"NetOperator", self->data.NetOperator//, (Py_ssize_t)sizeof(self->data.NetOperator) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTGIpAddrParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTGIpAddrParamField_get_BrokerID(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTGIpAddrParamField_set_BrokerID(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTGIpAddrParamField_get_UserID(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcTGIpAddrParamField_set_UserID(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
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
            
///服务地址
// TThostFtdcIpAddrType char[129]
static PyObject *PyCThostFtdcTGIpAddrParamField_get_Address(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///服务地址
// TThostFtdcIpAddrType char[129]
static int PyCThostFtdcTGIpAddrParamField_set_Address(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.Address, 0, sizeof(self->data.Address));
    // memcpy(self->data.Address, buf, len);
    strncpy(self->data.Address, buf, sizeof(self->data.Address));
    return 0;
}
            
///交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcTGIpAddrParamField_get_DRIdentityID(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcTGIpAddrParamField_set_DRIdentityID(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DRIdentityID value out of range for C int");
        return -1;
    }
    self->data.DRIdentityID = (int)buf;
    return 0;
}
        
///交易中心名称
// TThostFtdcDRIdentityNameType char[65]
static PyObject *PyCThostFtdcTGIpAddrParamField_get_DRIdentityName(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DRIdentityName, (Py_ssize_t)sizeof(self->data.DRIdentityName));
    return PyBytes_FromString(self->data.DRIdentityName);
}

///交易中心名称
// TThostFtdcDRIdentityNameType char[65]
static int PyCThostFtdcTGIpAddrParamField_set_DRIdentityName(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DRIdentityName)) {
        PyErr_SetString(PyExc_ValueError, "DRIdentityName must be less than 65 bytes");
        return -1;
    }
    // memset(self->data.DRIdentityName, 0, sizeof(self->data.DRIdentityName));
    // memcpy(self->data.DRIdentityName, buf, len);
    strncpy(self->data.DRIdentityName, buf, sizeof(self->data.DRIdentityName));
    return 0;
}
            
///交易地址OR行情地址
// TThostFtdcAddrSrvModeType char
static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrSrvMode(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AddrSrvMode), 1);
}

///交易地址OR行情地址
// TThostFtdcAddrSrvModeType char
static int PyCThostFtdcTGIpAddrParamField_set_AddrSrvMode(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddrSrvMode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AddrSrvMode)) {
        PyErr_SetString(PyExc_ValueError, "AddrSrvMode must be equal 1 bytes");
        return -1;
    }
    self->data.AddrSrvMode = *buf;
    return 0;
}
            
///地址版本
// TThostFtdcAddrVerType char
static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrVer(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AddrVer), 1);
}

///地址版本
// TThostFtdcAddrVerType char
static int PyCThostFtdcTGIpAddrParamField_set_AddrVer(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddrVer Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AddrVer)) {
        PyErr_SetString(PyExc_ValueError, "AddrVer must be equal 1 bytes");
        return -1;
    }
    self->data.AddrVer = *buf;
    return 0;
}
            
///服务地址编号
// TThostFtdcCommonIntType int
static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrNo(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AddrNo);
#else
    return PyInt_FromLong(self->data.AddrNo);
#endif
}

///服务地址编号
// TThostFtdcCommonIntType int
static int PyCThostFtdcTGIpAddrParamField_set_AddrNo(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddrNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddrNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the AddrNo value out of range for C int");
        return -1;
    }
    self->data.AddrNo = (int)buf;
    return 0;
}
        
///服务地址名称
// TThostFtdcAddrNameType char[65]
static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrName(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AddrName, (Py_ssize_t)sizeof(self->data.AddrName));
    return PyBytes_FromString(self->data.AddrName);
}

///服务地址名称
// TThostFtdcAddrNameType char[65]
static int PyCThostFtdcTGIpAddrParamField_set_AddrName(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddrName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AddrName)) {
        PyErr_SetString(PyExc_ValueError, "AddrName must be less than 65 bytes");
        return -1;
    }
    // memset(self->data.AddrName, 0, sizeof(self->data.AddrName));
    // memcpy(self->data.AddrName, buf, len);
    strncpy(self->data.AddrName, buf, sizeof(self->data.AddrName));
    return 0;
}
            
///是否是国密地址
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcTGIpAddrParamField_get_IsSM(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsSM);
#else
    return PyInt_FromLong(self->data.IsSM);
#endif
}

///是否是国密地址
// TThostFtdcBoolType int
static int PyCThostFtdcTGIpAddrParamField_set_IsSM(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSM Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSM Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsSM value out of range for C int");
        return -1;
    }
    self->data.IsSM = (int)buf;
    return 0;
}
        
///是否是内网地址
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcTGIpAddrParamField_get_IsLocalAddr(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsLocalAddr);
#else
    return PyInt_FromLong(self->data.IsLocalAddr);
#endif
}

///是否是内网地址
// TThostFtdcBoolType int
static int PyCThostFtdcTGIpAddrParamField_set_IsLocalAddr(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsLocalAddr Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsLocalAddr Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsLocalAddr value out of range for C int");
        return -1;
    }
    self->data.IsLocalAddr = (int)buf;
    return 0;
}
        
///地址补充信息
// TThostFtdcAddrRemarkType char[161]
static PyObject *PyCThostFtdcTGIpAddrParamField_get_Remark(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Remark, (Py_ssize_t)sizeof(self->data.Remark));
    return PyBytes_FromString(self->data.Remark);
}

///地址补充信息
// TThostFtdcAddrRemarkType char[161]
static int PyCThostFtdcTGIpAddrParamField_set_Remark(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Remark Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Remark)) {
        PyErr_SetString(PyExc_ValueError, "Remark must be less than 161 bytes");
        return -1;
    }
    // memset(self->data.Remark, 0, sizeof(self->data.Remark));
    // memcpy(self->data.Remark, buf, len);
    strncpy(self->data.Remark, buf, sizeof(self->data.Remark));
    return 0;
}
            
///站点
// TThostFtdcSiteType char[51]
static PyObject *PyCThostFtdcTGIpAddrParamField_get_Site(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Site, (Py_ssize_t)sizeof(self->data.Site));
    return PyBytes_FromString(self->data.Site);
}

///站点
// TThostFtdcSiteType char[51]
static int PyCThostFtdcTGIpAddrParamField_set_Site(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Site Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Site)) {
        PyErr_SetString(PyExc_ValueError, "Site must be less than 51 bytes");
        return -1;
    }
    // memset(self->data.Site, 0, sizeof(self->data.Site));
    // memcpy(self->data.Site, buf, len);
    strncpy(self->data.Site, buf, sizeof(self->data.Site));
    return 0;
}
            
///网络运营商
// TThostFtdcNetOperatorType char[9]
static PyObject *PyCThostFtdcTGIpAddrParamField_get_NetOperator(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NetOperator, (Py_ssize_t)sizeof(self->data.NetOperator));
    return PyBytes_FromString(self->data.NetOperator);
}

///网络运营商
// TThostFtdcNetOperatorType char[9]
static int PyCThostFtdcTGIpAddrParamField_set_NetOperator(PyCThostFtdcTGIpAddrParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NetOperator Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NetOperator)) {
        PyErr_SetString(PyExc_ValueError, "NetOperator must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.NetOperator, 0, sizeof(self->data.NetOperator));
    // memcpy(self->data.NetOperator, buf, len);
    strncpy(self->data.NetOperator, buf, sizeof(self->data.NetOperator));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTGIpAddrParamField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTGIpAddrParamField_get_BrokerID, (setter)PyCThostFtdcTGIpAddrParamField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcTGIpAddrParamField_get_UserID, (setter)PyCThostFtdcTGIpAddrParamField_set_UserID, (char *)"UserID", NULL},
    ///服务地址 
    {(char *)"Address", (getter)PyCThostFtdcTGIpAddrParamField_get_Address, (setter)PyCThostFtdcTGIpAddrParamField_set_Address, (char *)"Address", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcTGIpAddrParamField_get_DRIdentityID, (setter)PyCThostFtdcTGIpAddrParamField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
    ///交易中心名称 
    {(char *)"DRIdentityName", (getter)PyCThostFtdcTGIpAddrParamField_get_DRIdentityName, (setter)PyCThostFtdcTGIpAddrParamField_set_DRIdentityName, (char *)"DRIdentityName", NULL},
    ///交易地址OR行情地址 
    {(char *)"AddrSrvMode", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrSrvMode, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrSrvMode, (char *)"AddrSrvMode", NULL},
    ///地址版本 
    {(char *)"AddrVer", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrVer, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrVer, (char *)"AddrVer", NULL},
    ///服务地址编号 
    {(char *)"AddrNo", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrNo, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrNo, (char *)"AddrNo", NULL},
    ///服务地址名称 
    {(char *)"AddrName", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrName, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrName, (char *)"AddrName", NULL},
    ///是否是国密地址 
    {(char *)"IsSM", (getter)PyCThostFtdcTGIpAddrParamField_get_IsSM, (setter)PyCThostFtdcTGIpAddrParamField_set_IsSM, (char *)"IsSM", NULL},
    ///是否是内网地址 
    {(char *)"IsLocalAddr", (getter)PyCThostFtdcTGIpAddrParamField_get_IsLocalAddr, (setter)PyCThostFtdcTGIpAddrParamField_set_IsLocalAddr, (char *)"IsLocalAddr", NULL},
    ///地址补充信息 
    {(char *)"Remark", (getter)PyCThostFtdcTGIpAddrParamField_get_Remark, (setter)PyCThostFtdcTGIpAddrParamField_set_Remark, (char *)"Remark", NULL},
    ///站点 
    {(char *)"Site", (getter)PyCThostFtdcTGIpAddrParamField_get_Site, (setter)PyCThostFtdcTGIpAddrParamField_set_Site, (char *)"Site", NULL},
    ///网络运营商 
    {(char *)"NetOperator", (getter)PyCThostFtdcTGIpAddrParamField_get_NetOperator, (setter)PyCThostFtdcTGIpAddrParamField_set_NetOperator, (char *)"NetOperator", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTGIpAddrParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTGIpAddrParamField",	/* tp_name */
	sizeof(PyCThostFtdcTGIpAddrParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTGIpAddrParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTGIpAddrParamField_repr,   /* tp_repr */
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
	"CThostFtdcTGIpAddrParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTGIpAddrParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTGIpAddrParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTGIpAddrParamField_new,       /* tp_new */
};

int PyCThostFtdcTGIpAddrParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTGIpAddrParamField  */
	if (PyType_Ready(&PyCThostFtdcTGIpAddrParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTGIpAddrParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTGIpAddrParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTGIpAddrParamField", (PyObject *)&PyCThostFtdcTGIpAddrParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTGIpAddrParamField to module");
        Py_DECREF(&PyCThostFtdcTGIpAddrParamFieldType);
		return -1;
    }

    return 0;
}
