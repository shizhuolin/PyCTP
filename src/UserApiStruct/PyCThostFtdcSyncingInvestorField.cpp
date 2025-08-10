
#include "PyCThostFtdcSyncingInvestorField.h"

///正在同步中的投资者

static PyObject *PyCThostFtdcSyncingInvestorField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInvestorField *self = (PyCThostFtdcSyncingInvestorField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInvestorField_init(PyCThostFtdcSyncingInvestorField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "InvestorGroupID", "InvestorName", "IdentifiedCardType", "IdentifiedCardNo", "IsActive", "Telephone", "Address", "OpenDate", "Mobile", "CommModelID", "MarginModelID", "IsOrderFreq", "IsOpenVolLimit",  NULL};


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInvestorField_InvestorID = NULL;
    Py_ssize_t SyncingInvestorField_InvestorID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncingInvestorField_BrokerID = NULL;
    Py_ssize_t SyncingInvestorField_BrokerID_len = 0;
            
    ///投资者分组代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInvestorField_InvestorGroupID = NULL;
    Py_ssize_t SyncingInvestorField_InvestorGroupID_len = 0;
            
    ///投资者名称
    // TThostFtdcPartyNameType char[81]
    const char *SyncingInvestorField_InvestorName = NULL;
    Py_ssize_t SyncingInvestorField_InvestorName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char SyncingInvestorField_IdentifiedCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *SyncingInvestorField_IdentifiedCardNo = NULL;
    Py_ssize_t SyncingInvestorField_IdentifiedCardNo_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int SyncingInvestorField_IsActive = 0;
        
    ///联系电话
    // TThostFtdcTelephoneType char[41]
    const char *SyncingInvestorField_Telephone = NULL;
    Py_ssize_t SyncingInvestorField_Telephone_len = 0;
            
    ///通讯地址
    // TThostFtdcAddressType char[101]
    const char *SyncingInvestorField_Address = NULL;
    Py_ssize_t SyncingInvestorField_Address_len = 0;
            
    ///开户日期
    // TThostFtdcDateType char[9]
    const char *SyncingInvestorField_OpenDate = NULL;
    Py_ssize_t SyncingInvestorField_OpenDate_len = 0;
            
    ///手机
    // TThostFtdcMobileType char[41]
    const char *SyncingInvestorField_Mobile = NULL;
    Py_ssize_t SyncingInvestorField_Mobile_len = 0;
            
    ///手续费率模板代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInvestorField_CommModelID = NULL;
    Py_ssize_t SyncingInvestorField_CommModelID_len = 0;
            
    ///保证金率模板代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInvestorField_MarginModelID = NULL;
    Py_ssize_t SyncingInvestorField_MarginModelID_len = 0;
            
    ///是否频率控制
    // TThostFtdcEnumBoolType char
    char SyncingInvestorField_IsOrderFreq = 0;
            
    ///是否开仓限制
    // TThostFtdcEnumBoolType char
    char SyncingInvestorField_IsOpenVolLimit = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#iy#y#y#y#y#y#cc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cs#is#s#s#s#s#s#cc", (char **)kwlist
#endif

        , &SyncingInvestorField_InvestorID, &SyncingInvestorField_InvestorID_len 
        , &SyncingInvestorField_BrokerID, &SyncingInvestorField_BrokerID_len 
        , &SyncingInvestorField_InvestorGroupID, &SyncingInvestorField_InvestorGroupID_len 
        , &SyncingInvestorField_InvestorName, &SyncingInvestorField_InvestorName_len 
        , &SyncingInvestorField_IdentifiedCardType 
        , &SyncingInvestorField_IdentifiedCardNo, &SyncingInvestorField_IdentifiedCardNo_len 
        , &SyncingInvestorField_IsActive 
        , &SyncingInvestorField_Telephone, &SyncingInvestorField_Telephone_len 
        , &SyncingInvestorField_Address, &SyncingInvestorField_Address_len 
        , &SyncingInvestorField_OpenDate, &SyncingInvestorField_OpenDate_len 
        , &SyncingInvestorField_Mobile, &SyncingInvestorField_Mobile_len 
        , &SyncingInvestorField_CommModelID, &SyncingInvestorField_CommModelID_len 
        , &SyncingInvestorField_MarginModelID, &SyncingInvestorField_MarginModelID_len 
        , &SyncingInvestorField_IsOrderFreq 
        , &SyncingInvestorField_IsOpenVolLimit 


    )) {
        return -1;
    }


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInvestorField_InvestorID != NULL ) {
        if(SyncingInvestorField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncingInvestorField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncingInvestorField_InvestorID, SyncingInvestorField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncingInvestorField_InvestorID, sizeof(self->data.InvestorID) );
        SyncingInvestorField_InvestorID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncingInvestorField_BrokerID != NULL ) {
        if(SyncingInvestorField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncingInvestorField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncingInvestorField_BrokerID, SyncingInvestorField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncingInvestorField_BrokerID, sizeof(self->data.BrokerID) );
        SyncingInvestorField_BrokerID = NULL;
    }
            
    ///投资者分组代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInvestorField_InvestorGroupID != NULL ) {
        if(SyncingInvestorField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", SyncingInvestorField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
            return -1;
        }
        // memset(self->data.InvestorGroupID, 0, sizeof(self->data.InvestorGroupID));
        // memcpy(self->data.InvestorGroupID, SyncingInvestorField_InvestorGroupID, SyncingInvestorField_InvestorGroupID_len);        
        strncpy(self->data.InvestorGroupID, SyncingInvestorField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
        SyncingInvestorField_InvestorGroupID = NULL;
    }
            
    ///投资者名称
    // TThostFtdcPartyNameType char[81]
    if( SyncingInvestorField_InvestorName != NULL ) {
        if(SyncingInvestorField_InvestorName_len > (Py_ssize_t)sizeof(self->data.InvestorName)) {
            PyErr_Format(PyExc_ValueError, "InvestorName too long: length=%zd (max allowed is %zd)", SyncingInvestorField_InvestorName_len, (Py_ssize_t)sizeof(self->data.InvestorName));
            return -1;
        }
        // memset(self->data.InvestorName, 0, sizeof(self->data.InvestorName));
        // memcpy(self->data.InvestorName, SyncingInvestorField_InvestorName, SyncingInvestorField_InvestorName_len);        
        strncpy(self->data.InvestorName, SyncingInvestorField_InvestorName, sizeof(self->data.InvestorName) );
        SyncingInvestorField_InvestorName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdentifiedCardType = SyncingInvestorField_IdentifiedCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( SyncingInvestorField_IdentifiedCardNo != NULL ) {
        if(SyncingInvestorField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", SyncingInvestorField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, SyncingInvestorField_IdentifiedCardNo, SyncingInvestorField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, SyncingInvestorField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        SyncingInvestorField_IdentifiedCardNo = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = SyncingInvestorField_IsActive;
        
    ///联系电话
    // TThostFtdcTelephoneType char[41]
    if( SyncingInvestorField_Telephone != NULL ) {
        if(SyncingInvestorField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", SyncingInvestorField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
            return -1;
        }
        // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
        // memcpy(self->data.Telephone, SyncingInvestorField_Telephone, SyncingInvestorField_Telephone_len);        
        strncpy(self->data.Telephone, SyncingInvestorField_Telephone, sizeof(self->data.Telephone) );
        SyncingInvestorField_Telephone = NULL;
    }
            
    ///通讯地址
    // TThostFtdcAddressType char[101]
    if( SyncingInvestorField_Address != NULL ) {
        if(SyncingInvestorField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", SyncingInvestorField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, SyncingInvestorField_Address, SyncingInvestorField_Address_len);        
        strncpy(self->data.Address, SyncingInvestorField_Address, sizeof(self->data.Address) );
        SyncingInvestorField_Address = NULL;
    }
            
    ///开户日期
    // TThostFtdcDateType char[9]
    if( SyncingInvestorField_OpenDate != NULL ) {
        if(SyncingInvestorField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", SyncingInvestorField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
            return -1;
        }
        // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
        // memcpy(self->data.OpenDate, SyncingInvestorField_OpenDate, SyncingInvestorField_OpenDate_len);        
        strncpy(self->data.OpenDate, SyncingInvestorField_OpenDate, sizeof(self->data.OpenDate) );
        SyncingInvestorField_OpenDate = NULL;
    }
            
    ///手机
    // TThostFtdcMobileType char[41]
    if( SyncingInvestorField_Mobile != NULL ) {
        if(SyncingInvestorField_Mobile_len > (Py_ssize_t)sizeof(self->data.Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is %zd)", SyncingInvestorField_Mobile_len, (Py_ssize_t)sizeof(self->data.Mobile));
            return -1;
        }
        // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
        // memcpy(self->data.Mobile, SyncingInvestorField_Mobile, SyncingInvestorField_Mobile_len);        
        strncpy(self->data.Mobile, SyncingInvestorField_Mobile, sizeof(self->data.Mobile) );
        SyncingInvestorField_Mobile = NULL;
    }
            
    ///手续费率模板代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInvestorField_CommModelID != NULL ) {
        if(SyncingInvestorField_CommModelID_len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is %zd)", SyncingInvestorField_CommModelID_len, (Py_ssize_t)sizeof(self->data.CommModelID));
            return -1;
        }
        // memset(self->data.CommModelID, 0, sizeof(self->data.CommModelID));
        // memcpy(self->data.CommModelID, SyncingInvestorField_CommModelID, SyncingInvestorField_CommModelID_len);        
        strncpy(self->data.CommModelID, SyncingInvestorField_CommModelID, sizeof(self->data.CommModelID) );
        SyncingInvestorField_CommModelID = NULL;
    }
            
    ///保证金率模板代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInvestorField_MarginModelID != NULL ) {
        if(SyncingInvestorField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", SyncingInvestorField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
            return -1;
        }
        // memset(self->data.MarginModelID, 0, sizeof(self->data.MarginModelID));
        // memcpy(self->data.MarginModelID, SyncingInvestorField_MarginModelID, SyncingInvestorField_MarginModelID_len);        
        strncpy(self->data.MarginModelID, SyncingInvestorField_MarginModelID, sizeof(self->data.MarginModelID) );
        SyncingInvestorField_MarginModelID = NULL;
    }
            
    ///是否频率控制
    // TThostFtdcEnumBoolType char
    self->data.IsOrderFreq = SyncingInvestorField_IsOrderFreq;
            
    ///是否开仓限制
    // TThostFtdcEnumBoolType char
    self->data.IsOpenVolLimit = SyncingInvestorField_IsOpenVolLimit;
            

    return 0;
}

