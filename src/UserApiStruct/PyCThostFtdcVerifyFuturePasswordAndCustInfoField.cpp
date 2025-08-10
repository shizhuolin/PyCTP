
#include "PyCThostFtdcVerifyFuturePasswordAndCustInfoField.h"

///验证期货资金密码和客户信息

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self = (PyCThostFtdcVerifyFuturePasswordAndCustInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_init(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "AccountID", "Password", "CurrencyID", "LongCustomerName",  NULL};


    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    const char *VerifyFuturePasswordAndCustInfoField_CustomerName = NULL;
    Py_ssize_t VerifyFuturePasswordAndCustInfoField_CustomerName_len = 0;
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    char VerifyFuturePasswordAndCustInfoField_IdCardType = 0;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    const char *VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo = NULL;
    Py_ssize_t VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len = 0;
            
    ///客户类型
    // TThostFtdcCustTypeType char
    char VerifyFuturePasswordAndCustInfoField_CustType = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *VerifyFuturePasswordAndCustInfoField_AccountID = NULL;
    Py_ssize_t VerifyFuturePasswordAndCustInfoField_AccountID_len = 0;
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    const char *VerifyFuturePasswordAndCustInfoField_Password = NULL;
    Py_ssize_t VerifyFuturePasswordAndCustInfoField_Password_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *VerifyFuturePasswordAndCustInfoField_CurrencyID = NULL;
    Py_ssize_t VerifyFuturePasswordAndCustInfoField_CurrencyID_len = 0;
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    const char *VerifyFuturePasswordAndCustInfoField_LongCustomerName = NULL;
    Py_ssize_t VerifyFuturePasswordAndCustInfoField_LongCustomerName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#cs#s#s#s#", (char **)kwlist
#endif

        , &VerifyFuturePasswordAndCustInfoField_CustomerName, &VerifyFuturePasswordAndCustInfoField_CustomerName_len 
        , &VerifyFuturePasswordAndCustInfoField_IdCardType 
        , &VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, &VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len 
        , &VerifyFuturePasswordAndCustInfoField_CustType 
        , &VerifyFuturePasswordAndCustInfoField_AccountID, &VerifyFuturePasswordAndCustInfoField_AccountID_len 
        , &VerifyFuturePasswordAndCustInfoField_Password, &VerifyFuturePasswordAndCustInfoField_Password_len 
        , &VerifyFuturePasswordAndCustInfoField_CurrencyID, &VerifyFuturePasswordAndCustInfoField_CurrencyID_len 
        , &VerifyFuturePasswordAndCustInfoField_LongCustomerName, &VerifyFuturePasswordAndCustInfoField_LongCustomerName_len 


    )) {
        return -1;
    }


    ///客户姓名
    // TThostFtdcIndividualNameType char[51]
    if( VerifyFuturePasswordAndCustInfoField_CustomerName != NULL ) {
        if(VerifyFuturePasswordAndCustInfoField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
            PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordAndCustInfoField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
            return -1;
        }
        // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
        // memcpy(self->data.CustomerName, VerifyFuturePasswordAndCustInfoField_CustomerName, VerifyFuturePasswordAndCustInfoField_CustomerName_len);        
        strncpy(self->data.CustomerName, VerifyFuturePasswordAndCustInfoField_CustomerName, sizeof(self->data.CustomerName) );
        VerifyFuturePasswordAndCustInfoField_CustomerName = NULL;
    }
            
    ///证件类型
    // TThostFtdcIdCardTypeType char
    self->data.IdCardType = VerifyFuturePasswordAndCustInfoField_IdCardType;
            
    ///证件号码
    // TThostFtdcIdentifiedCardNoType char[51]
    if( VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo != NULL ) {
        if(VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
            PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
            return -1;
        }
        // memset(self->data.IdentifiedCardNo, 0, sizeof(self->data.IdentifiedCardNo));
        // memcpy(self->data.IdentifiedCardNo, VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len);        
        strncpy(self->data.IdentifiedCardNo, VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
        VerifyFuturePasswordAndCustInfoField_IdentifiedCardNo = NULL;
    }
            
    ///客户类型
    // TThostFtdcCustTypeType char
    self->data.CustType = VerifyFuturePasswordAndCustInfoField_CustType;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( VerifyFuturePasswordAndCustInfoField_AccountID != NULL ) {
        if(VerifyFuturePasswordAndCustInfoField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordAndCustInfoField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, VerifyFuturePasswordAndCustInfoField_AccountID, VerifyFuturePasswordAndCustInfoField_AccountID_len);        
        strncpy(self->data.AccountID, VerifyFuturePasswordAndCustInfoField_AccountID, sizeof(self->data.AccountID) );
        VerifyFuturePasswordAndCustInfoField_AccountID = NULL;
    }
            
    ///期货密码
    // TThostFtdcPasswordType char[41]
    if( VerifyFuturePasswordAndCustInfoField_Password != NULL ) {
        if(VerifyFuturePasswordAndCustInfoField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordAndCustInfoField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, VerifyFuturePasswordAndCustInfoField_Password, VerifyFuturePasswordAndCustInfoField_Password_len);        
        strncpy(self->data.Password, VerifyFuturePasswordAndCustInfoField_Password, sizeof(self->data.Password) );
        VerifyFuturePasswordAndCustInfoField_Password = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( VerifyFuturePasswordAndCustInfoField_CurrencyID != NULL ) {
        if(VerifyFuturePasswordAndCustInfoField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordAndCustInfoField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, VerifyFuturePasswordAndCustInfoField_CurrencyID, VerifyFuturePasswordAndCustInfoField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, VerifyFuturePasswordAndCustInfoField_CurrencyID, sizeof(self->data.CurrencyID) );
        VerifyFuturePasswordAndCustInfoField_CurrencyID = NULL;
    }
            
    ///长客户姓名
    // TThostFtdcLongIndividualNameType char[161]
    if( VerifyFuturePasswordAndCustInfoField_LongCustomerName != NULL ) {
        if(VerifyFuturePasswordAndCustInfoField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
            PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", VerifyFuturePasswordAndCustInfoField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
            return -1;
        }
        // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
        // memcpy(self->data.LongCustomerName, VerifyFuturePasswordAndCustInfoField_LongCustomerName, VerifyFuturePasswordAndCustInfoField_LongCustomerName_len);        
        strncpy(self->data.LongCustomerName, VerifyFuturePasswordAndCustInfoField_LongCustomerName, sizeof(self->data.LongCustomerName) );
        VerifyFuturePasswordAndCustInfoField_LongCustomerName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcVerifyFuturePasswordAndCustInfoField_dealloc(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_repr(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

        ,"CustomerName", self->data.CustomerName//, (Py_ssize_t)sizeof(self->data.CustomerName) 
        ,"IdCardType", self->data.IdCardType 
        ,"IdentifiedCardNo", self->data.IdentifiedCardNo//, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo) 
        ,"CustType", self->data.CustType 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"LongCustomerName", self->data.LongCustomerName//, (Py_ssize_t)sizeof(self->data.LongCustomerName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordAndCustInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///客户姓名
// TThostFtdcIndividualNameType char[51]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CustomerName, (Py_ssize_t)sizeof(self->data.CustomerName));
    return PyBytes_FromString(self->data.CustomerName);
}

///客户姓名
// TThostFtdcIndividualNameType char[51]
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
        PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 51 bytes");
        return -1;
    }
    // memset(self->data.CustomerName, 0, sizeof(self->data.CustomerName));
    // memcpy(self->data.CustomerName, buf, len);
    strncpy(self->data.CustomerName, buf, sizeof(self->data.CustomerName));
    return 0;
}
            
///证件类型
// TThostFtdcIdCardTypeType char
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdCardType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

///证件类型
// TThostFtdcIdCardTypeType char
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdCardType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IdCardType)) {
        PyErr_SetString(PyExc_ValueError, "IdCardType must be equal 1 bytes");
        return -1;
    }
    self->data.IdCardType = *buf;
    return 0;
}
            
