
#include "PyCThostFtdcTransferFutureToBankReqField.h"

///期货资金转银行请求，TradeCode=202002

static PyObject *PyCThostFtdcTransferFutureToBankReqField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferFutureToBankReqField *self = (PyCThostFtdcTransferFutureToBankReqField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferFutureToBankReqField_init(PyCThostFtdcTransferFutureToBankReqField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FutureAccount", "FuturePwdFlag", "FutureAccPwd", "TradeAmt", "CustFee", "CurrencyCode",  NULL};


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    const char *TransferFutureToBankReqField_FutureAccount = NULL;
    Py_ssize_t TransferFutureToBankReqField_FutureAccount_len = 0;
            
    ///密码标志
    // TThostFtdcFuturePwdFlagType char
    char TransferFutureToBankReqField_FuturePwdFlag = 0;
            
    ///密码
    // TThostFtdcFutureAccPwdType char[17]
    const char *TransferFutureToBankReqField_FutureAccPwd = NULL;
    Py_ssize_t TransferFutureToBankReqField_FutureAccPwd_len = 0;
            
    ///转账金额
    // TThostFtdcMoneyType double
    double TransferFutureToBankReqField_TradeAmt = 0.0;
        
    ///客户手续费
    // TThostFtdcMoneyType double
    double TransferFutureToBankReqField_CustFee = 0.0;
        
    ///币种：RMB-人民币 USD-美圆 HKD-港元
    // TThostFtdcCurrencyCodeType char[4]
    const char *TransferFutureToBankReqField_CurrencyCode = NULL;
    Py_ssize_t TransferFutureToBankReqField_CurrencyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#dds#", (char **)kwlist
#endif

        , &TransferFutureToBankReqField_FutureAccount, &TransferFutureToBankReqField_FutureAccount_len 
        , &TransferFutureToBankReqField_FuturePwdFlag 
        , &TransferFutureToBankReqField_FutureAccPwd, &TransferFutureToBankReqField_FutureAccPwd_len 
        , &TransferFutureToBankReqField_TradeAmt 
        , &TransferFutureToBankReqField_CustFee 
        , &TransferFutureToBankReqField_CurrencyCode, &TransferFutureToBankReqField_CurrencyCode_len 


    )) {
        return -1;
    }


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    if( TransferFutureToBankReqField_FutureAccount != NULL ) {
        if(TransferFutureToBankReqField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferFutureToBankReqField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferFutureToBankReqField_FutureAccount, TransferFutureToBankReqField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferFutureToBankReqField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferFutureToBankReqField_FutureAccount = NULL;
    }
            
    ///密码标志
    // TThostFtdcFuturePwdFlagType char
    self->data.FuturePwdFlag = TransferFutureToBankReqField_FuturePwdFlag;
            
    ///密码
    // TThostFtdcFutureAccPwdType char[17]
    if( TransferFutureToBankReqField_FutureAccPwd != NULL ) {
        if(TransferFutureToBankReqField_FutureAccPwd_len > (Py_ssize_t)sizeof(self->data.FutureAccPwd)) {
            PyErr_Format(PyExc_ValueError, "FutureAccPwd too long: length=%zd (max allowed is %zd)", TransferFutureToBankReqField_FutureAccPwd_len, (Py_ssize_t)sizeof(self->data.FutureAccPwd));
            return -1;
        }
        // memset(self->data.FutureAccPwd, 0, sizeof(self->data.FutureAccPwd));
        // memcpy(self->data.FutureAccPwd, TransferFutureToBankReqField_FutureAccPwd, TransferFutureToBankReqField_FutureAccPwd_len);        
        strncpy(self->data.FutureAccPwd, TransferFutureToBankReqField_FutureAccPwd, sizeof(self->data.FutureAccPwd) );
        TransferFutureToBankReqField_FutureAccPwd = NULL;
    }
            
    ///转账金额
    // TThostFtdcMoneyType double
    self->data.TradeAmt = TransferFutureToBankReqField_TradeAmt;
        
    ///客户手续费
    // TThostFtdcMoneyType double
    self->data.CustFee = TransferFutureToBankReqField_CustFee;
        
    ///币种：RMB-人民币 USD-美圆 HKD-港元
    // TThostFtdcCurrencyCodeType char[4]
    if( TransferFutureToBankReqField_CurrencyCode != NULL ) {
        if(TransferFutureToBankReqField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", TransferFutureToBankReqField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
            return -1;
        }
        // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
        // memcpy(self->data.CurrencyCode, TransferFutureToBankReqField_CurrencyCode, TransferFutureToBankReqField_CurrencyCode_len);        
        strncpy(self->data.CurrencyCode, TransferFutureToBankReqField_CurrencyCode, sizeof(self->data.CurrencyCode) );
        TransferFutureToBankReqField_CurrencyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferFutureToBankReqField_dealloc(PyCThostFtdcTransferFutureToBankReqField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferFutureToBankReqField_repr(PyCThostFtdcTransferFutureToBankReqField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:d,s:d,s:s}"
#endif

        ,"FutureAccount", self->data.FutureAccount//, (Py_ssize_t)sizeof(self->data.FutureAccount) 
        ,"FuturePwdFlag", self->data.FuturePwdFlag 
        ,"FutureAccPwd", self->data.FutureAccPwd//, (Py_ssize_t)sizeof(self->data.FutureAccPwd) 
        ,"TradeAmt", self->data.TradeAmt 
        ,"CustFee", self->data.CustFee 
        ,"CurrencyCode", self->data.CurrencyCode//, (Py_ssize_t)sizeof(self->data.CurrencyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferFutureToBankReqField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///期货资金账户
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcTransferFutureToBankReqField_get_FutureAccount(PyCThostFtdcTransferFutureToBankReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///期货资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferFutureToBankReqField_set_FutureAccount(PyCThostFtdcTransferFutureToBankReqField *self, PyObject* val, void *closure) {
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
            
///密码标志
// TThostFtdcFuturePwdFlagType char
static PyObject *PyCThostFtdcTransferFutureToBankReqField_get_FuturePwdFlag(PyCThostFtdcTransferFutureToBankReqField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FuturePwdFlag), 1);
}

///密码标志
// TThostFtdcFuturePwdFlagType char
static int PyCThostFtdcTransferFutureToBankReqField_set_FuturePwdFlag(PyCThostFtdcTransferFutureToBankReqField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FuturePwdFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FuturePwdFlag)) {
        PyErr_SetString(PyExc_ValueError, "FuturePwdFlag must be equal 1 bytes");
        return -1;
    }
    self->data.FuturePwdFlag = *buf;
    return 0;
}
            
