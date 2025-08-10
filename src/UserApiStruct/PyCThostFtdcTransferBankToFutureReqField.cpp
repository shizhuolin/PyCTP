
#include "PyCThostFtdcTransferBankToFutureReqField.h"

///银行资金转期货请求，TradeCode=202001

static PyObject *PyCThostFtdcTransferBankToFutureReqField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferBankToFutureReqField *self = (PyCThostFtdcTransferBankToFutureReqField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferBankToFutureReqField_init(PyCThostFtdcTransferBankToFutureReqField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FutureAccount", "FuturePwdFlag", "FutureAccPwd", "TradeAmt", "CustFee", "CurrencyCode",  NULL};


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    const char *TransferBankToFutureReqField_FutureAccount = NULL;
    Py_ssize_t TransferBankToFutureReqField_FutureAccount_len = 0;
            
    ///密码标志
    // TThostFtdcFuturePwdFlagType char
    char TransferBankToFutureReqField_FuturePwdFlag = 0;
            
    ///密码
    // TThostFtdcFutureAccPwdType char[17]
    const char *TransferBankToFutureReqField_FutureAccPwd = NULL;
    Py_ssize_t TransferBankToFutureReqField_FutureAccPwd_len = 0;
            
    ///转账金额
    // TThostFtdcMoneyType double
    double TransferBankToFutureReqField_TradeAmt = 0.0;
        
    ///客户手续费
    // TThostFtdcMoneyType double
    double TransferBankToFutureReqField_CustFee = 0.0;
        
    ///币种：RMB-人民币 USD-美圆 HKD-港元
    // TThostFtdcCurrencyCodeType char[4]
    const char *TransferBankToFutureReqField_CurrencyCode = NULL;
    Py_ssize_t TransferBankToFutureReqField_CurrencyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#dds#", (char **)kwlist
#endif

        , &TransferBankToFutureReqField_FutureAccount, &TransferBankToFutureReqField_FutureAccount_len 
        , &TransferBankToFutureReqField_FuturePwdFlag 
        , &TransferBankToFutureReqField_FutureAccPwd, &TransferBankToFutureReqField_FutureAccPwd_len 
        , &TransferBankToFutureReqField_TradeAmt 
        , &TransferBankToFutureReqField_CustFee 
        , &TransferBankToFutureReqField_CurrencyCode, &TransferBankToFutureReqField_CurrencyCode_len 


    )) {
        return -1;
    }


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    if( TransferBankToFutureReqField_FutureAccount != NULL ) {
        if(TransferBankToFutureReqField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferBankToFutureReqField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferBankToFutureReqField_FutureAccount, TransferBankToFutureReqField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferBankToFutureReqField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferBankToFutureReqField_FutureAccount = NULL;
    }
            
    ///密码标志
    // TThostFtdcFuturePwdFlagType char
    self->data.FuturePwdFlag = TransferBankToFutureReqField_FuturePwdFlag;
            
    ///密码
    // TThostFtdcFutureAccPwdType char[17]
    if( TransferBankToFutureReqField_FutureAccPwd != NULL ) {
        if(TransferBankToFutureReqField_FutureAccPwd_len > (Py_ssize_t)sizeof(self->data.FutureAccPwd)) {
            PyErr_Format(PyExc_ValueError, "FutureAccPwd too long: length=%zd (max allowed is %zd)", TransferBankToFutureReqField_FutureAccPwd_len, (Py_ssize_t)sizeof(self->data.FutureAccPwd));
            return -1;
        }
        // memset(self->data.FutureAccPwd, 0, sizeof(self->data.FutureAccPwd));
        // memcpy(self->data.FutureAccPwd, TransferBankToFutureReqField_FutureAccPwd, TransferBankToFutureReqField_FutureAccPwd_len);        
        strncpy(self->data.FutureAccPwd, TransferBankToFutureReqField_FutureAccPwd, sizeof(self->data.FutureAccPwd) );
        TransferBankToFutureReqField_FutureAccPwd = NULL;
    }
            
    ///转账金额
    // TThostFtdcMoneyType double
    self->data.TradeAmt = TransferBankToFutureReqField_TradeAmt;
        
    ///客户手续费
    // TThostFtdcMoneyType double
    self->data.CustFee = TransferBankToFutureReqField_CustFee;
        
    ///币种：RMB-人民币 USD-美圆 HKD-港元
    // TThostFtdcCurrencyCodeType char[4]
    if( TransferBankToFutureReqField_CurrencyCode != NULL ) {
        if(TransferBankToFutureReqField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", TransferBankToFutureReqField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
            return -1;
        }
        // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
        // memcpy(self->data.CurrencyCode, TransferBankToFutureReqField_CurrencyCode, TransferBankToFutureReqField_CurrencyCode_len);        
        strncpy(self->data.CurrencyCode, TransferBankToFutureReqField_CurrencyCode, sizeof(self->data.CurrencyCode) );
        TransferBankToFutureReqField_CurrencyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferBankToFutureReqField_dealloc(PyCThostFtdcTransferBankToFutureReqField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_repr(PyCThostFtdcTransferBankToFutureReqField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureReqField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///期货资金账户
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_FutureAccount(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///期货资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferBankToFutureReqField_set_FutureAccount(PyCThostFtdcTransferBankToFutureReqField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_FuturePwdFlag(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FuturePwdFlag), 1);
}

///密码标志
// TThostFtdcFuturePwdFlagType char
static int PyCThostFtdcTransferBankToFutureReqField_set_FuturePwdFlag(PyCThostFtdcTransferBankToFutureReqField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_FutureAccPwd(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccPwd, (Py_ssize_t)sizeof(self->data.FutureAccPwd));
    return PyBytes_FromString(self->data.FutureAccPwd);
}

///密码
// TThostFtdcFutureAccPwdType char[17]
static int PyCThostFtdcTransferBankToFutureReqField_set_FutureAccPwd(PyCThostFtdcTransferBankToFutureReqField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_TradeAmt(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmt);
}

///转账金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferBankToFutureReqField_set_TradeAmt(PyCThostFtdcTransferBankToFutureReqField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_CustFee(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///客户手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferBankToFutureReqField_set_CustFee(PyCThostFtdcTransferBankToFutureReqField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_CurrencyCode(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyCode, (Py_ssize_t)sizeof(self->data.CurrencyCode));
    return PyBytes_FromString(self->data.CurrencyCode);
}

///币种：RMB-人民币 USD-美圆 HKD-港元
// TThostFtdcCurrencyCodeType char[4]
static int PyCThostFtdcTransferBankToFutureReqField_set_CurrencyCode(PyCThostFtdcTransferBankToFutureReqField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTransferBankToFutureReqField_getset[] = {
    ///期货资金账户 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferBankToFutureReqField_get_FutureAccount, (setter)PyCThostFtdcTransferBankToFutureReqField_set_FutureAccount, (char *)"FutureAccount", NULL},
    ///密码标志 
    {(char *)"FuturePwdFlag", (getter)PyCThostFtdcTransferBankToFutureReqField_get_FuturePwdFlag, (setter)PyCThostFtdcTransferBankToFutureReqField_set_FuturePwdFlag, (char *)"FuturePwdFlag", NULL},
    ///密码 
    {(char *)"FutureAccPwd", (getter)PyCThostFtdcTransferBankToFutureReqField_get_FutureAccPwd, (setter)PyCThostFtdcTransferBankToFutureReqField_set_FutureAccPwd, (char *)"FutureAccPwd", NULL},
    ///转账金额 
    {(char *)"TradeAmt", (getter)PyCThostFtdcTransferBankToFutureReqField_get_TradeAmt, (setter)PyCThostFtdcTransferBankToFutureReqField_set_TradeAmt, (char *)"TradeAmt", NULL},
    ///客户手续费 
    {(char *)"CustFee", (getter)PyCThostFtdcTransferBankToFutureReqField_get_CustFee, (setter)PyCThostFtdcTransferBankToFutureReqField_set_CustFee, (char *)"CustFee", NULL},
    ///币种：RMB-人民币 USD-美圆 HKD-港元 
    {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferBankToFutureReqField_get_CurrencyCode, (setter)PyCThostFtdcTransferBankToFutureReqField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferBankToFutureReqFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferBankToFutureReqField",	/* tp_name */
	sizeof(PyCThostFtdcTransferBankToFutureReqField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferBankToFutureReqField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferBankToFutureReqField_repr,   /* tp_repr */
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
	"CThostFtdcTransferBankToFutureReqField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferBankToFutureReqField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferBankToFutureReqField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferBankToFutureReqField_new,       /* tp_new */
};

int PyCThostFtdcTransferBankToFutureReqFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferBankToFutureReqField  */
	if (PyType_Ready(&PyCThostFtdcTransferBankToFutureReqFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferBankToFutureReqField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferBankToFutureReqFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferBankToFutureReqField", (PyObject *)&PyCThostFtdcTransferBankToFutureReqFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankToFutureReqField to module");
        Py_DECREF(&PyCThostFtdcTransferBankToFutureReqFieldType);
		return -1;
    }

    return 0;
}