static void PyCThostFtdcSyncingInvestorField_dealloc(PyCThostFtdcSyncingInvestorField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInvestorField_repr(PyCThostFtdcSyncingInvestorField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:c}"
#endif

        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorGroupID", self->data.InvestorGroupID//, (Py_ssize_t)sizeof(self->data.InvestorGroupID) 
        ,"InvestorName", self->data.InvestorName//, (Py_ssize_t)sizeof(self->data.InvestorName) 
        ,"IdentifiedCardType", self->data.IdentifiedCardType 
        ,"IdentifiedCardNo", self->data.IdentifiedCardNo//, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo) 
        ,"IsActive", self->data.IsActive 
        ,"Telephone", self->data.Telephone//, (Py_ssize_t)sizeof(self->data.Telephone) 
        ,"Address", self->data.Address//, (Py_ssize_t)sizeof(self->data.Address) 
        ,"OpenDate", self->data.OpenDate//, (Py_ssize_t)sizeof(self->data.OpenDate) 
        ,"Mobile", self->data.Mobile//, (Py_ssize_t)sizeof(self->data.Mobile) 
        ,"CommModelID", self->data.CommModelID//, (Py_ssize_t)sizeof(self->data.CommModelID) 
        ,"MarginModelID", self->data.MarginModelID//, (Py_ssize_t)sizeof(self->data.MarginModelID) 
        ,"IsOrderFreq", self->data.IsOrderFreq 
        ,"IsOpenVolLimit", self->data.IsOpenVolLimit 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncingInvestorField_get_InvestorID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInvestorField_set_InvestorID(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncingInvestorField_get_BrokerID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncingInvestorField_set_BrokerID(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
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
            
///投资者分组代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncingInvestorField_get_InvestorGroupID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorGroupID, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
    return PyBytes_FromString(self->data.InvestorGroupID);
}

///投资者分组代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInvestorField_set_InvestorGroupID(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorGroupID, 0, sizeof(self->data.InvestorGroupID));
    // memcpy(self->data.InvestorGroupID, buf, len);
    strncpy(self->data.InvestorGroupID, buf, sizeof(self->data.InvestorGroupID));
    return 0;
}
            
///投资者名称
// TThostFtdcPartyNameType char[81]
static PyObject *PyCThostFtdcSyncingInvestorField_get_InvestorName(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorName, (Py_ssize_t)sizeof(self->data.InvestorName));
    return PyBytes_FromString(self->data.InvestorName);
}

