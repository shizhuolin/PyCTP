
#include "PyCThostFtdcTransferQryBankReqField.h"

///查询银行资金请求，TradeCode=204002

static PyObject *PyCThostFtdcTransferQryBankReqField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferQryBankReqField *self = (PyCThostFtdcTransferQryBankReqField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferQryBankReqField_init(PyCThostFtdcTransferQryBankReqField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FutureAccount", "FuturePwdFlag", "FutureAccPwd", "CurrencyCode",  NULL};


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    const char *TransferQryBankReqField_FutureAccount = NULL;
    Py_ssize_t TransferQryBankReqField_FutureAccount_len = 0;
            
    ///密码标志
    // TThostFtdcFuturePwdFlagType char
    char TransferQryBankReqField_FuturePwdFlag = 0;
            
    ///密码
    // TThostFtdcFutureAccPwdType char[17]
    const char *TransferQryBankReqField_FutureAccPwd = NULL;
    Py_ssize_t TransferQryBankReqField_FutureAccPwd_len = 0;
            
    ///币种：RMB-人民币 USD-美圆 HKD-港元
    // TThostFtdcCurrencyCodeType char[4]
    const char *TransferQryBankReqField_CurrencyCode = NULL;
    Py_ssize_t TransferQryBankReqField_CurrencyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#", (char **)kwlist
#endif

        , &TransferQryBankReqField_FutureAccount, &TransferQryBankReqField_FutureAccount_len 
        , &TransferQryBankReqField_FuturePwdFlag 
        , &TransferQryBankReqField_FutureAccPwd, &TransferQryBankReqField_FutureAccPwd_len 
        , &TransferQryBankReqField_CurrencyCode, &TransferQryBankReqField_CurrencyCode_len 


    )) {
        return -1;
    }


    ///期货资金账户
    // TThostFtdcAccountIDType char[13]
    if( TransferQryBankReqField_FutureAccount != NULL ) {
        if(TransferQryBankReqField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferQryBankReqField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferQryBankReqField_FutureAccount, TransferQryBankReqField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferQryBankReqField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferQryBankReqField_FutureAccount = NULL;
    }
            
    ///密码标志
    // TThostFtdcFuturePwdFlagType char
    self->data.FuturePwdFlag = TransferQryBankReqField_FuturePwdFlag;
            
    ///密码
    // TThostFtdcFutureAccPwdType char[17]
    if( TransferQryBankReqField_FutureAccPwd != NULL ) {
        if(TransferQryBankReqField_FutureAccPwd_len > (Py_ssize_t)sizeof(self->data.FutureAccPwd)) {
            PyErr_Format(PyExc_ValueError, "FutureAccPwd too long: length=%zd (max allowed is %zd)", TransferQryBankReqField_FutureAccPwd_len, (Py_ssize_t)sizeof(self->data.FutureAccPwd));
            return -1;
        }
        // memset(self->data.FutureAccPwd, 0, sizeof(self->data.FutureAccPwd));
        // memcpy(self->data.FutureAccPwd, TransferQryBankReqField_FutureAccPwd, TransferQryBankReqField_FutureAccPwd_len);        
        strncpy(self->data.FutureAccPwd, TransferQryBankReqField_FutureAccPwd, sizeof(self->data.FutureAccPwd) );
        TransferQryBankReqField_FutureAccPwd = NULL;
    }
            
    ///币种：RMB-人民币 USD-美圆 HKD-港元
    // TThostFtdcCurrencyCodeType char[4]
    if( TransferQryBankReqField_CurrencyCode != NULL ) {
        if(TransferQryBankReqField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", TransferQryBankReqField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
            return -1;
        }
        // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
        // memcpy(self->data.CurrencyCode, TransferQryBankReqField_CurrencyCode, TransferQryBankReqField_CurrencyCode_len);        
        strncpy(self->data.CurrencyCode, TransferQryBankReqField_CurrencyCode, sizeof(self->data.CurrencyCode) );
        TransferQryBankReqField_CurrencyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferQryBankReqField_dealloc(PyCThostFtdcTransferQryBankReqField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferQryBankReqField_repr(PyCThostFtdcTransferQryBankReqField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s}"
#endif

        ,"FutureAccount", self->data.FutureAccount//, (Py_ssize_t)sizeof(self->data.FutureAccount) 
        ,"FuturePwdFlag", self->data.FuturePwdFlag 
        ,"FutureAccPwd", self->data.FutureAccPwd//, (Py_ssize_t)sizeof(self->data.FutureAccPwd) 
        ,"CurrencyCode", self->data.CurrencyCode//, (Py_ssize_t)sizeof(self->data.CurrencyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryBankReqField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///期货资金账户
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcTransferQryBankReqField_get_FutureAccount(PyCThostFtdcTransferQryBankReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///期货资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferQryBankReqField_set_FutureAccount(PyCThostFtdcTransferQryBankReqField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferQryBankReqField_get_FuturePwdFlag(PyCThostFtdcTransferQryBankReqField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FuturePwdFlag), 1);
}

///密码标志
// TThostFtdcFuturePwdFlagType char
static int PyCThostFtdcTransferQryBankReqField_set_FuturePwdFlag(PyCThostFtdcTransferQryBankReqField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferQryBankReqField_get_FutureAccPwd(PyCThostFtdcTransferQryBankReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccPwd, (Py_ssize_t)sizeof(self->data.FutureAccPwd));
    return PyBytes_FromString(self->data.FutureAccPwd);
}

///密码
// TThostFtdcFutureAccPwdType char[17]
static int PyCThostFtdcTransferQryBankReqField_set_FutureAccPwd(PyCThostFtdcTransferQryBankReqField *self, PyObject* val, void *closure) {
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
            
///币种：RMB-人民币 USD-美圆 HKD-港元
// TThostFtdcCurrencyCodeType char[4]
static PyObject *PyCThostFtdcTransferQryBankReqField_get_CurrencyCode(PyCThostFtdcTransferQryBankReqField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyCode, (Py_ssize_t)sizeof(self->data.CurrencyCode));
    return PyBytes_FromString(self->data.CurrencyCode);
}

///币种：RMB-人民币 USD-美圆 HKD-港元
// TThostFtdcCurrencyCodeType char[4]
static int PyCThostFtdcTransferQryBankReqField_set_CurrencyCode(PyCThostFtdcTransferQryBankReqField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTransferQryBankReqField_getset[] = {
    ///期货资金账户 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferQryBankReqField_get_FutureAccount, (setter)PyCThostFtdcTransferQryBankReqField_set_FutureAccount, (char *)"FutureAccount", NULL},
    ///密码标志 
    {(char *)"FuturePwdFlag", (getter)PyCThostFtdcTransferQryBankReqField_get_FuturePwdFlag, (setter)PyCThostFtdcTransferQryBankReqField_set_FuturePwdFlag, (char *)"FuturePwdFlag", NULL},
    ///密码 
    {(char *)"FutureAccPwd", (getter)PyCThostFtdcTransferQryBankReqField_get_FutureAccPwd, (setter)PyCThostFtdcTransferQryBankReqField_set_FutureAccPwd, (char *)"FutureAccPwd", NULL},
    ///币种：RMB-人民币 USD-美圆 HKD-港元 
    {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferQryBankReqField_get_CurrencyCode, (setter)PyCThostFtdcTransferQryBankReqField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferQryBankReqFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferQryBankReqField",	/* tp_name */
	sizeof(PyCThostFtdcTransferQryBankReqField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferQryBankReqField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferQryBankReqField_repr,   /* tp_repr */
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
	"CThostFtdcTransferQryBankReqField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferQryBankReqField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferQryBankReqField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferQryBankReqField_new,       /* tp_new */
};

int PyCThostFtdcTransferQryBankReqFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferQryBankReqField  */
	if (PyType_Ready(&PyCThostFtdcTransferQryBankReqFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferQryBankReqField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferQryBankReqFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferQryBankReqField", (PyObject *)&PyCThostFtdcTransferQryBankReqFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryBankReqField to module");
        Py_DECREF(&PyCThostFtdcTransferQryBankReqFieldType);
		return -1;
    }

    return 0;
}
