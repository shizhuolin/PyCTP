
#include "PyCThostFtdcBrokerTradingParamsField.h"

///经纪公司交易参数

static PyObject *PyCThostFtdcBrokerTradingParamsField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerTradingParamsField *self = (PyCThostFtdcBrokerTradingParamsField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerTradingParamsField_init(PyCThostFtdcBrokerTradingParamsField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "MarginPriceType", "Algorithm", "AvailIncludeCloseProfit", "CurrencyID", "OptionRoyaltyPriceType", "AccountID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerTradingParamsField_BrokerID = NULL;
    Py_ssize_t BrokerTradingParamsField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *BrokerTradingParamsField_InvestorID = NULL;
    Py_ssize_t BrokerTradingParamsField_InvestorID_len = 0;
            
    ///保证金价格类型
    // TThostFtdcMarginPriceTypeType char
    char BrokerTradingParamsField_MarginPriceType = 0;
            
    ///盈亏算法
    // TThostFtdcAlgorithmType char
    char BrokerTradingParamsField_Algorithm = 0;
            
    ///可用是否包含平仓盈利
    // TThostFtdcIncludeCloseProfitType char
    char BrokerTradingParamsField_AvailIncludeCloseProfit = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *BrokerTradingParamsField_CurrencyID = NULL;
    Py_ssize_t BrokerTradingParamsField_CurrencyID_len = 0;
            
    ///期权权利金价格类型
    // TThostFtdcOptionRoyaltyPriceTypeType char
    char BrokerTradingParamsField_OptionRoyaltyPriceType = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *BrokerTradingParamsField_AccountID = NULL;
    Py_ssize_t BrokerTradingParamsField_AccountID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cccy#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cccs#cs#", (char **)kwlist
#endif

        , &BrokerTradingParamsField_BrokerID, &BrokerTradingParamsField_BrokerID_len 
        , &BrokerTradingParamsField_InvestorID, &BrokerTradingParamsField_InvestorID_len 
        , &BrokerTradingParamsField_MarginPriceType 
        , &BrokerTradingParamsField_Algorithm 
        , &BrokerTradingParamsField_AvailIncludeCloseProfit 
        , &BrokerTradingParamsField_CurrencyID, &BrokerTradingParamsField_CurrencyID_len 
        , &BrokerTradingParamsField_OptionRoyaltyPriceType 
        , &BrokerTradingParamsField_AccountID, &BrokerTradingParamsField_AccountID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerTradingParamsField_BrokerID != NULL ) {
        if(BrokerTradingParamsField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerTradingParamsField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerTradingParamsField_BrokerID, BrokerTradingParamsField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerTradingParamsField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerTradingParamsField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( BrokerTradingParamsField_InvestorID != NULL ) {
        if(BrokerTradingParamsField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", BrokerTradingParamsField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, BrokerTradingParamsField_InvestorID, BrokerTradingParamsField_InvestorID_len);        
        strncpy(self->data.InvestorID, BrokerTradingParamsField_InvestorID, sizeof(self->data.InvestorID) );
        BrokerTradingParamsField_InvestorID = NULL;
    }
            
    ///保证金价格类型
    // TThostFtdcMarginPriceTypeType char
    self->data.MarginPriceType = BrokerTradingParamsField_MarginPriceType;
            
    ///盈亏算法
    // TThostFtdcAlgorithmType char
    self->data.Algorithm = BrokerTradingParamsField_Algorithm;
            
    ///可用是否包含平仓盈利
    // TThostFtdcIncludeCloseProfitType char
    self->data.AvailIncludeCloseProfit = BrokerTradingParamsField_AvailIncludeCloseProfit;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( BrokerTradingParamsField_CurrencyID != NULL ) {
        if(BrokerTradingParamsField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", BrokerTradingParamsField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, BrokerTradingParamsField_CurrencyID, BrokerTradingParamsField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, BrokerTradingParamsField_CurrencyID, sizeof(self->data.CurrencyID) );
        BrokerTradingParamsField_CurrencyID = NULL;
    }
            
    ///期权权利金价格类型
    // TThostFtdcOptionRoyaltyPriceTypeType char
    self->data.OptionRoyaltyPriceType = BrokerTradingParamsField_OptionRoyaltyPriceType;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( BrokerTradingParamsField_AccountID != NULL ) {
        if(BrokerTradingParamsField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", BrokerTradingParamsField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, BrokerTradingParamsField_AccountID, BrokerTradingParamsField_AccountID_len);        
        strncpy(self->data.AccountID, BrokerTradingParamsField_AccountID, sizeof(self->data.AccountID) );
        BrokerTradingParamsField_AccountID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcBrokerTradingParamsField_dealloc(PyCThostFtdcBrokerTradingParamsField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_repr(PyCThostFtdcBrokerTradingParamsField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:c,s:c,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:c,s:c,s:s,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"MarginPriceType", self->data.MarginPriceType 
        ,"Algorithm", self->data.Algorithm 
        ,"AvailIncludeCloseProfit", self->data.AvailIncludeCloseProfit 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"OptionRoyaltyPriceType", self->data.OptionRoyaltyPriceType 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingParamsField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_BrokerID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerTradingParamsField_set_BrokerID(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_InvestorID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcBrokerTradingParamsField_set_InvestorID(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
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
            
///保证金价格类型
// TThostFtdcMarginPriceTypeType char
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_MarginPriceType(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.MarginPriceType), 1);
}

///保证金价格类型
// TThostFtdcMarginPriceTypeType char
static int PyCThostFtdcBrokerTradingParamsField_set_MarginPriceType(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginPriceType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MarginPriceType)) {
        PyErr_SetString(PyExc_ValueError, "MarginPriceType must be equal 1 bytes");
        return -1;
    }
    self->data.MarginPriceType = *buf;
    return 0;
}
            
///盈亏算法
// TThostFtdcAlgorithmType char
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_Algorithm(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Algorithm), 1);
}

///盈亏算法
// TThostFtdcAlgorithmType char
static int PyCThostFtdcBrokerTradingParamsField_set_Algorithm(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Algorithm Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Algorithm)) {
        PyErr_SetString(PyExc_ValueError, "Algorithm must be equal 1 bytes");
        return -1;
    }
    self->data.Algorithm = *buf;
    return 0;
}
            
///可用是否包含平仓盈利
// TThostFtdcIncludeCloseProfitType char
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_AvailIncludeCloseProfit(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AvailIncludeCloseProfit), 1);
}

///可用是否包含平仓盈利
// TThostFtdcIncludeCloseProfitType char
static int PyCThostFtdcBrokerTradingParamsField_set_AvailIncludeCloseProfit(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AvailIncludeCloseProfit Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AvailIncludeCloseProfit)) {
        PyErr_SetString(PyExc_ValueError, "AvailIncludeCloseProfit must be equal 1 bytes");
        return -1;
    }
    self->data.AvailIncludeCloseProfit = *buf;
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_CurrencyID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcBrokerTradingParamsField_set_CurrencyID(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
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
            
///期权权利金价格类型
// TThostFtdcOptionRoyaltyPriceTypeType char
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_OptionRoyaltyPriceType(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OptionRoyaltyPriceType), 1);
}