///投资者名称
// TThostFtdcPartyNameType char[81]
static int PyCThostFtdcSyncingInvestorField_set_InvestorName(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorName must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InvestorName, 0, sizeof(self->data.InvestorName));
    // memcpy(self->data.InvestorName, buf, len);
    strncpy(self->data.InvestorName, buf, sizeof(self->data.InvestorName));
    return 0;
}
            
///证件类型
// TThostFtdcIdCardTypeType char
static PyObject *PyCThostFtdcSyncingInvestorField_get_IdentifiedCardType(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdentifiedCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcSyncingInvestorField_set_IdentifiedCardType(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IdentifiedCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardType must be equal 1 bytes");
        return -1;
    }
    self->data.IdentifiedCardType = *buf;
    return 0;
}
            
///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static PyObject *PyCThostFtdcSyncingInvestorField_get_IdentifiedCardNo(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcSyncingInvestorField_set_IdentifiedCardNo(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
        PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 51 bytes");
        return -1;
    }
    // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
    // memcpy(self->data.IdentifiedCardNo, buf, len);
    strncpy(self->data.IdentifiedCardNo, buf, sizeof(self->data.IdentifiedCardNo));
    return 0;
}
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncingInvestorField_get_IsActive(PyCThostFtdcSyncingInvestorField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcSyncingInvestorField_set_IsActive(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActive value out of range for C int");
        return -1;
    }
    self->data.IsActive = (int)buf;
    return 0;
}
        
