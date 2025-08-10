
#include "PyCThostFtdcTransferFutureToBankRspField.h"

///期货资金转银行请求响应

static PyObject *PyCThostFtdcTransferFutureToBankRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferFutureToBankRspField *self = (PyCThostFtdcTransferFutureToBankRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferFutureToBankRspField_init(PyCThostFtdcTransferFutureToBankRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RetCode", "RetInfo", "FutureAccount", "TradeAmt", "CustFee", "CurrencyCode",  NULL};


    ///响应代码
    // TThostFtdcRetCodeType char[5]
    const char *TransferFutureToBankRspField_RetCode = NULL;
    Py_ssize_t TransferFutureToBankRspField_RetCode_len = 0;
            
    ///响应信息
    // TThostFtdcRetInfoType char[129]
    const char *TransferFutureToBankRspField_RetInfo = NULL;
    Py_ssize_t TransferFutureToBankRspField_RetInfo_len = 0;
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    const char *TransferFutureToBankRspField_FutureAccount = NULL;
    Py_ssize_t TransferFutureToBankRspField_FutureAccount_len = 0;
            
    ///转帐金额
    // TThostFtdcMoneyType double
    double TransferFutureToBankRspField_TradeAmt = 0.0;
        
    ///应收客户手续费
    // TThostFtdcMoneyType double
    double TransferFutureToBankRspField_CustFee = 0.0;
        
    ///币种
    // TThostFtdcCurrencyCodeType char[4]
    const char *TransferFutureToBankRspField_CurrencyCode = NULL;
    Py_ssize_t TransferFutureToBankRspField_CurrencyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dds#", (char **)kwlist
#endif

        , &TransferFutureToBankRspField_RetCode, &TransferFutureToBankRspField_RetCode_len 
        , &TransferFutureToBankRspField_RetInfo, &TransferFutureToBankRspField_RetInfo_len 
        , &TransferFutureToBankRspField_FutureAccount, &TransferFutureToBankRspField_FutureAccount_len 
        , &TransferFutureToBankRspField_TradeAmt 
        , &TransferFutureToBankRspField_CustFee 
        , &TransferFutureToBankRspField_CurrencyCode, &TransferFutureToBankRspField_CurrencyCode_len 


    )) {
        return -1;
    }


    ///响应代码
    // TThostFtdcRetCodeType char[5]
    if( TransferFutureToBankRspField_RetCode != NULL ) {
        if(TransferFutureToBankRspField_RetCode_len > (Py_ssize_t)sizeof(self->data.RetCode)) {
            PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is %zd)", TransferFutureToBankRspField_RetCode_len, (Py_ssize_t)sizeof(self->data.RetCode));
            return -1;
        }
        // memset(self->data.RetCode, 0, sizeof(self->data.RetCode));
        // memcpy(self->data.RetCode, TransferFutureToBankRspField_RetCode, TransferFutureToBankRspField_RetCode_len);        
        strncpy(self->data.RetCode, TransferFutureToBankRspField_RetCode, sizeof(self->data.RetCode) );
        TransferFutureToBankRspField_RetCode = NULL;
    }
            
    ///响应信息
    // TThostFtdcRetInfoType char[129]
    if( TransferFutureToBankRspField_RetInfo != NULL ) {
        if(TransferFutureToBankRspField_RetInfo_len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
            PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is %zd)", TransferFutureToBankRspField_RetInfo_len, (Py_ssize_t)sizeof(self->data.RetInfo));
            return -1;
        }
        // memset(self->data.RetInfo, 0, sizeof(self->data.RetInfo));
        // memcpy(self->data.RetInfo, TransferFutureToBankRspField_RetInfo, TransferFutureToBankRspField_RetInfo_len);        
        strncpy(self->data.RetInfo, TransferFutureToBankRspField_RetInfo, sizeof(self->data.RetInfo) );
        TransferFutureToBankRspField_RetInfo = NULL;
    }
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    if( TransferFutureToBankRspField_FutureAccount != NULL ) {
        if(TransferFutureToBankRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferFutureToBankRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferFutureToBankRspField_FutureAccount, TransferFutureToBankRspField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferFutureToBankRspField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferFutureToBankRspField_FutureAccount = NULL;
    }
            
    ///转帐金额
    // TThostFtdcMoneyType double
    self->data.TradeAmt = TransferFutureToBankRspField_TradeAmt;
        
    ///应收客户手续费
    // TThostFtdcMoneyType double
    self->data.CustFee = TransferFutureToBankRspField_CustFee;
        
    ///币种
    // TThostFtdcCurrencyCodeType char[4]
    if( TransferFutureToBankRspField_CurrencyCode != NULL ) {
        if(TransferFutureToBankRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", TransferFutureToBankRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
            return -1;
        }
        // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
        // memcpy(self->data.CurrencyCode, TransferFutureToBankRspField_CurrencyCode, TransferFutureToBankRspField_CurrencyCode_len);        
        strncpy(self->data.CurrencyCode, TransferFutureToBankRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
        TransferFutureToBankRspField_CurrencyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferFutureToBankRspField_dealloc(PyCThostFtdcTransferFutureToBankRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_repr(PyCThostFtdcTransferFutureToBankRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:s}"
#endif

        ,"RetCode", self->data.RetCode//, (Py_ssize_t)sizeof(self->data.RetCode) 
        ,"RetInfo", self->data.RetInfo//, (Py_ssize_t)sizeof(self->data.RetInfo) 
        ,"FutureAccount", self->data.FutureAccount//, (Py_ssize_t)sizeof(self->data.FutureAccount) 
        ,"TradeAmt", self->data.TradeAmt 
        ,"CustFee", self->data.CustFee 
        ,"CurrencyCode", self->data.CurrencyCode//, (Py_ssize_t)sizeof(self->data.CurrencyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferFutureToBankRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///响应代码
// TThostFtdcRetCodeType char[5]
static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_RetCode(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RetCode, (Py_ssize_t)sizeof(self->data.RetCode));
    return PyBytes_FromString(self->data.RetCode);
}

///响应代码
// TThostFtdcRetCodeType char[5]
static int PyCThostFtdcTransferFutureToBankRspField_set_RetCode(PyCThostFtdcTransferFutureToBankRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_RetInfo(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RetInfo, (Py_ssize_t)sizeof(self->data.RetInfo));
    return PyBytes_FromString(self->data.RetInfo);
}

///响应信息
// TThostFtdcRetInfoType char[129]
static int PyCThostFtdcTransferFutureToBankRspField_set_RetInfo(PyCThostFtdcTransferFutureToBankRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_FutureAccount(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferFutureToBankRspField_set_FutureAccount(PyCThostFtdcTransferFutureToBankRspField *self, PyObject* val, void *closure) {
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
            
///转帐金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_TradeAmt(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmt);
}

///转帐金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferFutureToBankRspField_set_TradeAmt(PyCThostFtdcTransferFutureToBankRspField *self, PyObject* val, void *closure) {
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
        
///应收客户手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_CustFee(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///应收客户手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferFutureToBankRspField_set_CustFee(PyCThostFtdcTransferFutureToBankRspField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustFee Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CustFee = buf;
    return 0;
}
        
///币种
// TThostFtdcCurrencyCodeType char[4]
static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_CurrencyCode(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyCode, (Py_ssize_t)sizeof(self->data.CurrencyCode));
    return PyBytes_FromString(self->data.CurrencyCode);
}

///币种
// TThostFtdcCurrencyCodeType char[4]
static int PyCThostFtdcTransferFutureToBankRspField_set_CurrencyCode(PyCThostFtdcTransferFutureToBankRspField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTransferFutureToBankRspField_getset[] = {
    ///响应代码 
    {(char *)"RetCode", (getter)PyCThostFtdcTransferFutureToBankRspField_get_RetCode, (setter)PyCThostFtdcTransferFutureToBankRspField_set_RetCode, (char *)"RetCode", NULL},
    ///响应信息 
    {(char *)"RetInfo", (getter)PyCThostFtdcTransferFutureToBankRspField_get_RetInfo, (setter)PyCThostFtdcTransferFutureToBankRspField_set_RetInfo, (char *)"RetInfo", NULL},
    ///资金账户 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferFutureToBankRspField_get_FutureAccount, (setter)PyCThostFtdcTransferFutureToBankRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
    ///转帐金额 
    {(char *)"TradeAmt", (getter)PyCThostFtdcTransferFutureToBankRspField_get_TradeAmt, (setter)PyCThostFtdcTransferFutureToBankRspField_set_TradeAmt, (char *)"TradeAmt", NULL},
    ///应收客户手续费 
    {(char *)"CustFee", (getter)PyCThostFtdcTransferFutureToBankRspField_get_CustFee, (setter)PyCThostFtdcTransferFutureToBankRspField_set_CustFee, (char *)"CustFee", NULL},
    ///币种 
    {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferFutureToBankRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferFutureToBankRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferFutureToBankRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferFutureToBankRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferFutureToBankRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferFutureToBankRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferFutureToBankRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferFutureToBankRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferFutureToBankRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferFutureToBankRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferFutureToBankRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferFutureToBankRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferFutureToBankRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferFutureToBankRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferFutureToBankRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferFutureToBankRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferFutureToBankRspField", (PyObject *)&PyCThostFtdcTransferFutureToBankRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferFutureToBankRspField to module");
        Py_DECREF(&PyCThostFtdcTransferFutureToBankRspFieldType);
		return -1;
    }

    return 0;
}