///密码
// TThostFtdcFutureAccPwdType char[17]
static PyObject *PyCThostFtdcTransferFutureToBankReqField_get_FutureAccPwd(PyCThostFtdcTransferFutureToBankReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccPwd, (Py_ssize_t)sizeof(self->data.FutureAccPwd));
    return PyBytes_FromString(self->data.FutureAccPwd);
}

///密码
// TThostFtdcFutureAccPwdType char[17]
static int PyCThostFtdcTransferFutureToBankReqField_set_FutureAccPwd(PyCThostFtdcTransferFutureToBankReqField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureAccPwd Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FutureAccPwd)) {
        PyErr_SetString(PyExc_ValueError, "FutureAccPwd must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.FutureAccPwd, 0, sizeof(self->data.FutureAccPwd));
    // memcpy(self->data.FutureAccPwd, buf, len);
    strncpy(self->data.FutureAccPwd, buf, sizeof(self->data.FutureAccPwd));
    return 0;
}
            
///转账金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferFutureToBankReqField_get_TradeAmt(PyCThostFtdcTransferFutureToBankReqField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmt);
}

///转账金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferFutureToBankReqField_set_TradeAmt(PyCThostFtdcTransferFutureToBankReqField *self, PyObject* val, void *closure) {
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
        
///客户手续费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTransferFutureToBankReqField_get_CustFee(PyCThostFtdcTransferFutureToBankReqField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///客户手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferFutureToBankReqField_set_CustFee(PyCThostFtdcTransferFutureToBankReqField *self, PyObject* val, void *closure) {
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
        
///币种：RMB-人民币 USD-美圆 HKD-港元
// TThostFtdcCurrencyCodeType char[4]
static PyObject *PyCThostFtdcTransferFutureToBankReqField_get_CurrencyCode(PyCThostFtdcTransferFutureToBankReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyCode, (Py_ssize_t)sizeof(self->data.CurrencyCode));
    return PyBytes_FromString(self->data.CurrencyCode);
}

///币种：RMB-人民币 USD-美圆 HKD-港元
// TThostFtdcCurrencyCodeType char[4]
static int PyCThostFtdcTransferFutureToBankReqField_set_CurrencyCode(PyCThostFtdcTransferFutureToBankReqField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTransferFutureToBankReqField_getset[] = {
    ///期货资金账户 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferFutureToBankReqField_get_FutureAccount, (setter)PyCThostFtdcTransferFutureToBankReqField_set_FutureAccount, (char *)"FutureAccount", NULL},
    ///密码标志 
    {(char *)"FuturePwdFlag", (getter)PyCThostFtdcTransferFutureToBankReqField_get_FuturePwdFlag, (setter)PyCThostFtdcTransferFutureToBankReqField_set_FuturePwdFlag, (char *)"FuturePwdFlag", NULL},
    ///密码 
    {(char *)"FutureAccPwd", (getter)PyCThostFtdcTransferFutureToBankReqField_get_FutureAccPwd, (setter)PyCThostFtdcTransferFutureToBankReqField_set_FutureAccPwd, (char *)"FutureAccPwd", NULL},
    ///转账金额 
    {(char *)"TradeAmt", (getter)PyCThostFtdcTransferFutureToBankReqField_get_TradeAmt, (setter)PyCThostFtdcTransferFutureToBankReqField_set_TradeAmt, (char *)"TradeAmt", NULL},
    ///客户手续费 
    {(char *)"CustFee", (getter)PyCThostFtdcTransferFutureToBankReqField_get_CustFee, (setter)PyCThostFtdcTransferFutureToBankReqField_set_CustFee, (char *)"CustFee", NULL},
    ///币种：RMB-人民币 USD-美圆 HKD-港元 
    {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferFutureToBankReqField_get_CurrencyCode, (setter)PyCThostFtdcTransferFutureToBankReqField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferFutureToBankReqFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferFutureToBankReqField",	/* tp_name */
	sizeof(PyCThostFtdcTransferFutureToBankReqField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferFutureToBankReqField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferFutureToBankReqField_repr,   /* tp_repr */
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
	"CThostFtdcTransferFutureToBankReqField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferFutureToBankReqField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferFutureToBankReqField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferFutureToBankReqField_new,       /* tp_new */
};

int PyCThostFtdcTransferFutureToBankReqFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferFutureToBankReqField  */
	if (PyType_Ready(&PyCThostFtdcTransferFutureToBankReqFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferFutureToBankReqField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferFutureToBankReqFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferFutureToBankReqField", (PyObject *)&PyCThostFtdcTransferFutureToBankReqFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferFutureToBankReqField to module");
        Py_DECREF(&PyCThostFtdcTransferFutureToBankReqFieldType);
		return -1;
    }

    return 0;
}
