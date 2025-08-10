
#include "PyCThostFtdcTransferQryBankRspField.h"

///查询银行资金请求响应

static PyObject *PyCThostFtdcTransferQryBankRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferQryBankRspField *self = (PyCThostFtdcTransferQryBankRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferQryBankRspField_init(PyCThostFtdcTransferQryBankRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RetCode", "RetInfo", "FutureAccount", "TradeAmt", "UseAmt", "FetchAmt", "CurrencyCode",  NULL};


    ///响应代码
    // TThostFtdcRetCodeType char[5]
    const char *TransferQryBankRspField_RetCode = NULL;
    Py_ssize_t TransferQryBankRspField_RetCode_len = 0;
            
    ///响应信息
    // TThostFtdcRetInfoType char[129]
    const char *TransferQryBankRspField_RetInfo = NULL;
    Py_ssize_t TransferQryBankRspField_RetInfo_len = 0;
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    const char *TransferQryBankRspField_FutureAccount = NULL;
    Py_ssize_t TransferQryBankRspField_FutureAccount_len = 0;
            
    ///银行余额
    // TThostFtdcMoneyType double
    double TransferQryBankRspField_TradeAmt = 0.0;
        
    ///银行可用余额
    // TThostFtdcMoneyType double
    double TransferQryBankRspField_UseAmt = 0.0;
        
    ///银行可取余额
    // TThostFtdcMoneyType double
    double TransferQryBankRspField_FetchAmt = 0.0;
        
    ///币种
    // TThostFtdcCurrencyCodeType char[4]
    const char *TransferQryBankRspField_CurrencyCode = NULL;
    Py_ssize_t TransferQryBankRspField_CurrencyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ddds#", (char **)kwlist
#endif

        , &TransferQryBankRspField_RetCode, &TransferQryBankRspField_RetCode_len 
        , &TransferQryBankRspField_RetInfo, &TransferQryBankRspField_RetInfo_len 
        , &TransferQryBankRspField_FutureAccount, &TransferQryBankRspField_FutureAccount_len 
        , &TransferQryBankRspField_TradeAmt 
        , &TransferQryBankRspField_UseAmt 
        , &TransferQryBankRspField_FetchAmt 
        , &TransferQryBankRspField_CurrencyCode, &TransferQryBankRspField_CurrencyCode_len 


    )) {
        return -1;
    }


    ///响应代码
    // TThostFtdcRetCodeType char[5]
    if( TransferQryBankRspField_RetCode != NULL ) {
        if(TransferQryBankRspField_RetCode_len > (Py_ssize_t)sizeof(self->data.RetCode)) {
            PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is %zd)", TransferQryBankRspField_RetCode_len, (Py_ssize_t)sizeof(self->data.RetCode));
            return -1;
        }
        // memset(self->data.RetCode, 0, sizeof(self->data.RetCode));
        // memcpy(self->data.RetCode, TransferQryBankRspField_RetCode, TransferQryBankRspField_RetCode_len);        
        strncpy(self->data.RetCode, TransferQryBankRspField_RetCode, sizeof(self->data.RetCode) );
        TransferQryBankRspField_RetCode = NULL;
    }
            
    ///响应信息
    // TThostFtdcRetInfoType char[129]
    if( TransferQryBankRspField_RetInfo != NULL ) {
        if(TransferQryBankRspField_RetInfo_len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
            PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is %zd)", TransferQryBankRspField_RetInfo_len, (Py_ssize_t)sizeof(self->data.RetInfo));
            return -1;
        }
        // memset(self->data.RetInfo, 0, sizeof(self->data.RetInfo));
        // memcpy(self->data.RetInfo, TransferQryBankRspField_RetInfo, TransferQryBankRspField_RetInfo_len);        
        strncpy(self->data.RetInfo, TransferQryBankRspField_RetInfo, sizeof(self->data.RetInfo) );
        TransferQryBankRspField_RetInfo = NULL;
    }
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    if( TransferQryBankRspField_FutureAccount != NULL ) {
        if(TransferQryBankRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferQryBankRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferQryBankRspField_FutureAccount, TransferQryBankRspField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferQryBankRspField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferQryBankRspField_FutureAccount = NULL;
    }
            
    ///银行余额
    // TThostFtdcMoneyType double
    self->data.TradeAmt = TransferQryBankRspField_TradeAmt;
        
    ///银行可用余额
    // TThostFtdcMoneyType double
    self->data.UseAmt = TransferQryBankRspField_UseAmt;
        
    ///银行可取余额
    // TThostFtdcMoneyType double
    self->data.FetchAmt = TransferQryBankRspField_FetchAmt;
        
    ///币种
    // TThostFtdcCurrencyCodeType char[4]
    if( TransferQryBankRspField_CurrencyCode != NULL ) {
        if(TransferQryBankRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", TransferQryBankRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
            return -1;
        }
        // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
        // memcpy(self->data.CurrencyCode, TransferQryBankRspField_CurrencyCode, TransferQryBankRspField_CurrencyCode_len);        
        strncpy(self->data.CurrencyCode, TransferQryBankRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
        TransferQryBankRspField_CurrencyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferQryBankRspField_dealloc(PyCThostFtdcTransferQryBankRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_repr(PyCThostFtdcTransferQryBankRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:d,s:s}"
#endif

        ,"RetCode", self->data.RetCode//, (Py_ssize_t)sizeof(self->data.RetCode) 
        ,"RetInfo", self->data.RetInfo//, (Py_ssize_t)sizeof(self->data.RetInfo) 
        ,"FutureAccount", self->data.FutureAccount//, (Py_ssize_t)sizeof(self->data.FutureAccount) 
        ,"TradeAmt", self->data.TradeAmt 
        ,"UseAmt", self->data.UseAmt 
        ,"FetchAmt", self->data.FetchAmt 
        ,"CurrencyCode", self->data.CurrencyCode//, (Py_ssize_t)sizeof(self->data.CurrencyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryBankRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///响应代码
// TThostFtdcRetCodeType char[5]
static PyObject *PyCThostFtdcTransferQryBankRspField_get_RetCode(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RetCode, (Py_ssize_t)sizeof(self->data.RetCode));
    return PyBytes_FromString(self->data.RetCode);
}

///响应代码
// TThostFtdcRetCodeType char[5]
static int PyCThostFtdcTransferQryBankRspField_set_RetCode(PyCThostFtdcTransferQryBankRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RetCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.RetCode)) {
        PyErr_SetString(PyExc_ValueError, "RetCode must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.RetCode, 0, sizeof(self->data.RetCode));
    // memcpy(self->data.RetCode, buf, len);
    strncpy(self->data.RetCode, buf, sizeof(self->data.RetCode));
    return 0;
}
            
///响应信息
// TThostFtdcRetInfoType char[129]
static PyObject *PyCThostFtdcTransferQryBankRspField_get_RetInfo(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RetInfo, (Py_ssize_t)sizeof(self->data.RetInfo));
    return PyBytes_FromString(self->data.RetInfo);
}

///响应信息
// TThostFtdcRetInfoType char[129]
static int PyCThostFtdcTransferQryBankRspField_set_RetInfo(PyCThostFtdcTransferQryBankRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RetInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
        PyErr_SetString(PyExc_ValueError, "RetInfo must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.RetInfo, 0, sizeof(self->data.RetInfo));
    // memcpy(self->data.RetInfo, buf, len);
    strncpy(self->data.RetInfo, buf, sizeof(self->data.RetInfo));
    return 0;
}
            
///资金账户
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcTransferQryBankRspField_get_FutureAccount(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferQryBankRspField_set_FutureAccount(PyCThostFtdcTransferQryBankRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
    // memcpy(self->data.FutureAccount, buf, len);
    strncpy(self->data.FutureAccount, buf, sizeof(self->data.FutureAccount));
    return 0;
}
            
///银行余额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferQryBankRspField_get_TradeAmt(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmt);
}

///银行余额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferQryBankRspField_set_TradeAmt(PyCThostFtdcTransferQryBankRspField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeAmt Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TradeAmt = buf;
    return 0;
}
        
///银行可用余额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferQryBankRspField_get_UseAmt(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UseAmt);
}

///银行可用余额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferQryBankRspField_set_UseAmt(PyCThostFtdcTransferQryBankRspField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseAmt Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseAmt = buf;
    return 0;
}
        
