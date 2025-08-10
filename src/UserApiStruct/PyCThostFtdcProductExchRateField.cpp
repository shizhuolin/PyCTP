
#include "PyCThostFtdcProductExchRateField.h"

///产品报价汇率

static PyObject *PyCThostFtdcProductExchRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcProductExchRateField *self = (PyCThostFtdcProductExchRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcProductExchRateField_init(PyCThostFtdcProductExchRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "QuoteCurrencyID", "ExchangeRate", "ExchangeID", "ProductID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ProductExchRateField_reserve1 = NULL;
    Py_ssize_t ProductExchRateField_reserve1_len = 0;
            
    ///报价币种类型
    // TThostFtdcCurrencyIDType char[4]
    const char *ProductExchRateField_QuoteCurrencyID = NULL;
    Py_ssize_t ProductExchRateField_QuoteCurrencyID_len = 0;
            
    ///汇率
    // TThostFtdcExchangeRateType double
    double ProductExchRateField_ExchangeRate = 0.0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ProductExchRateField_ExchangeID = NULL;
    Py_ssize_t ProductExchRateField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ProductExchRateField_ProductID = NULL;
    Py_ssize_t ProductExchRateField_ProductID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#s#", (char **)kwlist
#endif

        , &ProductExchRateField_reserve1, &ProductExchRateField_reserve1_len 
        , &ProductExchRateField_QuoteCurrencyID, &ProductExchRateField_QuoteCurrencyID_len 
        , &ProductExchRateField_ExchangeRate 
        , &ProductExchRateField_ExchangeID, &ProductExchRateField_ExchangeID_len 
        , &ProductExchRateField_ProductID, &ProductExchRateField_ProductID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ProductExchRateField_reserve1 != NULL ) {
        if(ProductExchRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ProductExchRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ProductExchRateField_reserve1, ProductExchRateField_reserve1_len);        
        strncpy(self->data.reserve1, ProductExchRateField_reserve1, sizeof(self->data.reserve1) );
        ProductExchRateField_reserve1 = NULL;
    }
            
    ///报价币种类型
    // TThostFtdcCurrencyIDType char[4]
    if( ProductExchRateField_QuoteCurrencyID != NULL ) {
        if(ProductExchRateField_QuoteCurrencyID_len > (Py_ssize_t)sizeof(self->data.QuoteCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "QuoteCurrencyID too long: length=%zd (max allowed is %zd)", ProductExchRateField_QuoteCurrencyID_len, (Py_ssize_t)sizeof(self->data.QuoteCurrencyID));
            return -1;
        }
        // memset(self->data.QuoteCurrencyID, 0, sizeof(self->data.QuoteCurrencyID));
        // memcpy(self->data.QuoteCurrencyID, ProductExchRateField_QuoteCurrencyID, ProductExchRateField_QuoteCurrencyID_len);        
        strncpy(self->data.QuoteCurrencyID, ProductExchRateField_QuoteCurrencyID, sizeof(self->data.QuoteCurrencyID) );
        ProductExchRateField_QuoteCurrencyID = NULL;
    }
            
    ///汇率
    // TThostFtdcExchangeRateType double
    self->data.ExchangeRate = ProductExchRateField_ExchangeRate;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ProductExchRateField_ExchangeID != NULL ) {
        if(ProductExchRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ProductExchRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ProductExchRateField_ExchangeID, ProductExchRateField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ProductExchRateField_ExchangeID, sizeof(self->data.ExchangeID) );
        ProductExchRateField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( ProductExchRateField_ProductID != NULL ) {
        if(ProductExchRateField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", ProductExchRateField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, ProductExchRateField_ProductID, ProductExchRateField_ProductID_len);        
        strncpy(self->data.ProductID, ProductExchRateField_ProductID, sizeof(self->data.ProductID) );
        ProductExchRateField_ProductID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcProductExchRateField_dealloc(PyCThostFtdcProductExchRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcProductExchRateField_repr(PyCThostFtdcProductExchRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"QuoteCurrencyID", self->data.QuoteCurrencyID//, (Py_ssize_t)sizeof(self->data.QuoteCurrencyID) 
        ,"ExchangeRate", self->data.ExchangeRate 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductExchRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcProductExchRateField_get_reserve1(PyCThostFtdcProductExchRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcProductExchRateField_set_reserve1(PyCThostFtdcProductExchRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///报价币种类型
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcProductExchRateField_get_QuoteCurrencyID(PyCThostFtdcProductExchRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.QuoteCurrencyID, (Py_ssize_t)sizeof(self->data.QuoteCurrencyID));
    return PyBytes_FromString(self->data.QuoteCurrencyID);
}

///报价币种类型
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcProductExchRateField_set_QuoteCurrencyID(PyCThostFtdcProductExchRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QuoteCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.QuoteCurrencyID, 0, sizeof(self->data.QuoteCurrencyID));
    // memcpy(self->data.QuoteCurrencyID, buf, len);
    strncpy(self->data.QuoteCurrencyID, buf, sizeof(self->data.QuoteCurrencyID));
    return 0;
}
            
///汇率
// TThostFtdcExchangeRateType double
static PyObject *PyCThostFtdcProductExchRateField_get_ExchangeRate(PyCThostFtdcProductExchRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchangeRate);
}

///汇率
// TThostFtdcExchangeRateType double
static int PyCThostFtdcProductExchRateField_set_ExchangeRate(PyCThostFtdcProductExchRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchangeRate = buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcProductExchRateField_get_ExchangeID(PyCThostFtdcProductExchRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcProductExchRateField_set_ExchangeID(PyCThostFtdcProductExchRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcProductExchRateField_get_ProductID(PyCThostFtdcProductExchRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcProductExchRateField_set_ProductID(PyCThostFtdcProductExchRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcProductExchRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcProductExchRateField_get_reserve1, (setter)PyCThostFtdcProductExchRateField_set_reserve1, (char *)"reserve1", NULL},
    ///报价币种类型 
    {(char *)"QuoteCurrencyID", (getter)PyCThostFtdcProductExchRateField_get_QuoteCurrencyID, (setter)PyCThostFtdcProductExchRateField_set_QuoteCurrencyID, (char *)"QuoteCurrencyID", NULL},
    ///汇率 
    {(char *)"ExchangeRate", (getter)PyCThostFtdcProductExchRateField_get_ExchangeRate, (setter)PyCThostFtdcProductExchRateField_set_ExchangeRate, (char *)"ExchangeRate", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcProductExchRateField_get_ExchangeID, (setter)PyCThostFtdcProductExchRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcProductExchRateField_get_ProductID, (setter)PyCThostFtdcProductExchRateField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcProductExchRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcProductExchRateField",	/* tp_name */
	sizeof(PyCThostFtdcProductExchRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcProductExchRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcProductExchRateField_repr,   /* tp_repr */
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
	"CThostFtdcProductExchRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcProductExchRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcProductExchRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcProductExchRateField_new,       /* tp_new */
};

int PyCThostFtdcProductExchRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcProductExchRateField  */
	if (PyType_Ready(&PyCThostFtdcProductExchRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcProductExchRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcProductExchRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcProductExchRateField", (PyObject *)&PyCThostFtdcProductExchRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductExchRateField to module");
        Py_DECREF(&PyCThostFtdcProductExchRateFieldType);
		return -1;
    }

    return 0;
}
