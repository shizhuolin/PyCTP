
#include "PyCThostFtdcTradingAccountReserveField.h"

///资金账户基本准备金

static PyObject *PyCThostFtdcTradingAccountReserveField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountReserveField *self = (PyCThostFtdcTradingAccountReserveField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountReserveField_init(PyCThostFtdcTradingAccountReserveField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "Reserve", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingAccountReserveField_BrokerID = NULL;
    Py_ssize_t TradingAccountReserveField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *TradingAccountReserveField_AccountID = NULL;
    Py_ssize_t TradingAccountReserveField_AccountID_len = 0;
            
    ///基本准备金
    // TThostFtdcMoneyType double
    double TradingAccountReserveField_Reserve = 0.0;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *TradingAccountReserveField_CurrencyID = NULL;
    Py_ssize_t TradingAccountReserveField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#", (char **)kwlist
#endif

        , &TradingAccountReserveField_BrokerID, &TradingAccountReserveField_BrokerID_len 
        , &TradingAccountReserveField_AccountID, &TradingAccountReserveField_AccountID_len 
        , &TradingAccountReserveField_Reserve 
        , &TradingAccountReserveField_CurrencyID, &TradingAccountReserveField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingAccountReserveField_BrokerID != NULL ) {
        if(TradingAccountReserveField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingAccountReserveField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingAccountReserveField_BrokerID, TradingAccountReserveField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingAccountReserveField_BrokerID, sizeof(self->data.BrokerID) );
        TradingAccountReserveField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( TradingAccountReserveField_AccountID != NULL ) {
        if(TradingAccountReserveField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", TradingAccountReserveField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, TradingAccountReserveField_AccountID, TradingAccountReserveField_AccountID_len);        
        strncpy(self->data.AccountID, TradingAccountReserveField_AccountID, sizeof(self->data.AccountID) );
        TradingAccountReserveField_AccountID = NULL;
    }
            
    ///基本准备金
    // TThostFtdcMoneyType double
    self->data.Reserve = TradingAccountReserveField_Reserve;
        
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( TradingAccountReserveField_CurrencyID != NULL ) {
        if(TradingAccountReserveField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", TradingAccountReserveField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, TradingAccountReserveField_CurrencyID, TradingAccountReserveField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, TradingAccountReserveField_CurrencyID, sizeof(self->data.CurrencyID) );
        TradingAccountReserveField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradingAccountReserveField_dealloc(PyCThostFtdcTradingAccountReserveField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountReserveField_repr(PyCThostFtdcTradingAccountReserveField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Reserve", self->data.Reserve 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountReserveField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingAccountReserveField_get_BrokerID(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingAccountReserveField_set_BrokerID(PyCThostFtdcTradingAccountReserveField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcTradingAccountReserveField_get_AccountID(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTradingAccountReserveField_set_AccountID(PyCThostFtdcTradingAccountReserveField *self, PyObject* val, void *closure) {
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
            
///基本准备金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcTradingAccountReserveField_get_Reserve(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Reserve);
}

///基本准备金
// TThostFtdcMoneyType double
static int PyCThostFtdcTradingAccountReserveField_set_Reserve(PyCThostFtdcTradingAccountReserveField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reserve Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Reserve = buf;
    return 0;
}
        
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcTradingAccountReserveField_get_CurrencyID(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcTradingAccountReserveField_set_CurrencyID(PyCThostFtdcTradingAccountReserveField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTradingAccountReserveField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountReserveField_get_BrokerID, (setter)PyCThostFtdcTradingAccountReserveField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountReserveField_get_AccountID, (setter)PyCThostFtdcTradingAccountReserveField_set_AccountID, (char *)"AccountID", NULL},
    ///基本准备金 
    {(char *)"Reserve", (getter)PyCThostFtdcTradingAccountReserveField_get_Reserve, (setter)PyCThostFtdcTradingAccountReserveField_set_Reserve, (char *)"Reserve", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountReserveField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountReserveField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountReserveFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountReserveField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountReserveField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountReserveField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountReserveField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountReserveField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountReserveField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountReserveField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountReserveField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountReserveFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountReserveField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountReserveFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountReserveField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountReserveFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountReserveField", (PyObject *)&PyCThostFtdcTradingAccountReserveFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountReserveField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountReserveFieldType);
		return -1;
    }

    return 0;
}