///银行可取余额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferQryBankRspField_get_FetchAmt(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FetchAmt);
}

///银行可取余额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferQryBankRspField_set_FetchAmt(PyCThostFtdcTransferQryBankRspField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FetchAmt Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FetchAmt = buf;
    return 0;
}
        
///币种
// TThostFtdcCurrencyCodeType char[4]
static PyObject *PyCThostFtdcTransferQryBankRspField_get_CurrencyCode(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyCode, (Py_ssize_t)sizeof(self->data.CurrencyCode));
    return PyBytes_FromString(self->data.CurrencyCode);
}

///币种
// TThostFtdcCurrencyCodeType char[4]
static int PyCThostFtdcTransferQryBankRspField_set_CurrencyCode(PyCThostFtdcTransferQryBankRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
    // memcpy(self->data.CurrencyCode, buf, len);
    strncpy(self->data.CurrencyCode, buf, sizeof(self->data.CurrencyCode));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTransferQryBankRspField_getset[] = {
    ///响应代码 
    {(char *)"RetCode", (getter)PyCThostFtdcTransferQryBankRspField_get_RetCode, (setter)PyCThostFtdcTransferQryBankRspField_set_RetCode, (char *)"RetCode", NULL},
    ///响应信息 
    {(char *)"RetInfo", (getter)PyCThostFtdcTransferQryBankRspField_get_RetInfo, (setter)PyCThostFtdcTransferQryBankRspField_set_RetInfo, (char *)"RetInfo", NULL},
    ///资金账户 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferQryBankRspField_get_FutureAccount, (setter)PyCThostFtdcTransferQryBankRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
    ///银行余额 
    {(char *)"TradeAmt", (getter)PyCThostFtdcTransferQryBankRspField_get_TradeAmt, (setter)PyCThostFtdcTransferQryBankRspField_set_TradeAmt, (char *)"TradeAmt", NULL},
    ///银行可用余额 
    {(char *)"UseAmt", (getter)PyCThostFtdcTransferQryBankRspField_get_UseAmt, (setter)PyCThostFtdcTransferQryBankRspField_set_UseAmt, (char *)"UseAmt", NULL},
    ///银行可取余额 
    {(char *)"FetchAmt", (getter)PyCThostFtdcTransferQryBankRspField_get_FetchAmt, (setter)PyCThostFtdcTransferQryBankRspField_set_FetchAmt, (char *)"FetchAmt", NULL},
    ///币种 
    {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferQryBankRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferQryBankRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferQryBankRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferQryBankRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferQryBankRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferQryBankRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferQryBankRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferQryBankRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferQryBankRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferQryBankRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferQryBankRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferQryBankRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferQryBankRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferQryBankRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferQryBankRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferQryBankRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferQryBankRspField", (PyObject *)&PyCThostFtdcTransferQryBankRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryBankRspField to module");
        Py_DECREF(&PyCThostFtdcTransferQryBankRspFieldType);
		return -1;
    }

    return 0;
}