///联系电话
// TThostFtdcTelephoneType char[41]
static PyObject *PyCThostFtdcSyncingInvestorField_get_Telephone(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Telephone, (Py_ssize_t)sizeof(self->data.Telephone));
    return PyBytes_FromString(self->data.Telephone);
}

///联系电话
// TThostFtdcTelephoneType char[41]
static int PyCThostFtdcSyncingInvestorField_set_Telephone(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Telephone)) {
        PyErr_SetString(PyExc_ValueError, "Telephone must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
    // memcpy(self->data.Telephone, buf, len);
    strncpy(self->data.Telephone, buf, sizeof(self->data.Telephone));
    return 0;
}
            
///通讯地址
// TThostFtdcAddressType char[101]
static PyObject *PyCThostFtdcSyncingInvestorField_get_Address(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///通讯地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcSyncingInvestorField_set_Address(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Address)) {
        PyErr_SetString(PyExc_ValueError, "Address must be less than 101 bytes");
        return -1;
    }
    // memset(self->data.Address, 0, sizeof(self->data.Address));
    // memcpy(self->data.Address, buf, len);
    strncpy(self->data.Address, buf, sizeof(self->data.Address));
    return 0;
}
            
///开户日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncingInvestorField_get_OpenDate(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenDate, (Py_ssize_t)sizeof(self->data.OpenDate));
    return PyBytes_FromString(self->data.OpenDate);
}

///开户日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncingInvestorField_set_OpenDate(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
    // memcpy(self->data.OpenDate, buf, len);
    strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
    return 0;
}
            
///手机
// TThostFtdcMobileType char[41]
static PyObject *PyCThostFtdcSyncingInvestorField_get_Mobile(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Mobile, (Py_ssize_t)sizeof(self->data.Mobile));
    return PyBytes_FromString(self->data.Mobile);
}

///手机
// TThostFtdcMobileType char[41]
static int PyCThostFtdcSyncingInvestorField_set_Mobile(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
    // memcpy(self->data.Mobile, buf, len);
    strncpy(self->data.Mobile, buf, sizeof(self->data.Mobile));
    return 0;
}
            
///手续费率模板代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncingInvestorField_get_CommModelID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommModelID, (Py_ssize_t)sizeof(self->data.CommModelID));
    return PyBytes_FromString(self->data.CommModelID);
}

///手续费率模板代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInvestorField_set_CommModelID(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
        PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.CommModelID, 0, sizeof(self->data.CommModelID));
    // memcpy(self->data.CommModelID, buf, len);
    strncpy(self->data.CommModelID, buf, sizeof(self->data.CommModelID));
    return 0;
}
            
///保证金率模板代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncingInvestorField_get_MarginModelID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MarginModelID, (Py_ssize_t)sizeof(self->data.MarginModelID));
    return PyBytes_FromString(self->data.MarginModelID);
}

///保证金率模板代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInvestorField_set_MarginModelID(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.MarginModelID, 0, sizeof(self->data.MarginModelID));
    // memcpy(self->data.MarginModelID, buf, len);
    strncpy(self->data.MarginModelID, buf, sizeof(self->data.MarginModelID));
    return 0;
}
            
///是否频率控制
// TThostFtdcEnumBoolType char
static PyObject *PyCThostFtdcSyncingInvestorField_get_IsOrderFreq(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IsOrderFreq), 1);
}

///是否频率控制
// TThostFtdcEnumBoolType char
static int PyCThostFtdcSyncingInvestorField_set_IsOrderFreq(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOrderFreq Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IsOrderFreq)) {
        PyErr_SetString(PyExc_ValueError, "IsOrderFreq must be equal 1 bytes");
        return -1;
    }
    self->data.IsOrderFreq = *buf;
    return 0;
}
            
