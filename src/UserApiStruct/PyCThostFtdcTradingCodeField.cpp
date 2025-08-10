
#include "PyCThostFtdcTradingCodeField.h"

///交易编码

static PyObject *PyCThostFtdcTradingCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingCodeField *self = (PyCThostFtdcTradingCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingCodeField_init(PyCThostFtdcTradingCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "ExchangeID", "ClientID", "IsActive", "ClientIDType", "BranchID", "BizType", "InvestUnitID",  NULL};


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *TradingCodeField_InvestorID = NULL;
    Py_ssize_t TradingCodeField_InvestorID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingCodeField_BrokerID = NULL;
    Py_ssize_t TradingCodeField_BrokerID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *TradingCodeField_ExchangeID = NULL;
    Py_ssize_t TradingCodeField_ExchangeID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *TradingCodeField_ClientID = NULL;
    Py_ssize_t TradingCodeField_ClientID_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int TradingCodeField_IsActive = 0;
        
    ///交易编码类型
    // TThostFtdcClientIDTypeType char
    char TradingCodeField_ClientIDType = 0;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    const char *TradingCodeField_BranchID = NULL;
    Py_ssize_t TradingCodeField_BranchID_len = 0;
            
    ///业务类型
    // TThostFtdcBizTypeType char
    char TradingCodeField_BizType = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *TradingCodeField_InvestUnitID = NULL;
    Py_ssize_t TradingCodeField_InvestUnitID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icy#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ics#cs#", (char **)kwlist
#endif

        , &TradingCodeField_InvestorID, &TradingCodeField_InvestorID_len 
        , &TradingCodeField_BrokerID, &TradingCodeField_BrokerID_len 
        , &TradingCodeField_ExchangeID, &TradingCodeField_ExchangeID_len 
        , &TradingCodeField_ClientID, &TradingCodeField_ClientID_len 
        , &TradingCodeField_IsActive 
        , &TradingCodeField_ClientIDType 
        , &TradingCodeField_BranchID, &TradingCodeField_BranchID_len 
        , &TradingCodeField_BizType 
        , &TradingCodeField_InvestUnitID, &TradingCodeField_InvestUnitID_len 


    )) {
        return -1;
    }


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( TradingCodeField_InvestorID != NULL ) {
        if(TradingCodeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", TradingCodeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, TradingCodeField_InvestorID, TradingCodeField_InvestorID_len);        
        strncpy(self->data.InvestorID, TradingCodeField_InvestorID, sizeof(self->data.InvestorID) );
        TradingCodeField_InvestorID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingCodeField_BrokerID != NULL ) {
        if(TradingCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingCodeField_BrokerID, TradingCodeField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingCodeField_BrokerID, sizeof(self->data.BrokerID) );
        TradingCodeField_BrokerID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( TradingCodeField_ExchangeID != NULL ) {
        if(TradingCodeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", TradingCodeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, TradingCodeField_ExchangeID, TradingCodeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, TradingCodeField_ExchangeID, sizeof(self->data.ExchangeID) );
        TradingCodeField_ExchangeID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( TradingCodeField_ClientID != NULL ) {
        if(TradingCodeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", TradingCodeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, TradingCodeField_ClientID, TradingCodeField_ClientID_len);        
        strncpy(self->data.ClientID, TradingCodeField_ClientID, sizeof(self->data.ClientID) );
        TradingCodeField_ClientID = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = TradingCodeField_IsActive;
        
    ///交易编码类型
    // TThostFtdcClientIDTypeType char
    self->data.ClientIDType = TradingCodeField_ClientIDType;
            
    ///营业部编号
    // TThostFtdcBranchIDType char[9]
    if( TradingCodeField_BranchID != NULL ) {
        if(TradingCodeField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", TradingCodeField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
            return -1;
        }
        // memset(self->data.BranchID, 0, sizeof(self->data.BranchID));
        // memcpy(self->data.BranchID, TradingCodeField_BranchID, TradingCodeField_BranchID_len);        
        strncpy(self->data.BranchID, TradingCodeField_BranchID, sizeof(self->data.BranchID) );
        TradingCodeField_BranchID = NULL;
    }
            
    ///业务类型
    // TThostFtdcBizTypeType char
    self->data.BizType = TradingCodeField_BizType;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( TradingCodeField_InvestUnitID != NULL ) {
        if(TradingCodeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", TradingCodeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, TradingCodeField_InvestUnitID, TradingCodeField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, TradingCodeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        TradingCodeField_InvestUnitID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradingCodeField_dealloc(PyCThostFtdcTradingCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingCodeField_repr(PyCThostFtdcTradingCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:c,s:s}"
#endif

        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"IsActive", self->data.IsActive 
        ,"ClientIDType", self->data.ClientIDType 
        ,"BranchID", self->data.BranchID//, (Py_ssize_t)sizeof(self->data.BranchID) 
        ,"BizType", self->data.BizType 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcTradingCodeField_get_InvestorID(PyCThostFtdcTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcTradingCodeField_set_InvestorID(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingCodeField_get_BrokerID(PyCThostFtdcTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingCodeField_set_BrokerID(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcTradingCodeField_get_ExchangeID(PyCThostFtdcTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcTradingCodeField_set_ExchangeID(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
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
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcTradingCodeField_get_ClientID(PyCThostFtdcTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcTradingCodeField_set_ClientID(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
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
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcTradingCodeField_get_IsActive(PyCThostFtdcTradingCodeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcTradingCodeField_set_IsActive(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
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
        
///交易编码类型
// TThostFtdcClientIDTypeType char
static PyObject *PyCThostFtdcTradingCodeField_get_ClientIDType(PyCThostFtdcTradingCodeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ClientIDType), 1);
}

///交易编码类型
// TThostFtdcClientIDTypeType char
static int PyCThostFtdcTradingCodeField_set_ClientIDType(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientIDType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientIDType)) {
        PyErr_SetString(PyExc_ValueError, "ClientIDType must be equal 1 bytes");
        return -1;
    }
    self->data.ClientIDType = *buf;
    return 0;
}
            
///营业部编号
// TThostFtdcBranchIDType char[9]
static PyObject *PyCThostFtdcTradingCodeField_get_BranchID(PyCThostFtdcTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BranchID, (Py_ssize_t)sizeof(self->data.BranchID));
    return PyBytes_FromString(self->data.BranchID);
}

///营业部编号
// TThostFtdcBranchIDType char[9]
static int PyCThostFtdcTradingCodeField_set_BranchID(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
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
            
///业务类型
// TThostFtdcBizTypeType char
static PyObject *PyCThostFtdcTradingCodeField_get_BizType(PyCThostFtdcTradingCodeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

///业务类型
// TThostFtdcBizTypeType char
static int PyCThostFtdcTradingCodeField_set_BizType(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    self->data.BizType = *buf;
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcTradingCodeField_get_InvestUnitID(PyCThostFtdcTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcTradingCodeField_set_InvestUnitID(PyCThostFtdcTradingCodeField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTradingCodeField_getset[] = {
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcTradingCodeField_get_InvestorID, (setter)PyCThostFtdcTradingCodeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingCodeField_get_BrokerID, (setter)PyCThostFtdcTradingCodeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcTradingCodeField_get_ExchangeID, (setter)PyCThostFtdcTradingCodeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcTradingCodeField_get_ClientID, (setter)PyCThostFtdcTradingCodeField_set_ClientID, (char *)"ClientID", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcTradingCodeField_get_IsActive, (setter)PyCThostFtdcTradingCodeField_set_IsActive, (char *)"IsActive", NULL},
    ///交易编码类型 
    {(char *)"ClientIDType", (getter)PyCThostFtdcTradingCodeField_get_ClientIDType, (setter)PyCThostFtdcTradingCodeField_set_ClientIDType, (char *)"ClientIDType", NULL},
    ///营业部编号 
    {(char *)"BranchID", (getter)PyCThostFtdcTradingCodeField_get_BranchID, (setter)PyCThostFtdcTradingCodeField_set_BranchID, (char *)"BranchID", NULL},
    ///业务类型 
    {(char *)"BizType", (getter)PyCThostFtdcTradingCodeField_get_BizType, (setter)PyCThostFtdcTradingCodeField_set_BizType, (char *)"BizType", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcTradingCodeField_get_InvestUnitID, (setter)PyCThostFtdcTradingCodeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingCodeField",	/* tp_name */
	sizeof(PyCThostFtdcTradingCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingCodeField_repr,   /* tp_repr */
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
	"CThostFtdcTradingCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingCodeField_new,       /* tp_new */
};

int PyCThostFtdcTradingCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingCodeField  */
	if (PyType_Ready(&PyCThostFtdcTradingCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingCodeField", (PyObject *)&PyCThostFtdcTradingCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingCodeField to module");
        Py_DECREF(&PyCThostFtdcTradingCodeFieldType);
		return -1;
    }

    return 0;
}