///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdentifiedCardNo(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IdentifiedCardNo, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
    return PyBytes_FromString(self->data.IdentifiedCardNo);
}

///证件号码
// TThostFtdcIdentifiedCardNoType char[51]
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdentifiedCardNo(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
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
            
///客户类型
// TThostFtdcCustTypeType char
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

///客户类型
// TThostFtdcCustTypeType char
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CustType)) {
        PyErr_SetString(PyExc_ValueError, "CustType must be equal 1 bytes");
        return -1;
    }
    self->data.CustType = *buf;
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_AccountID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_AccountID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///期货密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_Password(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///期货密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_Password(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Password, 0, sizeof(self->data.Password));
    // memcpy(self->data.Password, buf, len);
    strncpy(self->data.Password, buf, sizeof(self->data.Password));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CurrencyID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CurrencyID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            
///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_LongCustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LongCustomerName, (Py_ssize_t)sizeof(self->data.LongCustomerName));
    return PyBytes_FromString(self->data.LongCustomerName);
}

///长客户姓名
// TThostFtdcLongIndividualNameType char[161]
static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_LongCustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
        PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 161 bytes");
        return -1;
    }
    // memset(self->data.LongCustomerName, 0, sizeof(self->data.LongCustomerName));
    // memcpy(self->data.LongCustomerName, buf, len);
    strncpy(self->data.LongCustomerName, buf, sizeof(self->data.LongCustomerName));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcVerifyFuturePasswordAndCustInfoField_getset[] = {
    ///客户姓名 
    {(char *)"CustomerName", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustomerName, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustomerName, (char *)"CustomerName", NULL},
    ///证件类型 
    {(char *)"IdCardType", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdCardType, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdCardType, (char *)"IdCardType", NULL},
    ///证件号码 
    {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdentifiedCardNo, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
    ///客户类型 
    {(char *)"CustType", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustType, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustType, (char *)"CustType", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_AccountID, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_AccountID, (char *)"AccountID", NULL},
    ///期货密码 
    {(char *)"Password", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_Password, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_Password, (char *)"Password", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CurrencyID, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///长客户姓名 
    {(char *)"LongCustomerName", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_LongCustomerName, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcVerifyFuturePasswordAndCustInfoField",	/* tp_name */
	sizeof(PyCThostFtdcVerifyFuturePasswordAndCustInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_repr,   /* tp_repr */
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
	"CThostFtdcVerifyFuturePasswordAndCustInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcVerifyFuturePasswordAndCustInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcVerifyFuturePasswordAndCustInfoField_new,       /* tp_new */
};

int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcVerifyFuturePasswordAndCustInfoField  */
	if (PyType_Ready(&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcVerifyFuturePasswordAndCustInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcVerifyFuturePasswordAndCustInfoField", (PyObject *)&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyFuturePasswordAndCustInfoField to module");
        Py_DECREF(&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType);
		return -1;
    }

    return 0;
}