///是否开仓限制
// TThostFtdcEnumBoolType char
static PyObject *PyCThostFtdcSyncingInvestorField_get_IsOpenVolLimit(PyCThostFtdcSyncingInvestorField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IsOpenVolLimit), 1);
}

///是否开仓限制
// TThostFtdcEnumBoolType char
static int PyCThostFtdcSyncingInvestorField_set_IsOpenVolLimit(PyCThostFtdcSyncingInvestorField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOpenVolLimit Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IsOpenVolLimit)) {
        PyErr_SetString(PyExc_ValueError, "IsOpenVolLimit must be equal 1 bytes");
        return -1;
    }
    self->data.IsOpenVolLimit = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSyncingInvestorField_getset[] = {
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInvestorField_get_InvestorID, (setter)PyCThostFtdcSyncingInvestorField_set_InvestorID, (char *)"InvestorID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInvestorField_get_BrokerID, (setter)PyCThostFtdcSyncingInvestorField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者分组代码 
    {(char *)"InvestorGroupID", (getter)PyCThostFtdcSyncingInvestorField_get_InvestorGroupID, (setter)PyCThostFtdcSyncingInvestorField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
    ///投资者名称 
    {(char *)"InvestorName", (getter)PyCThostFtdcSyncingInvestorField_get_InvestorName, (setter)PyCThostFtdcSyncingInvestorField_set_InvestorName, (char *)"InvestorName", NULL},
    ///证件类型 
    {(char *)"IdentifiedCardType", (getter)PyCThostFtdcSyncingInvestorField_get_IdentifiedCardType, (setter)PyCThostFtdcSyncingInvestorField_set_IdentifiedCardType, (char *)"IdentifiedCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcSyncingInvestorField_get_IdentifiedCardNo, (setter)PyCThostFtdcSyncingInvestorField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcSyncingInvestorField_get_IsActive, (setter)PyCThostFtdcSyncingInvestorField_set_IsActive, (char *)"IsActive", NULL},
    ///联系电话 
    {(char *)"Telephone", (getter)PyCThostFtdcSyncingInvestorField_get_Telephone, (setter)PyCThostFtdcSyncingInvestorField_set_Telephone, (char *)"Telephone", NULL},
    ///通讯地址 
    {(char *)"Address", (getter)PyCThostFtdcSyncingInvestorField_get_Address, (setter)PyCThostFtdcSyncingInvestorField_set_Address, (char *)"Address", NULL},
    ///开户日期 
    {(char *)"OpenDate", (getter)PyCThostFtdcSyncingInvestorField_get_OpenDate, (setter)PyCThostFtdcSyncingInvestorField_set_OpenDate, (char *)"OpenDate", NULL},
    ///手机 
    {(char *)"Mobile", (getter)PyCThostFtdcSyncingInvestorField_get_Mobile, (setter)PyCThostFtdcSyncingInvestorField_set_Mobile, (char *)"Mobile", NULL},
    ///手续费率模板代码 
    {(char *)"CommModelID", (getter)PyCThostFtdcSyncingInvestorField_get_CommModelID, (setter)PyCThostFtdcSyncingInvestorField_set_CommModelID, (char *)"CommModelID", NULL},
    ///保证金率模板代码 
    {(char *)"MarginModelID", (getter)PyCThostFtdcSyncingInvestorField_get_MarginModelID, (setter)PyCThostFtdcSyncingInvestorField_set_MarginModelID, (char *)"MarginModelID", NULL},
    ///是否频率控制 
    {(char *)"IsOrderFreq", (getter)PyCThostFtdcSyncingInvestorField_get_IsOrderFreq, (setter)PyCThostFtdcSyncingInvestorField_set_IsOrderFreq, (char *)"IsOrderFreq", NULL},
    ///是否开仓限制 
    {(char *)"IsOpenVolLimit", (getter)PyCThostFtdcSyncingInvestorField_get_IsOpenVolLimit, (setter)PyCThostFtdcSyncingInvestorField_set_IsOpenVolLimit, (char *)"IsOpenVolLimit", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInvestorFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInvestorField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInvestorField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInvestorField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInvestorField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInvestorField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInvestorField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInvestorField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInvestorField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInvestorFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInvestorField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInvestorFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInvestorField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInvestorFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorField", (PyObject *)&PyCThostFtdcSyncingInvestorFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorField to module");
        Py_DECREF(&PyCThostFtdcSyncingInvestorFieldType);
		return -1;
    }

    return 0;
}
