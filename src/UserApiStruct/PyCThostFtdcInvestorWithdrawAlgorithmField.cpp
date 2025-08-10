
#include "PyCThostFtdcInvestorWithdrawAlgorithmField.h"

///经纪公司可提资金算法表

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorWithdrawAlgorithmField *self = (PyCThostFtdcInvestorWithdrawAlgorithmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorWithdrawAlgorithmField_init(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorRange", "InvestorID", "UsingRatio", "CurrencyID", "FundMortgageRatio",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InvestorWithdrawAlgorithmField_BrokerID = NULL;
    Py_ssize_t InvestorWithdrawAlgorithmField_BrokerID_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char InvestorWithdrawAlgorithmField_InvestorRange = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InvestorWithdrawAlgorithmField_InvestorID = NULL;
    Py_ssize_t InvestorWithdrawAlgorithmField_InvestorID_len = 0;
            
    ///可提资金比例
    // TThostFtdcRatioType double
    double InvestorWithdrawAlgorithmField_UsingRatio = 0.0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *InvestorWithdrawAlgorithmField_CurrencyID = NULL;
    Py_ssize_t InvestorWithdrawAlgorithmField_CurrencyID_len = 0;
            
    ///货币质押比率
    // TThostFtdcRatioType double
    double InvestorWithdrawAlgorithmField_FundMortgageRatio = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#dy#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#ds#d", (char **)kwlist
#endif

        , &InvestorWithdrawAlgorithmField_BrokerID, &InvestorWithdrawAlgorithmField_BrokerID_len 
        , &InvestorWithdrawAlgorithmField_InvestorRange 
        , &InvestorWithdrawAlgorithmField_InvestorID, &InvestorWithdrawAlgorithmField_InvestorID_len 
        , &InvestorWithdrawAlgorithmField_UsingRatio 
        , &InvestorWithdrawAlgorithmField_CurrencyID, &InvestorWithdrawAlgorithmField_CurrencyID_len 
        , &InvestorWithdrawAlgorithmField_FundMortgageRatio 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InvestorWithdrawAlgorithmField_BrokerID != NULL ) {
        if(InvestorWithdrawAlgorithmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InvestorWithdrawAlgorithmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InvestorWithdrawAlgorithmField_BrokerID, InvestorWithdrawAlgorithmField_BrokerID_len);        
        strncpy(self->data.BrokerID, InvestorWithdrawAlgorithmField_BrokerID, sizeof(self->data.BrokerID) );
        InvestorWithdrawAlgorithmField_BrokerID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = InvestorWithdrawAlgorithmField_InvestorRange;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InvestorWithdrawAlgorithmField_InvestorID != NULL ) {
        if(InvestorWithdrawAlgorithmField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InvestorWithdrawAlgorithmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InvestorWithdrawAlgorithmField_InvestorID, InvestorWithdrawAlgorithmField_InvestorID_len);        
        strncpy(self->data.InvestorID, InvestorWithdrawAlgorithmField_InvestorID, sizeof(self->data.InvestorID) );
        InvestorWithdrawAlgorithmField_InvestorID = NULL;
    }
            
    ///可提资金比例
    // TThostFtdcRatioType double
    self->data.UsingRatio = InvestorWithdrawAlgorithmField_UsingRatio;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( InvestorWithdrawAlgorithmField_CurrencyID != NULL ) {
        if(InvestorWithdrawAlgorithmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", InvestorWithdrawAlgorithmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, InvestorWithdrawAlgorithmField_CurrencyID, InvestorWithdrawAlgorithmField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, InvestorWithdrawAlgorithmField_CurrencyID, sizeof(self->data.CurrencyID) );
        InvestorWithdrawAlgorithmField_CurrencyID = NULL;
    }
            
    ///货币质押比率
    // TThostFtdcRatioType double
    self->data.FundMortgageRatio = InvestorWithdrawAlgorithmField_FundMortgageRatio;
        

    return 0;
}

static void PyCThostFtdcInvestorWithdrawAlgorithmField_dealloc(PyCThostFtdcInvestorWithdrawAlgorithmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_repr(PyCThostFtdcInvestorWithdrawAlgorithmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:d,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:d,s:s,s:d}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"UsingRatio", self->data.UsingRatio 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"FundMortgageRatio", self->data.FundMortgageRatio 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorWithdrawAlgorithmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_BrokerID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_BrokerID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorRange(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorRange(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    self->data.InvestorRange = *buf;
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject* val, void *closure) {
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
            
///可提资金比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_UsingRatio(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UsingRatio);
}

///可提资金比例
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_UsingRatio(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsingRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UsingRatio = buf;
    return 0;
}
        
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_CurrencyID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_CurrencyID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject* val, void *closure) {
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
            
///货币质押比率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_FundMortgageRatio(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
    return PyFloat_FromDouble(self->data.FundMortgageRatio);
}

///货币质押比率
// TThostFtdcRatioType double
static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_FundMortgageRatio(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageRatio = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcInvestorWithdrawAlgorithmField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_BrokerID, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorRange, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorID, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorID, (char *)"InvestorID", NULL},
    ///可提资金比例 
    {(char *)"UsingRatio", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_UsingRatio, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_UsingRatio, (char *)"UsingRatio", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_CurrencyID, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///货币质押比率 
    {(char *)"FundMortgageRatio", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_FundMortgageRatio, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_FundMortgageRatio, (char *)"FundMortgageRatio", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorWithdrawAlgorithmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorWithdrawAlgorithmField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorWithdrawAlgorithmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorWithdrawAlgorithmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorWithdrawAlgorithmField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorWithdrawAlgorithmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorWithdrawAlgorithmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorWithdrawAlgorithmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorWithdrawAlgorithmField_new,       /* tp_new */
};

int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorWithdrawAlgorithmField  */
	if (PyType_Ready(&PyCThostFtdcInvestorWithdrawAlgorithmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorWithdrawAlgorithmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorWithdrawAlgorithmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorWithdrawAlgorithmField", (PyObject *)&PyCThostFtdcInvestorWithdrawAlgorithmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorWithdrawAlgorithmField to module");
        Py_DECREF(&PyCThostFtdcInvestorWithdrawAlgorithmFieldType);
		return -1;
    }

    return 0;
}