///期权权利金价格类型
// TThostFtdcOptionRoyaltyPriceTypeType char
static int PyCThostFtdcBrokerTradingParamsField_set_OptionRoyaltyPriceType(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionRoyaltyPriceType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OptionRoyaltyPriceType)) {
        PyErr_SetString(PyExc_ValueError, "OptionRoyaltyPriceType must be equal 1 bytes");
        return -1;
    }
    self->data.OptionRoyaltyPriceType = *buf;
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcBrokerTradingParamsField_get_AccountID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcBrokerTradingParamsField_set_AccountID(PyCThostFtdcBrokerTradingParamsField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcBrokerTradingParamsField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerTradingParamsField_get_BrokerID, (setter)PyCThostFtdcBrokerTradingParamsField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcBrokerTradingParamsField_get_InvestorID, (setter)PyCThostFtdcBrokerTradingParamsField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保证金价格类型 
    {(char *)"MarginPriceType", (getter)PyCThostFtdcBrokerTradingParamsField_get_MarginPriceType, (setter)PyCThostFtdcBrokerTradingParamsField_set_MarginPriceType, (char *)"MarginPriceType", NULL},
    ///盈亏算法 
    {(char *)"Algorithm", (getter)PyCThostFtdcBrokerTradingParamsField_get_Algorithm, (setter)PyCThostFtdcBrokerTradingParamsField_set_Algorithm, (char *)"Algorithm", NULL},
    ///可用是否包含平仓盈利 
    {(char *)"AvailIncludeCloseProfit", (getter)PyCThostFtdcBrokerTradingParamsField_get_AvailIncludeCloseProfit, (setter)PyCThostFtdcBrokerTradingParamsField_set_AvailIncludeCloseProfit, (char *)"AvailIncludeCloseProfit", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcBrokerTradingParamsField_get_CurrencyID, (setter)PyCThostFtdcBrokerTradingParamsField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///期权权利金价格类型 
    {(char *)"OptionRoyaltyPriceType", (getter)PyCThostFtdcBrokerTradingParamsField_get_OptionRoyaltyPriceType, (setter)PyCThostFtdcBrokerTradingParamsField_set_OptionRoyaltyPriceType, (char *)"OptionRoyaltyPriceType", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcBrokerTradingParamsField_get_AccountID, (setter)PyCThostFtdcBrokerTradingParamsField_set_AccountID, (char *)"AccountID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerTradingParamsFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerTradingParamsField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerTradingParamsField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerTradingParamsField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerTradingParamsField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerTradingParamsField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerTradingParamsField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerTradingParamsField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerTradingParamsField_new,       /* tp_new */
};

int PyCThostFtdcBrokerTradingParamsFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerTradingParamsField  */
	if (PyType_Ready(&PyCThostFtdcBrokerTradingParamsFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerTradingParamsField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerTradingParamsFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerTradingParamsField", (PyObject *)&PyCThostFtdcBrokerTradingParamsFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerTradingParamsField to module");
        Py_DECREF(&PyCThostFtdcBrokerTradingParamsFieldType);
		return -1;
    }

    return 0;
}
