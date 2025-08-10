
#include "PyCThostFtdcInvestUnitField.h"

///投资单元

static PyObject *PyCThostFtdcInvestUnitField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestUnitField *self = (PyCThostFtdcInvestUnitField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestUnitField_init(PyCThostFtdcInvestUnitField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InvestUnitID", "InvestorUnitName", "InvestorGroupID", "CommModelID", "MarginModelID", "AccountID", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestUnitField_BrokerID = NULL;
    Py_ssize_t InvestUnitField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestUnitField_InvestorID = NULL;
    Py_ssize_t InvestUnitField_InvestorID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InvestUnitField_InvestUnitID = NULL;
    Py_ssize_t InvestUnitField_InvestUnitID_len = 0;
            
    ///投资者单元名称
    // TThostFtdcPartyNameType char[81]
    const char *InvestUnitField_InvestorUnitName = NULL;
    Py_ssize_t InvestUnitField_InvestorUnitName_len = 0;
            
    ///投资者分组代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestUnitField_InvestorGroupID = NULL;
    Py_ssize_t InvestUnitField_InvestorGroupID_len = 0;
            
    ///手续费率模板代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestUnitField_CommModelID = NULL;
    Py_ssize_t InvestUnitField_CommModelID_len = 0;
            
    ///保证金率模板代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestUnitField_MarginModelID = NULL;
    Py_ssize_t InvestUnitField_MarginModelID_len = 0;
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    const char *InvestUnitField_AccountID = NULL;
    Py_ssize_t InvestUnitField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *InvestUnitField_CurrencyID = NULL;
    Py_ssize_t InvestUnitField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &InvestUnitField_BrokerID, &InvestUnitField_BrokerID_len 
        , &InvestUnitField_InvestorID, &InvestUnitField_InvestorID_len 
        , &InvestUnitField_InvestUnitID, &InvestUnitField_InvestUnitID_len 
        , &InvestUnitField_InvestorUnitName, &InvestUnitField_InvestorUnitName_len 
        , &InvestUnitField_InvestorGroupID, &InvestUnitField_InvestorGroupID_len 
        , &InvestUnitField_CommModelID, &InvestUnitField_CommModelID_len 
        , &InvestUnitField_MarginModelID, &InvestUnitField_MarginModelID_len 
        , &InvestUnitField_AccountID, &InvestUnitField_AccountID_len 
        , &InvestUnitField_CurrencyID, &InvestUnitField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestUnitField_BrokerID != NULL ) {
        if(InvestUnitField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestUnitField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestUnitField_BrokerID, InvestUnitField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestUnitField_BrokerID, sizeof(self->data.BrokerID) );
        InvestUnitField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestUnitField_InvestorID != NULL ) {
        if(InvestUnitField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestUnitField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestUnitField_InvestorID, InvestUnitField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestUnitField_InvestorID, sizeof(self->data.InvestorID) );
        InvestUnitField_InvestorID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InvestUnitField_InvestUnitID != NULL ) {
        if(InvestUnitField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InvestUnitField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InvestUnitField_InvestUnitID, InvestUnitField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InvestUnitField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InvestUnitField_InvestUnitID = NULL;
    }
            
    ///投资者单元名称
    // TThostFtdcPartyNameType char[81]
    if( InvestUnitField_InvestorUnitName != NULL ) {
        if(InvestUnitField_InvestorUnitName_len > (Py_ssize_t)sizeof(self->data.InvestorUnitName)) {
            PyErr_Format(PyExc_ValueError, "InvestorUnitName too long: length=%zd (max allowed is %zd)", InvestUnitField_InvestorUnitName_len, (Py_ssize_t)sizeof(self->data.InvestorUnitName));
            return -1;
        }
        // memset(self->data.InvestorUnitName, 0, sizeof(self->data.InvestorUnitName));
        // memcpy(self->data.InvestorUnitName, InvestUnitField_InvestorUnitName, InvestUnitField_InvestorUnitName_len);        
        strncpy(self->data.InvestorUnitName, InvestUnitField_InvestorUnitName, sizeof(self->data.InvestorUnitName) );
        InvestUnitField_InvestorUnitName = NULL;
    }
            
    ///投资者分组代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestUnitField_InvestorGroupID != NULL ) {
        if(InvestUnitField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
            PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", InvestUnitField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
            return -1;
        }
        // memset(self->data.InvestorGroupID, 0, sizeof(self->data.InvestorGroupID));
        // memcpy(self->data.InvestorGroupID, InvestUnitField_InvestorGroupID, InvestUnitField_InvestorGroupID_len);        
        strncpy(self->data.InvestorGroupID, InvestUnitField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
        InvestUnitField_InvestorGroupID = NULL;
    }
            
    ///手续费率模板代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestUnitField_CommModelID != NULL ) {
        if(InvestUnitField_CommModelID_len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
            PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is %zd)", InvestUnitField_CommModelID_len, (Py_ssize_t)sizeof(self->data.CommModelID));
            return -1;
        }
        // memset(self->data.CommModelID, 0, sizeof(self->data.CommModelID));
        // memcpy(self->data.CommModelID, InvestUnitField_CommModelID, InvestUnitField_CommModelID_len);        
        strncpy(self->data.CommModelID, InvestUnitField_CommModelID, sizeof(self->data.CommModelID) );
        InvestUnitField_CommModelID = NULL;
    }
            
    ///保证金率模板代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestUnitField_MarginModelID != NULL ) {
        if(InvestUnitField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", InvestUnitField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
            return -1;
        }
        // memset(self->data.MarginModelID, 0, sizeof(self->data.MarginModelID));
        // memcpy(self->data.MarginModelID, InvestUnitField_MarginModelID, InvestUnitField_MarginModelID_len);        
        strncpy(self->data.MarginModelID, InvestUnitField_MarginModelID, sizeof(self->data.MarginModelID) );
        InvestUnitField_MarginModelID = NULL;
    }
            
    ///资金账号
    // TThostFtdcAccountIDType char[13]
    if( InvestUnitField_AccountID != NULL ) {
        if(InvestUnitField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", InvestUnitField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, InvestUnitField_AccountID, InvestUnitField_AccountID_len);        
        strncpy(self->data.AccountID, InvestUnitField_AccountID, sizeof(self->data.AccountID) );
        InvestUnitField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( InvestUnitField_CurrencyID != NULL ) {
        if(InvestUnitField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", InvestUnitField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, InvestUnitField_CurrencyID, InvestUnitField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, InvestUnitField_CurrencyID, sizeof(self->data.CurrencyID) );
        InvestUnitField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInvestUnitField_dealloc(PyCThostFtdcInvestUnitField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestUnitField_repr(PyCThostFtdcInvestUnitField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InvestorUnitName", self->data.InvestorUnitName//, (Py_ssize_t)sizeof(self->data.InvestorUnitName) 
        ,"InvestorGroupID", self->data.InvestorGroupID//, (Py_ssize_t)sizeof(self->data.InvestorGroupID) 
        ,"CommModelID", self->data.CommModelID//, (Py_ssize_t)sizeof(self->data.CommModelID) 
        ,"MarginModelID", self->data.MarginModelID//, (Py_ssize_t)sizeof(self->data.MarginModelID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestUnitField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestUnitField_get_BrokerID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestUnitField_set_BrokerID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestUnitField_get_InvestorID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestUnitField_set_InvestorID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInvestUnitField_get_InvestUnitID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInvestUnitField_set_InvestUnitID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            
///投资者单元名称
// TThostFtdcPartyNameType char[81]
static PyObject *PyCThostFtdcInvestUnitField_get_InvestorUnitName(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorUnitName, (Py_ssize_t)sizeof(self->data.InvestorUnitName));
    return PyBytes_FromString(self->data.InvestorUnitName);
}

///投资者单元名称
// TThostFtdcPartyNameType char[81]
static int PyCThostFtdcInvestUnitField_set_InvestorUnitName(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorUnitName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorUnitName)) {
        PyErr_SetString(PyExc_ValueError, "InvestorUnitName must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InvestorUnitName, 0, sizeof(self->data.InvestorUnitName));
    // memcpy(self->data.InvestorUnitName, buf, len);
    strncpy(self->data.InvestorUnitName, buf, sizeof(self->data.InvestorUnitName));
    return 0;
}
            
///投资者分组代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInvestUnitField_get_InvestorGroupID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorGroupID, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
    return PyBytes_FromString(self->data.InvestorGroupID);
}

///投资者分组代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestUnitField_set_InvestorGroupID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
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
            
///手续费率模板代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInvestUnitField_get_CommModelID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommModelID, (Py_ssize_t)sizeof(self->data.CommModelID));
    return PyBytes_FromString(self->data.CommModelID);
}

///手续费率模板代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestUnitField_set_CommModelID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInvestUnitField_get_MarginModelID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MarginModelID, (Py_ssize_t)sizeof(self->data.MarginModelID));
    return PyBytes_FromString(self->data.MarginModelID);
}

///保证金率模板代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestUnitField_set_MarginModelID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
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
            
///资金账号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcInvestUnitField_get_AccountID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcInvestUnitField_set_AccountID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
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
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcInvestUnitField_get_CurrencyID(PyCThostFtdcInvestUnitField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcInvestUnitField_set_CurrencyID(PyCThostFtdcInvestUnitField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInvestUnitField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestUnitField_get_BrokerID, (setter)PyCThostFtdcInvestUnitField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestUnitField_get_InvestorID, (setter)PyCThostFtdcInvestUnitField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestUnitField_get_InvestUnitID, (setter)PyCThostFtdcInvestUnitField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///投资者单元名称 
    {(char *)"InvestorUnitName", (getter)PyCThostFtdcInvestUnitField_get_InvestorUnitName, (setter)PyCThostFtdcInvestUnitField_set_InvestorUnitName, (char *)"InvestorUnitName", NULL},
    ///投资者分组代码 
    {(char *)"InvestorGroupID", (getter)PyCThostFtdcInvestUnitField_get_InvestorGroupID, (setter)PyCThostFtdcInvestUnitField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
    ///手续费率模板代码 
    {(char *)"CommModelID", (getter)PyCThostFtdcInvestUnitField_get_CommModelID, (setter)PyCThostFtdcInvestUnitField_set_CommModelID, (char *)"CommModelID", NULL},
    ///保证金率模板代码 
    {(char *)"MarginModelID", (getter)PyCThostFtdcInvestUnitField_get_MarginModelID, (setter)PyCThostFtdcInvestUnitField_set_MarginModelID, (char *)"MarginModelID", NULL},
    ///资金账号 
    {(char *)"AccountID", (getter)PyCThostFtdcInvestUnitField_get_AccountID, (setter)PyCThostFtdcInvestUnitField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcInvestUnitField_get_CurrencyID, (setter)PyCThostFtdcInvestUnitField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestUnitFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestUnitField",	/* tp_name */
	sizeof(PyCThostFtdcInvestUnitField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestUnitField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestUnitField_repr,   /* tp_repr */
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
	"CThostFtdcInvestUnitField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestUnitField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestUnitField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestUnitField_new,       /* tp_new */
};

int PyCThostFtdcInvestUnitFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestUnitField  */
	if (PyType_Ready(&PyCThostFtdcInvestUnitFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestUnitField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestUnitFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestUnitField", (PyObject *)&PyCThostFtdcInvestUnitFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestUnitField to module");
        Py_DECREF(&PyCThostFtdcInvestUnitFieldType);
		return -1;
    }

    return 0;
}
