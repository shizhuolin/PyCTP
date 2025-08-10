
#include "PyCThostFtdcSyncFundMortgageField.h"

///货币质押同步

static PyObject *PyCThostFtdcSyncFundMortgageField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncFundMortgageField *self = (PyCThostFtdcSyncFundMortgageField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncFundMortgageField_init(PyCThostFtdcSyncFundMortgageField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"MortgageSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "MortgageAmount", "ToCurrencyID",  NULL};


    ///货币质押流水号
    // TThostFtdcDepositSeqNoType char[15]
    const char *SyncFundMortgageField_MortgageSeqNo = NULL;
    Py_ssize_t SyncFundMortgageField_MortgageSeqNo_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncFundMortgageField_BrokerID = NULL;
    Py_ssize_t SyncFundMortgageField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncFundMortgageField_InvestorID = NULL;
    Py_ssize_t SyncFundMortgageField_InvestorID_len = 0;
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncFundMortgageField_FromCurrencyID = NULL;
    Py_ssize_t SyncFundMortgageField_FromCurrencyID_len = 0;
            
    ///质押金额
    // TThostFtdcMoneyType double
    double SyncFundMortgageField_MortgageAmount = 0.0;
        
    ///目标币种
    // TThostFtdcCurrencyIDType char[4]
    const char *SyncFundMortgageField_ToCurrencyID = NULL;
    Py_ssize_t SyncFundMortgageField_ToCurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ds#", (char **)kwlist
#endif

        , &SyncFundMortgageField_MortgageSeqNo, &SyncFundMortgageField_MortgageSeqNo_len 
        , &SyncFundMortgageField_BrokerID, &SyncFundMortgageField_BrokerID_len 
        , &SyncFundMortgageField_InvestorID, &SyncFundMortgageField_InvestorID_len 
        , &SyncFundMortgageField_FromCurrencyID, &SyncFundMortgageField_FromCurrencyID_len 
        , &SyncFundMortgageField_MortgageAmount 
        , &SyncFundMortgageField_ToCurrencyID, &SyncFundMortgageField_ToCurrencyID_len 


    )) {
        return -1;
    }


    ///货币质押流水号
    // TThostFtdcDepositSeqNoType char[15]
    if( SyncFundMortgageField_MortgageSeqNo != NULL ) {
        if(SyncFundMortgageField_MortgageSeqNo_len > (Py_ssize_t)sizeof(self->data.MortgageSeqNo)) {
            PyErr_Format(PyExc_ValueError, "MortgageSeqNo too long: length=%zd (max allowed is %zd)", SyncFundMortgageField_MortgageSeqNo_len, (Py_ssize_t)sizeof(self->data.MortgageSeqNo));
            return -1;
        }
        // memset(self->data.MortgageSeqNo, 0, sizeof(self->data.MortgageSeqNo));
        // memcpy(self->data.MortgageSeqNo, SyncFundMortgageField_MortgageSeqNo, SyncFundMortgageField_MortgageSeqNo_len);        
        strncpy(self->data.MortgageSeqNo, SyncFundMortgageField_MortgageSeqNo, sizeof(self->data.MortgageSeqNo) );
        SyncFundMortgageField_MortgageSeqNo = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncFundMortgageField_BrokerID != NULL ) {
        if(SyncFundMortgageField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncFundMortgageField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncFundMortgageField_BrokerID, SyncFundMortgageField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncFundMortgageField_BrokerID, sizeof(self->data.BrokerID) );
        SyncFundMortgageField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncFundMortgageField_InvestorID != NULL ) {
        if(SyncFundMortgageField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncFundMortgageField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncFundMortgageField_InvestorID, SyncFundMortgageField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncFundMortgageField_InvestorID, sizeof(self->data.InvestorID) );
        SyncFundMortgageField_InvestorID = NULL;
    }
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    if( SyncFundMortgageField_FromCurrencyID != NULL ) {
        if(SyncFundMortgageField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", SyncFundMortgageField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
            return -1;
        }
        // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
        // memcpy(self->data.FromCurrencyID, SyncFundMortgageField_FromCurrencyID, SyncFundMortgageField_FromCurrencyID_len);        
        strncpy(self->data.FromCurrencyID, SyncFundMortgageField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
        SyncFundMortgageField_FromCurrencyID = NULL;
    }
            
    ///质押金额
    // TThostFtdcMoneyType double
    self->data.MortgageAmount = SyncFundMortgageField_MortgageAmount;
        
    ///目标币种
    // TThostFtdcCurrencyIDType char[4]
    if( SyncFundMortgageField_ToCurrencyID != NULL ) {
        if(SyncFundMortgageField_ToCurrencyID_len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is %zd)", SyncFundMortgageField_ToCurrencyID_len, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
            return -1;
        }
        // memset(self->data.ToCurrencyID, 0, sizeof(self->data.ToCurrencyID));
        // memcpy(self->data.ToCurrencyID, SyncFundMortgageField_ToCurrencyID, SyncFundMortgageField_ToCurrencyID_len);        
        strncpy(self->data.ToCurrencyID, SyncFundMortgageField_ToCurrencyID, sizeof(self->data.ToCurrencyID) );
        SyncFundMortgageField_ToCurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSyncFundMortgageField_dealloc(PyCThostFtdcSyncFundMortgageField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_repr(PyCThostFtdcSyncFundMortgageField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:s}"
#endif

        ,"MortgageSeqNo", self->data.MortgageSeqNo//, (Py_ssize_t)sizeof(self->data.MortgageSeqNo) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"FromCurrencyID", self->data.FromCurrencyID//, (Py_ssize_t)sizeof(self->data.FromCurrencyID) 
        ,"MortgageAmount", self->data.MortgageAmount 
        ,"ToCurrencyID", self->data.ToCurrencyID//, (Py_ssize_t)sizeof(self->data.ToCurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncFundMortgageField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///货币质押流水号
// TThostFtdcDepositSeqNoType char[15]
static PyObject *PyCThostFtdcSyncFundMortgageField_get_MortgageSeqNo(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MortgageSeqNo, (Py_ssize_t)sizeof(self->data.MortgageSeqNo));
    return PyBytes_FromString(self->data.MortgageSeqNo);
}

///货币质押流水号
// TThostFtdcDepositSeqNoType char[15]
static int PyCThostFtdcSyncFundMortgageField_set_MortgageSeqNo(PyCThostFtdcSyncFundMortgageField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageSeqNo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MortgageSeqNo)) {
        PyErr_SetString(PyExc_ValueError, "MortgageSeqNo must be less than 15 bytes");
        return -1;
    }
    // memset(self->data.MortgageSeqNo, 0, sizeof(self->data.MortgageSeqNo));
    // memcpy(self->data.MortgageSeqNo, buf, len);
    strncpy(self->data.MortgageSeqNo, buf, sizeof(self->data.MortgageSeqNo));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncFundMortgageField_get_BrokerID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncFundMortgageField_set_BrokerID(PyCThostFtdcSyncFundMortgageField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncFundMortgageField_get_InvestorID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncFundMortgageField_set_InvestorID(PyCThostFtdcSyncFundMortgageField *self, PyObject* val, void *closure) {
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
            
///源币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSyncFundMortgageField_get_FromCurrencyID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FromCurrencyID, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
    return PyBytes_FromString(self->data.FromCurrencyID);
}

///源币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncFundMortgageField_set_FromCurrencyID(PyCThostFtdcSyncFundMortgageField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
    // memcpy(self->data.FromCurrencyID, buf, len);
    strncpy(self->data.FromCurrencyID, buf, sizeof(self->data.FromCurrencyID));
    return 0;
}
            
