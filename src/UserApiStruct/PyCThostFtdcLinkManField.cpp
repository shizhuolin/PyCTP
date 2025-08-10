
#include "PyCThostFtdcLinkManField.h"

///联系人

static PyObject *PyCThostFtdcLinkManField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLinkManField *self = (PyCThostFtdcLinkManField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcLinkManField_init(PyCThostFtdcLinkManField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "PersonType", "IdentifiedCardType", "IdentifiedCardNo", "PersonName", "Telephone", "Address", "ZipCode", "Priority", "UOAZipCode", "PersonFullName",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *LinkManField_BrokerID = NULL;
    Py_ssize_t LinkManField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *LinkManField_InvestorID = NULL;
    Py_ssize_t LinkManField_InvestorID_len = 0;
            
    ///联系人类型
    // TThostFtdcPersonTypeType char
    char LinkManField_PersonType = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char LinkManField_IdentifiedCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *LinkManField_IdentifiedCardNo = NULL;
    Py_ssize_t LinkManField_IdentifiedCardNo_len = 0;
            
    ///名称
    // TThostFtdcPartyNameType char[81]
    const char *LinkManField_PersonName = NULL;
    Py_ssize_t LinkManField_PersonName_len = 0;
            
    ///联系电话
    // TThostFtdcTelephoneType char[41]
    const char *LinkManField_Telephone = NULL;
    Py_ssize_t LinkManField_Telephone_len = 0;
            
    ///通讯地址
    // TThostFtdcAddressType char[101]
    const char *LinkManField_Address = NULL;
    Py_ssize_t LinkManField_Address_len = 0;
            
    ///邮政编码
    // TThostFtdcZipCodeType char[7]
    const char *LinkManField_ZipCode = NULL;
    Py_ssize_t LinkManField_ZipCode_len = 0;
            
    ///优先级
    // TThostFtdcPriorityType int
    int LinkManField_Priority = 0;
        
    ///开户邮政编码
    // TThostFtdcUOAZipCodeType char[11]
    const char *LinkManField_UOAZipCode = NULL;
    Py_ssize_t LinkManField_UOAZipCode_len = 0;
            
    ///全称
    // TThostFtdcInvestorFullNameType char[101]
    const char *LinkManField_PersonFullName = NULL;
    Py_ssize_t LinkManField_PersonFullName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ccy#y#y#y#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ccs#s#s#s#s#is#s#", (char **)kwlist
#endif

        , &LinkManField_BrokerID, &LinkManField_BrokerID_len 
        , &LinkManField_InvestorID, &LinkManField_InvestorID_len 
        , &LinkManField_PersonType 
        , &LinkManField_IdentifiedCardType 
        , &LinkManField_IdentifiedCardNo, &LinkManField_IdentifiedCardNo_len 
        , &LinkManField_PersonName, &LinkManField_PersonName_len 
        , &LinkManField_Telephone, &LinkManField_Telephone_len 
        , &LinkManField_Address, &LinkManField_Address_len 
        , &LinkManField_ZipCode, &LinkManField_ZipCode_len 
        , &LinkManField_Priority 
        , &LinkManField_UOAZipCode, &LinkManField_UOAZipCode_len 
        , &LinkManField_PersonFullName, &LinkManField_PersonFullName_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( LinkManField_BrokerID != NULL ) {
        if(LinkManField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", LinkManField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, LinkManField_BrokerID, LinkManField_BrokerID_len);        
        strncpy(self->data.BrokerID, LinkManField_BrokerID, sizeof(self->data.BrokerID) );
        LinkManField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( LinkManField_InvestorID != NULL ) {
        if(LinkManField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", LinkManField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, LinkManField_InvestorID, LinkManField_InvestorID_len);        
        strncpy(self->data.InvestorID, LinkManField_InvestorID, sizeof(self->data.InvestorID) );
        LinkManField_InvestorID = NULL;
    }
            
    ///联系人类型
    // TThostFtdcPersonTypeType char
    self->data.PersonType = LinkManField_PersonType;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdentifiedCardType = LinkManField_IdentifiedCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( LinkManField_IdentifiedCardNo != NULL ) {
        if(LinkManField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", LinkManField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, LinkManField_IdentifiedCardNo, LinkManField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, LinkManField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        LinkManField_IdentifiedCardNo = NULL;
    }
            
    ///名称
    // TThostFtdcPartyNameType char[81]
    if( LinkManField_PersonName != NULL ) {
        if(LinkManField_PersonName_len > (Py_ssize_t)sizeof(self->data.PersonName)) {
            PyErr_Format(PyExc_ValueError, "PersonName too long: length=%zd (max allowed is %zd)", LinkManField_PersonName_len, (Py_ssize_t)sizeof(self->data.PersonName));
            return -1;
        }
        // memset(self->data.PersonName, 0, sizeof(self->data.PersonName));
        // memcpy(self->data.PersonName, LinkManField_PersonName, LinkManField_PersonName_len);        
        strncpy(self->data.PersonName, LinkManField_PersonName, sizeof(self->data.PersonName) );
        LinkManField_PersonName = NULL;
    }
            
    ///联系电话
    // TThostFtdcTelephoneType char[41]
    if( LinkManField_Telephone != NULL ) {
        if(LinkManField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
            PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", LinkManField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
            return -1;
        }
        // memset(self->data.Telephone, 0, sizeof(self->data.Telephone));
        // memcpy(self->data.Telephone, LinkManField_Telephone, LinkManField_Telephone_len);        
        strncpy(self->data.Telephone, LinkManField_Telephone, sizeof(self->data.Telephone) );
        LinkManField_Telephone = NULL;
    }
            
    ///通讯地址
    // TThostFtdcAddressType char[101]
    if( LinkManField_Address != NULL ) {
        if(LinkManField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
            PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", LinkManField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
            return -1;
        }
        // memset(self->data.Address, 0, sizeof(self->data.Address));
        // memcpy(self->data.Address, LinkManField_Address, LinkManField_Address_len);        
        strncpy(self->data.Address, LinkManField_Address, sizeof(self->data.Address) );
        LinkManField_Address = NULL;
    }
            
    ///邮政编码
    // TThostFtdcZipCodeType char[7]
    if( LinkManField_ZipCode != NULL ) {
        if(LinkManField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
            PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", LinkManField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
            return -1;
        }
        // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
        // memcpy(self->data.ZipCode, LinkManField_ZipCode, LinkManField_ZipCode_len);        
        strncpy(self->data.ZipCode, LinkManField_ZipCode, sizeof(self->data.ZipCode) );
        LinkManField_ZipCode = NULL;
    }
            
    ///优先级
    // TThostFtdcPriorityType int
    self->data.Priority = LinkManField_Priority;
        
    ///开户邮政编码
    // TThostFtdcUOAZipCodeType char[11]
    if( LinkManField_UOAZipCode != NULL ) {
        if(LinkManField_UOAZipCode_len > (Py_ssize_t)sizeof(self->data.UOAZipCode)) {
            PyErr_Format(PyExc_ValueError, "UOAZipCode too long: length=%zd (max allowed is %zd)", LinkManField_UOAZipCode_len, (Py_ssize_t)sizeof(self->data.UOAZipCode));
            return -1;
        }
        // memset(self->data.UOAZipCode, 0, sizeof(self->data.UOAZipCode));
        // memcpy(self->data.UOAZipCode, LinkManField_UOAZipCode, LinkManField_UOAZipCode_len);        
        strncpy(self->data.UOAZipCode, LinkManField_UOAZipCode, sizeof(self->data.UOAZipCode) );
        LinkManField_UOAZipCode = NULL;
    }
            
    ///全称
    // TThostFtdcInvestorFullNameType char[101]
    if( LinkManField_PersonFullName != NULL ) {
        if(LinkManField_PersonFullName_len > (Py_ssize_t)sizeof(self->data.PersonFullName)) {
            PyErr_Format(PyExc_ValueError, "PersonFullName too long: length=%zd (max allowed is %zd)", LinkManField_PersonFullName_len, (Py_ssize_t)sizeof(self->data.PersonFullName));
            return -1;
        }
        // memset(self->data.PersonFullName, 0, sizeof(self->data.PersonFullName));
        // memcpy(self->data.PersonFullName, LinkManField_PersonFullName, LinkManField_PersonFullName_len);        
        strncpy(self->data.PersonFullName, LinkManField_PersonFullName, sizeof(self->data.PersonFullName) );
        LinkManField_PersonFullName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcLinkManField_dealloc(PyCThostFtdcLinkManField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLinkManField_repr(PyCThostFtdcLinkManField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"PersonType", self->data.PersonType 
        ,"IdentifiedCardType", self->data.IdentifiedCardType 
        ,"IdentifiedCardNo", self->data.IdentifiedCardNo//, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo) 
        ,"PersonName", self->data.PersonName//, (Py_ssize_t)sizeof(self->data.PersonName) 
        ,"Telephone", self->data.Telephone//, (Py_ssize_t)sizeof(self->data.Telephone) 
        ,"Address", self->data.Address//, (Py_ssize_t)sizeof(self->data.Address) 
        ,"ZipCode", self->data.ZipCode//, (Py_ssize_t)sizeof(self->data.ZipCode) 
        ,"Priority", self->data.Priority 
        ,"UOAZipCode", self->data.UOAZipCode//, (Py_ssize_t)sizeof(self->data.UOAZipCode) 
        ,"PersonFullName", self->data.PersonFullName//, (Py_ssize_t)sizeof(self->data.PersonFullName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLinkManField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcLinkManField_get_BrokerID(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcLinkManField_set_BrokerID(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcLinkManField_get_InvestorID(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcLinkManField_set_InvestorID(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
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
            
///联系人类型
// TThostFtdcPersonTypeType char
static PyObject *PyCThostFtdcLinkManField_get_PersonType(PyCThostFtdcLinkManField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PersonType), 1);
}

///联系人类型
// TThostFtdcPersonTypeType char
static int PyCThostFtdcLinkManField_set_PersonType(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PersonType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PersonType)) {
        PyErr_SetString(PyExc_ValueError, "PersonType must be equal 1 bytes");
        return -1;
    }
    self->data.PersonType = *buf;
    return 0;
}
            
///证件类型
// TThostFtdcIdCardTypeType char
static PyObject *PyCThostFtdcLinkManField_get_IdentifiedCardType(PyCThostFtdcLinkManField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdentifiedCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcLinkManField_set_IdentifiedCardType(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLinkManField_get_IdentifiedCardNo(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcLinkManField_set_IdentifiedCardNo(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
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
            
///名称
// TThostFtdcPartyNameType char[81]
static PyObject *PyCThostFtdcLinkManField_get_PersonName(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.PersonName, (Py_ssize_t)sizeof(self->data.PersonName));
    return PyBytes_FromString(self->data.PersonName);
}

///名称
// TThostFtdcPartyNameType char[81]
static int PyCThostFtdcLinkManField_set_PersonName(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PersonName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PersonName)) {
        PyErr_SetString(PyExc_ValueError, "PersonName must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.PersonName, 0, sizeof(self->data.PersonName));
    // memcpy(self->data.PersonName, buf, len);
    strncpy(self->data.PersonName, buf, sizeof(self->data.PersonName));
    return 0;
}
            
///联系电话
// TThostFtdcTelephoneType char[41]
static PyObject *PyCThostFtdcLinkManField_get_Telephone(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Telephone, (Py_ssize_t)sizeof(self->data.Telephone));
    return PyBytes_FromString(self->data.Telephone);
}

///联系电话
// TThostFtdcTelephoneType char[41]
static int PyCThostFtdcLinkManField_set_Telephone(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLinkManField_get_Address(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Address, (Py_ssize_t)sizeof(self->data.Address));
    return PyBytes_FromString(self->data.Address);
}

///通讯地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcLinkManField_set_Address(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
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
            
///邮政编码
// TThostFtdcZipCodeType char[7]
static PyObject *PyCThostFtdcLinkManField_get_ZipCode(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ZipCode, (Py_ssize_t)sizeof(self->data.ZipCode));
    return PyBytes_FromString(self->data.ZipCode);
}

///邮政编码
// TThostFtdcZipCodeType char[7]
static int PyCThostFtdcLinkManField_set_ZipCode(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
        PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.ZipCode, 0, sizeof(self->data.ZipCode));
    // memcpy(self->data.ZipCode, buf, len);
    strncpy(self->data.ZipCode, buf, sizeof(self->data.ZipCode));
    return 0;
}
            
///优先级
// TThostFtdcPriorityType int
static PyObject *PyCThostFtdcLinkManField_get_Priority(PyCThostFtdcLinkManField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Priority);
#else
    return PyInt_FromLong(self->data.Priority);
#endif
}

///优先级
// TThostFtdcPriorityType int
static int PyCThostFtdcLinkManField_set_Priority(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Priority value out of range for C int");
        return -1;
    }
    self->data.Priority = (int)buf;
    return 0;
}
        
///开户邮政编码
// TThostFtdcUOAZipCodeType char[11]
static PyObject *PyCThostFtdcLinkManField_get_UOAZipCode(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UOAZipCode, (Py_ssize_t)sizeof(self->data.UOAZipCode));
    return PyBytes_FromString(self->data.UOAZipCode);
}

///开户邮政编码
// TThostFtdcUOAZipCodeType char[11]
static int PyCThostFtdcLinkManField_set_UOAZipCode(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UOAZipCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UOAZipCode)) {
        PyErr_SetString(PyExc_ValueError, "UOAZipCode must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.UOAZipCode, 0, sizeof(self->data.UOAZipCode));
    // memcpy(self->data.UOAZipCode, buf, len);
    strncpy(self->data.UOAZipCode, buf, sizeof(self->data.UOAZipCode));
    return 0;
}
            
///全称
// TThostFtdcInvestorFullNameType char[101]
static PyObject *PyCThostFtdcLinkManField_get_PersonFullName(PyCThostFtdcLinkManField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.PersonFullName, (Py_ssize_t)sizeof(self->data.PersonFullName));
    return PyBytes_FromString(self->data.PersonFullName);
}

///全称
// TThostFtdcInvestorFullNameType char[101]
static int PyCThostFtdcLinkManField_set_PersonFullName(PyCThostFtdcLinkManField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PersonFullName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PersonFullName)) {
        PyErr_SetString(PyExc_ValueError, "PersonFullName must be less than 101 bytes");
        return -1;
    }
    // memset(self->data.PersonFullName, 0, sizeof(self->data.PersonFullName));
    // memcpy(self->data.PersonFullName, buf, len);
    strncpy(self->data.PersonFullName, buf, sizeof(self->data.PersonFullName));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcLinkManField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcLinkManField_get_BrokerID, (setter)PyCThostFtdcLinkManField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcLinkManField_get_InvestorID, (setter)PyCThostFtdcLinkManField_set_InvestorID, (char *)"InvestorID", NULL},
    ///联系人类型 
    {(char *)"PersonType", (getter)PyCThostFtdcLinkManField_get_PersonType, (setter)PyCThostFtdcLinkManField_set_PersonType, (char *)"PersonType", NULL},
    ///证件类型 
    {(char *)"IdentifiedCardType", (getter)PyCThostFtdcLinkManField_get_IdentifiedCardType, (setter)PyCThostFtdcLinkManField_set_IdentifiedCardType, (char *)"IdentifiedCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcLinkManField_get_IdentifiedCardNo, (setter)PyCThostFtdcLinkManField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///名称 
    {(char *)"PersonName", (getter)PyCThostFtdcLinkManField_get_PersonName, (setter)PyCThostFtdcLinkManField_set_PersonName, (char *)"PersonName", NULL},
    ///联系电话 
    {(char *)"Telephone", (getter)PyCThostFtdcLinkManField_get_Telephone, (setter)PyCThostFtdcLinkManField_set_Telephone, (char *)"Telephone", NULL},
    ///通讯地址 
    {(char *)"Address", (getter)PyCThostFtdcLinkManField_get_Address, (setter)PyCThostFtdcLinkManField_set_Address, (char *)"Address", NULL},
    ///邮政编码 
    {(char *)"ZipCode", (getter)PyCThostFtdcLinkManField_get_ZipCode, (setter)PyCThostFtdcLinkManField_set_ZipCode, (char *)"ZipCode", NULL},
    ///优先级 
    {(char *)"Priority", (getter)PyCThostFtdcLinkManField_get_Priority, (setter)PyCThostFtdcLinkManField_set_Priority, (char *)"Priority", NULL},
    ///开户邮政编码 
    {(char *)"UOAZipCode", (getter)PyCThostFtdcLinkManField_get_UOAZipCode, (setter)PyCThostFtdcLinkManField_set_UOAZipCode, (char *)"UOAZipCode", NULL},
    ///全称 
    {(char *)"PersonFullName", (getter)PyCThostFtdcLinkManField_get_PersonFullName, (setter)PyCThostFtdcLinkManField_set_PersonFullName, (char *)"PersonFullName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLinkManFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLinkManField",	/* tp_name */
	sizeof(PyCThostFtdcLinkManField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLinkManField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLinkManField_repr,   /* tp_repr */
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
	"CThostFtdcLinkManField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLinkManField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLinkManField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLinkManField_new,       /* tp_new */
};

int PyCThostFtdcLinkManFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLinkManField  */
	if (PyType_Ready(&PyCThostFtdcLinkManFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLinkManField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLinkManFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLinkManField", (PyObject *)&PyCThostFtdcLinkManFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLinkManField to module");
        Py_DECREF(&PyCThostFtdcLinkManFieldType);
		return -1;
    }

    return 0;
}
