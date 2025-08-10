
#include "PyCThostFtdcTransferBankToFutureRspField.h"

///银行资金转期货请求响应

static PyObject *PyCThostFtdcTransferBankToFutureRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferBankToFutureRspField *self = (PyCThostFtdcTransferBankToFutureRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferBankToFutureRspField_init(PyCThostFtdcTransferBankToFutureRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RetCode", "RetInfo", "FutureAccount", "TradeAmt", "CustFee", "CurrencyCode",  NULL};


    ///响应代码
    // TThostFtdcRetCodeType char[5]
    const char *TransferBankToFutureRspField_RetCode = NULL;
    Py_ssize_t TransferBankToFutureRspField_RetCode_len = 0;
            
    ///响应信息
    // TThostFtdcRetInfoType char[129]
    const char *TransferBankToFutureRspField_RetInfo = NULL;
    Py_ssize_t TransferBankToFutureRspField_RetInfo_len = 0;
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    const char *TransferBankToFutureRspField_FutureAccount = NULL;
    Py_ssize_t TransferBankToFutureRspField_FutureAccount_len = 0;
            
    ///转帐金额
    // TThostFtdcMoneyType double
    double TransferBankToFutureRspField_TradeAmt = 0.0;
        
    ///应收客户手续费
    // TThostFtdcMoneyType double
    double TransferBankToFutureRspField_CustFee = 0.0;
        
    ///币种
    // TThostFtdcCurrencyCodeType char[4]
    const char *TransferBankToFutureRspField_CurrencyCode = NULL;
    Py_ssize_t TransferBankToFutureRspField_CurrencyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dds#", (char **)kwlist
#endif

        , &TransferBankToFutureRspField_RetCode, &TransferBankToFutureRspField_RetCode_len 
        , &TransferBankToFutureRspField_RetInfo, &TransferBankToFutureRspField_RetInfo_len 
        , &TransferBankToFutureRspField_FutureAccount, &TransferBankToFutureRspField_FutureAccount_len 
        , &TransferBankToFutureRspField_TradeAmt 
        , &TransferBankToFutureRspField_CustFee 
        , &TransferBankToFutureRspField_CurrencyCode, &TransferBankToFutureRspField_CurrencyCode_len 


    )) {
        return -1;
    }


    ///响应代码
    // TThostFtdcRetCodeType char[5]
    if( TransferBankToFutureRspField_RetCode != NULL ) {
        if(TransferBankToFutureRspField_RetCode_len > (Py_ssize_t)sizeof(self->data.RetCode)) {
            PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is %zd)", TransferBankToFutureRspField_RetCode_len, (Py_ssize_t)sizeof(self->data.RetCode));
            return -1;
        }
        // memset(self->data.RetCode, 0, sizeof(self->data.RetCode));
        // memcpy(self->data.RetCode, TransferBankToFutureRspField_RetCode, TransferBankToFutureRspField_RetCode_len);        
        strncpy(self->data.RetCode, TransferBankToFutureRspField_RetCode, sizeof(self->data.RetCode) );
        TransferBankToFutureRspField_RetCode = NULL;
    }
            
    ///响应信息
    // TThostFtdcRetInfoType char[129]
    if( TransferBankToFutureRspField_RetInfo != NULL ) {
        if(TransferBankToFutureRspField_RetInfo_len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
            PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is %zd)", TransferBankToFutureRspField_RetInfo_len, (Py_ssize_t)sizeof(self->data.RetInfo));
            return -1;
        }
        // memset(self->data.RetInfo, 0, sizeof(self->data.RetInfo));
        // memcpy(self->data.RetInfo, TransferBankToFutureRspField_RetInfo, TransferBankToFutureRspField_RetInfo_len);        
        strncpy(self->data.RetInfo, TransferBankToFutureRspField_RetInfo, sizeof(self->data.RetInfo) );
        TransferBankToFutureRspField_RetInfo = NULL;
    }
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    if( TransferBankToFutureRspField_FutureAccount != NULL ) {
        if(TransferBankToFutureRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
            PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", TransferBankToFutureRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
            return -1;
        }
        // memset(self->data.FutureAccount, 0, sizeof(self->data.FutureAccount));
        // memcpy(self->data.FutureAccount, TransferBankToFutureRspField_FutureAccount, TransferBankToFutureRspField_FutureAccount_len);        
        strncpy(self->data.FutureAccount, TransferBankToFutureRspField_FutureAccount, sizeof(self->data.FutureAccount) );
        TransferBankToFutureRspField_FutureAccount = NULL;
    }
            
    ///转帐金额
    // TThostFtdcMoneyType double
    self->data.TradeAmt = TransferBankToFutureRspField_TradeAmt;
        
    ///应收客户手续费
    // TThostFtdcMoneyType double
    self->data.CustFee = TransferBankToFutureRspField_CustFee;
        
    ///币种
    // TThostFtdcCurrencyCodeType char[4]
    if( TransferBankToFutureRspField_CurrencyCode != NULL ) {
        if(TransferBankToFutureRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
            PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", TransferBankToFutureRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
            return -1;
        }
        // memset(self->data.CurrencyCode, 0, sizeof(self->data.CurrencyCode));
        // memcpy(self->data.CurrencyCode, TransferBankToFutureRspField_CurrencyCode, TransferBankToFutureRspField_CurrencyCode_len);        
        strncpy(self->data.CurrencyCode, TransferBankToFutureRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
        TransferBankToFutureRspField_CurrencyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTransferBankToFutureRspField_dealloc(PyCThostFtdcTransferBankToFutureRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_repr(PyCThostFtdcTransferBankToFutureRspField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///响应代码
// TThostFtdcRetCodeType char[5]
static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_RetCode(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RetCode, (Py_ssize_t)sizeof(self->data.RetCode));
    return PyBytes_FromString(self->data.RetCode);
}

///响应代码
// TThostFtdcRetCodeType char[5]
static int PyCThostFtdcTransferBankToFutureRspField_set_RetCode(PyCThostFtdcTransferBankToFutureRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_RetInfo(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.RetInfo, (Py_ssize_t)sizeof(self->data.RetInfo));
    return PyBytes_FromString(self->data.RetInfo);
}

///响应信息
// TThostFtdcRetInfoType char[129]
static int PyCThostFtdcTransferBankToFutureRspField_set_RetInfo(PyCThostFtdcTransferBankToFutureRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_FutureAccount(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FutureAccount, (Py_ssize_t)sizeof(self->data.FutureAccount));
    return PyBytes_FromString(self->data.FutureAccount);
}

///资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTransferBankToFutureRspField_set_FutureAccount(PyCThostFtdcTransferBankToFutureRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_TradeAmt(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.TradeAmt);
}

///转帐金额
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferBankToFutureRspField_set_TradeAmt(PyCThostFtdcTransferBankToFutureRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_CustFee(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CustFee);
}

///应收客户手续费
// TThostFtdcMoneyType double
static int PyCThostFtdcTransferBankToFutureRspField_set_CustFee(PyCThostFtdcTransferBankToFutureRspField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_CurrencyCode(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyCode, (Py_ssize_t)sizeof(self->data.CurrencyCode));
    return PyBytes_FromString(self->data.CurrencyCode);
}

///币种
// TThostFtdcCurrencyCodeType char[4]
static int PyCThostFtdcTransferBankToFutureRspField_set_CurrencyCode(PyCThostFtdcTransferBankToFutureRspField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTransferBankToFutureRspField_getset[] = {
    ///响应代码 
    {(char *)"RetCode", (getter)PyCThostFtdcTransferBankToFutureRspField_get_RetCode, (setter)PyCThostFtdcTransferBankToFutureRspField_set_RetCode, (char *)"RetCode", NULL},
    ///响应信息 
    {(char *)"RetInfo", (getter)PyCThostFtdcTransferBankToFutureRspField_get_RetInfo, (setter)PyCThostFtdcTransferBankToFutureRspField_set_RetInfo, (char *)"RetInfo", NULL},
    ///资金账户 
    {(char *)"FutureAccount", (getter)PyCThostFtdcTransferBankToFutureRspField_get_FutureAccount, (setter)PyCThostFtdcTransferBankToFutureRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
    ///转帐金额 
    {(char *)"TradeAmt", (getter)PyCThostFtdcTransferBankToFutureRspField_get_TradeAmt, (setter)PyCThostFtdcTransferBankToFutureRspField_set_TradeAmt, (char *)"TradeAmt", NULL},
    ///应收客户手续费 
    {(char *)"CustFee", (getter)PyCThostFtdcTransferBankToFutureRspField_get_CustFee, (setter)PyCThostFtdcTransferBankToFutureRspField_set_CustFee, (char *)"CustFee", NULL},
    ///币种 
    {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferBankToFutureRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferBankToFutureRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferBankToFutureRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferBankToFutureRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferBankToFutureRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferBankToFutureRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferBankToFutureRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferBankToFutureRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferBankToFutureRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferBankToFutureRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferBankToFutureRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferBankToFutureRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferBankToFutureRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferBankToFutureRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferBankToFutureRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferBankToFutureRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferBankToFutureRspField", (PyObject *)&PyCThostFtdcTransferBankToFutureRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankToFutureRspField to module");
        Py_DECREF(&PyCThostFtdcTransferBankToFutureRspFieldType);
		return -1;
    }

    return 0;
}