///质押金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncFundMortgageField_get_MortgageAmount(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MortgageAmount);
}

///质押金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncFundMortgageField_set_MortgageAmount(PyCThostFtdcSyncFundMortgageField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MortgageAmount = buf;
    return 0;
}
        
///目标币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcSyncFundMortgageField_get_ToCurrencyID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ToCurrencyID, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
    return PyBytes_FromString(self->data.ToCurrencyID);
}

///目标币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSyncFundMortgageField_set_ToCurrencyID(PyCThostFtdcSyncFundMortgageField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.ToCurrencyID, 0, sizeof(self->data.ToCurrencyID));
    // memcpy(self->data.ToCurrencyID, buf, len);
    strncpy(self->data.ToCurrencyID, buf, sizeof(self->data.ToCurrencyID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSyncFundMortgageField_getset[] = {
    ///货币质押流水号 
    {(char *)"MortgageSeqNo", (getter)PyCThostFtdcSyncFundMortgageField_get_MortgageSeqNo, (setter)PyCThostFtdcSyncFundMortgageField_set_MortgageSeqNo, (char *)"MortgageSeqNo", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncFundMortgageField_get_BrokerID, (setter)PyCThostFtdcSyncFundMortgageField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncFundMortgageField_get_InvestorID, (setter)PyCThostFtdcSyncFundMortgageField_set_InvestorID, (char *)"InvestorID", NULL},
    ///源币种 
    {(char *)"FromCurrencyID", (getter)PyCThostFtdcSyncFundMortgageField_get_FromCurrencyID, (setter)PyCThostFtdcSyncFundMortgageField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
    ///质押金额 
    {(char *)"MortgageAmount", (getter)PyCThostFtdcSyncFundMortgageField_get_MortgageAmount, (setter)PyCThostFtdcSyncFundMortgageField_set_MortgageAmount, (char *)"MortgageAmount", NULL},
    ///目标币种 
    {(char *)"ToCurrencyID", (getter)PyCThostFtdcSyncFundMortgageField_get_ToCurrencyID, (setter)PyCThostFtdcSyncFundMortgageField_set_ToCurrencyID, (char *)"ToCurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncFundMortgageFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncFundMortgageField",	/* tp_name */
	sizeof(PyCThostFtdcSyncFundMortgageField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncFundMortgageField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncFundMortgageField_repr,   /* tp_repr */
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
	"CThostFtdcSyncFundMortgageField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncFundMortgageField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncFundMortgageField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncFundMortgageField_new,       /* tp_new */
};

int PyCThostFtdcSyncFundMortgageFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncFundMortgageField  */
	if (PyType_Ready(&PyCThostFtdcSyncFundMortgageFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncFundMortgageField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncFundMortgageFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncFundMortgageField", (PyObject *)&PyCThostFtdcSyncFundMortgageFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncFundMortgageField to module");
        Py_DECREF(&PyCThostFtdcSyncFundMortgageFieldType);
		return -1;
    }

    return 0;
}
