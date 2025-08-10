
#include "PyCThostFtdcIpAddrParamField.h"

///服务地址参数

static PyObject *PyCThostFtdcIpAddrParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcIpAddrParamField *self = (PyCThostFtdcIpAddrParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcIpAddrParamField_init(PyCThostFtdcIpAddrParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "Address", "DRIdentityID", "DRIdentityName", "AddrSrvMode", "AddrVer", "AddrNo", "AddrName", "IsSM", "IsLocalAddr", "Remark", "Site", "NetOperator",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *IpAddrParamField_BrokerID = NULL;
    Py_ssize_t IpAddrParamField_BrokerID_len = 0;
            
    ///服务地址
    // TThostFtdcIpAddrType char[129]
    const char *IpAddrParamField_Address = NULL;
    Py_ssize_t IpAddrParamField_Address_len = 0;
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int IpAddrParamField_DRIdentityID = 0;
        
    ///交易中心名称
    // TThostFtdcDRIdentityNameType char[65]
    const char *IpAddrParamField_DRIdentityName = NULL;
    Py_ssize_t IpAddrParamField_DRIdentityName_len = 0;
            
    ///交易地址OR行情地址
    // TThostFtdcAddrSrvModeType char
    char IpAddrParamField_AddrSrvMode = 0;
            
    ///地址版本
    // TThostFtdcAddrVerType char
    char IpAddrParamField_AddrVer = 0;
            
    ///服务地址编号
    // TThostFtdcCommonIntType int
    int IpAddrParamField_AddrNo = 0;
        
    ///服务地址名称
    // TThostFtdcAddrNameType char[65]
    const char *IpAddrParamField_AddrName = NULL;
    Py_ssize_t IpAddrParamField_AddrName_len = 0;
            
    ///是否是国密地址
    // TThostFtdcBoolType int
    int IpAddrParamField_IsSM = 0;
        
    ///是否是内网地址
    // TThostFtdcBoolType int
    int IpAddrParamField_IsLocalAddr = 0;
        
    ///地址补充信息
    // TThostFtdcAddrRemarkType char[161]
    const char *IpAddrParamField_Remark = NULL;
    Py_ssize_t IpAddrParamField_Remark_len = 0;
            
    ///站点
    // TThostFtdcSiteType char[51]
    const char *IpAddrParamField_Site = NULL;
    Py_ssize_t IpAddrParamField_Site_len = 0;
            
    ///网络运营商
    // TThostFtdcNetOperatorType char[9]
    const char *IpAddrParamField_NetOperator = NULL;
    Py_ssize_t IpAddrParamField_NetOperator_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#cciy#iiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#ccis#iis#s#s#", (char **)kwlist
#endif

        , &IpAddrParamField_BrokerID, &IpAddrParamField_BrokerID_len 
        , &IpAddrParamField_Address, &IpAddrParamField_Address_len 
        , &IpAddrParamField_DRIdentityID 
        , &IpAddrParamField_DRIdentityName, &IpAddrParamField_DRIdentityName_len 
        , &IpAddrParamField_AddrSrvMode 
        , &IpAddrParamField_AddrVer 
        , &IpAddrParamField_AddrNo 
        , &IpAddrParamField_AddrName, &IpAddrParamField_AddrName_len 
        , &IpAddrParamField_IsSM 
        , &IpAddrParamField_IsLocalAddr 
        , &IpAddrParamField_Remark, &IpAddrParamField_Remark_len 
        , &IpAddrParamField_Site, &IpAddrParamField_Site_len 
        , &IpAddrParamField_NetOperator, &IpAddrParamField_NetOperator_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( IpAddrParamField_BrokerID != NULL ) {
        if(IpAddrParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", IpAddrParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, IpAddrParamField_BrokerID, IpAddrParamField_BrokerID_len);        
        strncpy(self->data.BrokerID, IpAddrParamField_BrokerID, sizeof(self->data.BrokerID) );
        IpAddrParamField_BrokerID = NULL;
    }
            
    ///服务地址
    // TThostFtdcIpAddrType char[129]
    if( IpAddrParamField_Address != NULL ) {
        if(IpAddrParamField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", IpAddrParamField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, IpAddrParamField_Address, IpAddrParamField_Address_len);        
        strncpy(self->data.Address, IpAddrParamField_Address, sizeof(self->data.Address) );
        IpAddrParamField_Address = NULL;
    }
            
    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = IpAddrParamField_DRIdentityID;
        
    ///交易中心名称
    // TThostFtdcDRIdentityNameType char[65]
    if( IpAddrParamField_DRIdentityName != NULL ) {
        if(IpAddrParamField_DRIdentityName_len > (Py_ssize_t)sizeof(self->data.DRIdentityName)) {
            PyErr_Format(PyExc_ValueError, "DRIdentityName too long: length=%zd (max allowed is %zd)", IpAddrParamField_DRIdentityName_len, (Py_ssize_t)sizeof(self->data.DRIdentityName));
            return -1;
        }
        // memset(self->data.DRIdentityName, 0, sizeof(self->data.DRIdentityName));
        // memcpy(self->data.DRIdentityName, IpAddrParamField_DRIdentityName, IpAddrParamField_DRIdentityName_len);        
        strncpy(self->data.DRIdentityName, IpAddrParamField_DRIdentityName, sizeof(self->data.DRIdentityName) );
        IpAddrParamField_DRIdentityName = NULL;
    }
            
    ///交易地址OR行情地址
    // TThostFtdcAddrSrvModeType char
    self->data.AddrSrvMode = IpAddrParamField_AddrSrvMode;
            
    ///地址版本
    // TThostFtdcAddrVerType char
    self->data.AddrVer = IpAddrParamField_AddrVer;
            
    ///服务地址编号
    // TThostFtdcCommonIntType int
    self->data.AddrNo = IpAddrParamField_AddrNo;
        
    ///服务地址名称
    // TThostFtdcAddrNameType char[65]
    if( IpAddrParamField_AddrName != NULL ) {
        if(IpAddrParamField_AddrName_len > (Py_ssize_t)sizeof(self->data.AddrName)) {
            PyErr_Format(PyExc_ValueError, "AddrName too long: length=%zd (max allowed is %zd)", IpAddrParamField_AddrName_len, (Py_ssize_t)sizeof(self->data.AddrName));
            return -1;
        }
        // memset(self->data.AddrName, 0, sizeof(self->data.AddrName));
        // memcpy(self->data.AddrName, IpAddrParamField_AddrName, IpAddrParamField_AddrName_len);        
        strncpy(self->data.AddrName, IpAddrParamField_AddrName, sizeof(self->data.AddrName) );
        IpAddrParamField_AddrName = NULL;
    }
            
    ///是否是国密地址
    // TThostFtdcBoolType int
    self->data.IsSM = IpAddrParamField_IsSM;
        
    ///是否是内网地址
    // TThostFtdcBoolType int
    self->data.IsLocalAddr = IpAddrParamField_IsLocalAddr;
        
    ///地址补充信息
    // TThostFtdcAddrRemarkType char[161]
    if( IpAddrParamField_Remark != NULL ) {
        if(IpAddrParamField_Remark_len > (Py_ssize_t)sizeof(self->data.Remark)) {
            PyErr_Format(PyExc_ValueError, "Remark too long: length=%zd (max allowed is %zd)", IpAddrParamField_Remark_len, (Py_ssize_t)sizeof(self->data.Remark));
            return -1;
        }
        // memset(self->data.Remark, 0, sizeof(self->data.Remark));
        // memcpy(self->data.Remark, IpAddrParamField_Remark, IpAddrParamField_Remark_len);        
        strncpy(self->data.Remark, IpAddrParamField_Remark, sizeof(self->data.Remark) );
        IpAddrParamField_Remark = NULL;
    }
            
    ///站点
    // TThostFtdcSiteType char[51]
    if( IpAddrParamField_Site != NULL ) {
        if(IpAddrParamField_Site_len > (Py_ssize_t)sizeof(self->data.Site)) {
            PyErr_Format(PyExc_ValueError, "Site too long: length=%zd (max allowed is %zd)", IpAddrParamField_Site_len, (Py_ssize_t)sizeof(self->data.Site));
            return -1;
        }
        // memset(self->data.Site, 0, sizeof(self->data.Site));
        // memcpy(self->data.Site, IpAddrParamField_Site, IpAddrParamField_Site_len);        
        strncpy(self->data.Site, IpAddrParamField_Site, sizeof(self->data.Site) );
        IpAddrParamField_Site = NULL;
    }
            
    ///网络运营商
    // TThostFtdcNetOperatorType char[9]
    if( IpAddrParamField_NetOperator != NULL ) {
        if(IpAddrParamField_NetOperator_len > (Py_ssize_t)sizeof(self->data.NetOperator)) {
            PyErr_Format(PyExc_ValueError, "NetOperator too long: length=%zd (max allowed is %zd)", IpAddrParamField_NetOperator_len, (Py_ssize_t)sizeof(self->data.NetOperator));
            return -1;
        }
        // memset(self->data.NetOperator, 0, sizeof(self->data.NetOperator));
        // memcpy(self->data.NetOperator, IpAddrParamField_NetOperator, IpAddrParamField_NetOperator_len);        
        strncpy(self->data.NetOperator, IpAddrParamField_NetOperator, sizeof(self->data.NetOperator) );
        IpAddrParamField_NetOperator = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcIpAddrParamField_dealloc(PyCThostFtdcIpAddrParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcIpAddrParamField_repr(PyCThostFtdcIpAddrParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:c,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:c,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIpAddrParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcIpAddrParamField_get_BrokerID(PyCThostFtdcIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcIpAddrParamField_set_BrokerID(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
            
///服务地址
// TThostFtdcIpAddrType char[129]
static PyObject *PyCThostFtdcIpAddrParamField_get_Address(PyCThostFtdcIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///服务地址
// TThostFtdcIpAddrType char[129]
static int PyCThostFtdcIpAddrParamField_set_Address(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_DRIdentityID(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcIpAddrParamField_set_DRIdentityID(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_DRIdentityName(PyCThostFtdcIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DRIdentityName, (Py_ssize_t)sizeof(self->data.DRIdentityName));
    return PyBytes_FromString(self->data.DRIdentityName);
}

///交易中心名称
// TThostFtdcDRIdentityNameType char[65]
static int PyCThostFtdcIpAddrParamField_set_DRIdentityName(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_AddrSrvMode(PyCThostFtdcIpAddrParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AddrSrvMode), 1);
}

///交易地址OR行情地址
// TThostFtdcAddrSrvModeType char
static int PyCThostFtdcIpAddrParamField_set_AddrSrvMode(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_AddrVer(PyCThostFtdcIpAddrParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AddrVer), 1);
}

///地址版本
// TThostFtdcAddrVerType char
static int PyCThostFtdcIpAddrParamField_set_AddrVer(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_AddrNo(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AddrNo);
#else
    return PyInt_FromLong(self->data.AddrNo);
#endif
}

///服务地址编号
// TThostFtdcCommonIntType int
static int PyCThostFtdcIpAddrParamField_set_AddrNo(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_AddrName(PyCThostFtdcIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AddrName, (Py_ssize_t)sizeof(self->data.AddrName));
    return PyBytes_FromString(self->data.AddrName);
}

///服务地址名称
// TThostFtdcAddrNameType char[65]
static int PyCThostFtdcIpAddrParamField_set_AddrName(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_IsSM(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsSM);
#else
    return PyInt_FromLong(self->data.IsSM);
#endif
}

///是否是国密地址
// TThostFtdcBoolType int
static int PyCThostFtdcIpAddrParamField_set_IsSM(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_IsLocalAddr(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsLocalAddr);
#else
    return PyInt_FromLong(self->data.IsLocalAddr);
#endif
}

///是否是内网地址
// TThostFtdcBoolType int
static int PyCThostFtdcIpAddrParamField_set_IsLocalAddr(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_Remark(PyCThostFtdcIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Remark, (Py_ssize_t)sizeof(self->data.Remark));
    return PyBytes_FromString(self->data.Remark);
}

///地址补充信息
// TThostFtdcAddrRemarkType char[161]
static int PyCThostFtdcIpAddrParamField_set_Remark(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_Site(PyCThostFtdcIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Site, (Py_ssize_t)sizeof(self->data.Site));
    return PyBytes_FromString(self->data.Site);
}

///站点
// TThostFtdcSiteType char[51]
static int PyCThostFtdcIpAddrParamField_set_Site(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcIpAddrParamField_get_NetOperator(PyCThostFtdcIpAddrParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NetOperator, (Py_ssize_t)sizeof(self->data.NetOperator));
    return PyBytes_FromString(self->data.NetOperator);
}

///网络运营商
// TThostFtdcNetOperatorType char[9]
static int PyCThostFtdcIpAddrParamField_set_NetOperator(PyCThostFtdcIpAddrParamField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcIpAddrParamField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcIpAddrParamField_get_BrokerID, (setter)PyCThostFtdcIpAddrParamField_set_BrokerID, (char *)"BrokerID", NULL},
    ///服务地址 
    {(char *)"Address", (getter)PyCThostFtdcIpAddrParamField_get_Address, (setter)PyCThostFtdcIpAddrParamField_set_Address, (char *)"Address", NULL},
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcIpAddrParamField_get_DRIdentityID, (setter)PyCThostFtdcIpAddrParamField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
    ///交易中心名称 
    {(char *)"DRIdentityName", (getter)PyCThostFtdcIpAddrParamField_get_DRIdentityName, (setter)PyCThostFtdcIpAddrParamField_set_DRIdentityName, (char *)"DRIdentityName", NULL},
    ///交易地址OR行情地址 
    {(char *)"AddrSrvMode", (getter)PyCThostFtdcIpAddrParamField_get_AddrSrvMode, (setter)PyCThostFtdcIpAddrParamField_set_AddrSrvMode, (char *)"AddrSrvMode", NULL},
    ///地址版本 
    {(char *)"AddrVer", (getter)PyCThostFtdcIpAddrParamField_get_AddrVer, (setter)PyCThostFtdcIpAddrParamField_set_AddrVer, (char *)"AddrVer", NULL},
    ///服务地址编号 
    {(char *)"AddrNo", (getter)PyCThostFtdcIpAddrParamField_get_AddrNo, (setter)PyCThostFtdcIpAddrParamField_set_AddrNo, (char *)"AddrNo", NULL},
    ///服务地址名称 
    {(char *)"AddrName", (getter)PyCThostFtdcIpAddrParamField_get_AddrName, (setter)PyCThostFtdcIpAddrParamField_set_AddrName, (char *)"AddrName", NULL},
    ///是否是国密地址 
    {(char *)"IsSM", (getter)PyCThostFtdcIpAddrParamField_get_IsSM, (setter)PyCThostFtdcIpAddrParamField_set_IsSM, (char *)"IsSM", NULL},
    ///是否是内网地址 
    {(char *)"IsLocalAddr", (getter)PyCThostFtdcIpAddrParamField_get_IsLocalAddr, (setter)PyCThostFtdcIpAddrParamField_set_IsLocalAddr, (char *)"IsLocalAddr", NULL},
    ///地址补充信息 
    {(char *)"Remark", (getter)PyCThostFtdcIpAddrParamField_get_Remark, (setter)PyCThostFtdcIpAddrParamField_set_Remark, (char *)"Remark", NULL},
    ///站点 
    {(char *)"Site", (getter)PyCThostFtdcIpAddrParamField_get_Site, (setter)PyCThostFtdcIpAddrParamField_set_Site, (char *)"Site", NULL},
    ///网络运营商 
    {(char *)"NetOperator", (getter)PyCThostFtdcIpAddrParamField_get_NetOperator, (setter)PyCThostFtdcIpAddrParamField_set_NetOperator, (char *)"NetOperator", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcIpAddrParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcIpAddrParamField",	/* tp_name */
	sizeof(PyCThostFtdcIpAddrParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcIpAddrParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcIpAddrParamField_repr,   /* tp_repr */
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
	"CThostFtdcIpAddrParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcIpAddrParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcIpAddrParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcIpAddrParamField_new,       /* tp_new */
};

int PyCThostFtdcIpAddrParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcIpAddrParamField  */
	if (PyType_Ready(&PyCThostFtdcIpAddrParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcIpAddrParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcIpAddrParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcIpAddrParamField", (PyObject *)&PyCThostFtdcIpAddrParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIpAddrParamField to module");
        Py_DECREF(&PyCThostFtdcIpAddrParamFieldType);
		return -1;
    }

    return 0;
}
