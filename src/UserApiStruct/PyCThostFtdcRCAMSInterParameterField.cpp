
#include "PyCThostFtdcRCAMSInterParameterField.h"

///RCAMS跨品种风险折抵参数

static PyObject *PyCThostFtdcRCAMSInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSInterParameterField *self = (PyCThostFtdcRCAMSInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSInterParameterField_init(PyCThostFtdcRCAMSInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductGroupID", "Priority", "CreditRate", "CombProduct1", "CombProduct2",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *RCAMSInterParameterField_TradingDay = NULL;
    Py_ssize_t RCAMSInterParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RCAMSInterParameterField_ExchangeID = NULL;
    Py_ssize_t RCAMSInterParameterField_ExchangeID_len = 0;
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    const char *RCAMSInterParameterField_ProductGroupID = NULL;
    Py_ssize_t RCAMSInterParameterField_ProductGroupID_len = 0;
            
    ///优先级
    // TThostFtdcRCAMSPriorityType int
    int RCAMSInterParameterField_Priority = 0;
        
    ///折抵率
    // TThostFtdcHedgeRateType double
    double RCAMSInterParameterField_CreditRate = 0.0;
        
    ///产品组合代码1
    // TThostFtdcProductIDType char[41]
    const char *RCAMSInterParameterField_CombProduct1 = NULL;
    Py_ssize_t RCAMSInterParameterField_CombProduct1_len = 0;
            
    ///产品组合代码2
    // TThostFtdcProductIDType char[41]
    const char *RCAMSInterParameterField_CombProduct2 = NULL;
    Py_ssize_t RCAMSInterParameterField_CombProduct2_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#idy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ids#s#", (char **)kwlist
#endif

        , &RCAMSInterParameterField_TradingDay, &RCAMSInterParameterField_TradingDay_len 
        , &RCAMSInterParameterField_ExchangeID, &RCAMSInterParameterField_ExchangeID_len 
        , &RCAMSInterParameterField_ProductGroupID, &RCAMSInterParameterField_ProductGroupID_len 
        , &RCAMSInterParameterField_Priority 
        , &RCAMSInterParameterField_CreditRate 
        , &RCAMSInterParameterField_CombProduct1, &RCAMSInterParameterField_CombProduct1_len 
        , &RCAMSInterParameterField_CombProduct2, &RCAMSInterParameterField_CombProduct2_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( RCAMSInterParameterField_TradingDay != NULL ) {
        if(RCAMSInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RCAMSInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RCAMSInterParameterField_TradingDay, RCAMSInterParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, RCAMSInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
        RCAMSInterParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RCAMSInterParameterField_ExchangeID != NULL ) {
        if(RCAMSInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RCAMSInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RCAMSInterParameterField_ExchangeID, RCAMSInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RCAMSInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        RCAMSInterParameterField_ExchangeID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    if( RCAMSInterParameterField_ProductGroupID != NULL ) {
        if(RCAMSInterParameterField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", RCAMSInterParameterField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, RCAMSInterParameterField_ProductGroupID, RCAMSInterParameterField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, RCAMSInterParameterField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        RCAMSInterParameterField_ProductGroupID = NULL;
    }
            
    ///优先级
    // TThostFtdcRCAMSPriorityType int
    self->data.Priority = RCAMSInterParameterField_Priority;
        
    ///折抵率
    // TThostFtdcHedgeRateType double
    self->data.CreditRate = RCAMSInterParameterField_CreditRate;
        
    ///产品组合代码1
    // TThostFtdcProductIDType char[41]
    if( RCAMSInterParameterField_CombProduct1 != NULL ) {
        if(RCAMSInterParameterField_CombProduct1_len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
            PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is %zd)", RCAMSInterParameterField_CombProduct1_len, (Py_ssize_t)sizeof(self->data.CombProduct1));
            return -1;
        }
        // memset(self->data.CombProduct1, 0, sizeof(self->data.CombProduct1));
        // memcpy(self->data.CombProduct1, RCAMSInterParameterField_CombProduct1, RCAMSInterParameterField_CombProduct1_len);        
        strncpy(self->data.CombProduct1, RCAMSInterParameterField_CombProduct1, sizeof(self->data.CombProduct1) );
        RCAMSInterParameterField_CombProduct1 = NULL;
    }
            
    ///产品组合代码2
    // TThostFtdcProductIDType char[41]
    if( RCAMSInterParameterField_CombProduct2 != NULL ) {
        if(RCAMSInterParameterField_CombProduct2_len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
            PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is %zd)", RCAMSInterParameterField_CombProduct2_len, (Py_ssize_t)sizeof(self->data.CombProduct2));
            return -1;
        }
        // memset(self->data.CombProduct2, 0, sizeof(self->data.CombProduct2));
        // memcpy(self->data.CombProduct2, RCAMSInterParameterField_CombProduct2, RCAMSInterParameterField_CombProduct2_len);        
        strncpy(self->data.CombProduct2, RCAMSInterParameterField_CombProduct2, sizeof(self->data.CombProduct2) );
        RCAMSInterParameterField_CombProduct2 = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRCAMSInterParameterField_dealloc(PyCThostFtdcRCAMSInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_repr(PyCThostFtdcRCAMSInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:d,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 
        ,"Priority", self->data.Priority 
        ,"CreditRate", self->data.CreditRate 
        ,"CombProduct1", self->data.CombProduct1//, (Py_ssize_t)sizeof(self->data.CombProduct1) 
        ,"CombProduct2", self->data.CombProduct2//, (Py_ssize_t)sizeof(self->data.CombProduct2) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRCAMSInterParameterField_get_TradingDay(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRCAMSInterParameterField_set_TradingDay(PyCThostFtdcRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcRCAMSInterParameterField_get_ExchangeID(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRCAMSInterParameterField_set_ExchangeID(PyCThostFtdcRCAMSInterParameterField *self, PyObject* val, void *closure) {
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
            
///商品群代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcRCAMSInterParameterField_get_ProductGroupID(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///商品群代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcRCAMSInterParameterField_set_ProductGroupID(PyCThostFtdcRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
    // memcpy(self->data.ProductGroupID, buf, len);
    strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
    return 0;
}
            
///优先级
// TThostFtdcRCAMSPriorityType int
static PyObject *PyCThostFtdcRCAMSInterParameterField_get_Priority(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Priority);
#else
    return PyInt_FromLong(self->data.Priority);
#endif
}

///优先级
// TThostFtdcRCAMSPriorityType int
static int PyCThostFtdcRCAMSInterParameterField_set_Priority(PyCThostFtdcRCAMSInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the Priority value out of range for C int");
        return -1;
    }
    self->data.Priority = (int)buf;
    return 0;
}
        
///折抵率
// TThostFtdcHedgeRateType double
static PyObject *PyCThostFtdcRCAMSInterParameterField_get_CreditRate(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CreditRate);
}

///折抵率
// TThostFtdcHedgeRateType double
static int PyCThostFtdcRCAMSInterParameterField_set_CreditRate(PyCThostFtdcRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreditRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CreditRate = buf;
    return 0;
}
        
///产品组合代码1
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcRCAMSInterParameterField_get_CombProduct1(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProduct1, (Py_ssize_t)sizeof(self->data.CombProduct1));
    return PyBytes_FromString(self->data.CombProduct1);
}

///产品组合代码1
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcRCAMSInterParameterField_set_CombProduct1(PyCThostFtdcRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProduct1, 0, sizeof(self->data.CombProduct1));
    // memcpy(self->data.CombProduct1, buf, len);
    strncpy(self->data.CombProduct1, buf, sizeof(self->data.CombProduct1));
    return 0;
}
            
///产品组合代码2
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcRCAMSInterParameterField_get_CombProduct2(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProduct2, (Py_ssize_t)sizeof(self->data.CombProduct2));
    return PyBytes_FromString(self->data.CombProduct2);
}

///产品组合代码2
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcRCAMSInterParameterField_set_CombProduct2(PyCThostFtdcRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProduct2, 0, sizeof(self->data.CombProduct2));
    // memcpy(self->data.CombProduct2, buf, len);
    strncpy(self->data.CombProduct2, buf, sizeof(self->data.CombProduct2));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcRCAMSInterParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRCAMSInterParameterField_get_TradingDay, (setter)PyCThostFtdcRCAMSInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSInterParameterField_get_ExchangeID, (setter)PyCThostFtdcRCAMSInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///商品群代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcRCAMSInterParameterField_get_ProductGroupID, (setter)PyCThostFtdcRCAMSInterParameterField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
    ///优先级 
    {(char *)"Priority", (getter)PyCThostFtdcRCAMSInterParameterField_get_Priority, (setter)PyCThostFtdcRCAMSInterParameterField_set_Priority, (char *)"Priority", NULL},
    ///折抵率 
    {(char *)"CreditRate", (getter)PyCThostFtdcRCAMSInterParameterField_get_CreditRate, (setter)PyCThostFtdcRCAMSInterParameterField_set_CreditRate, (char *)"CreditRate", NULL},
    ///产品组合代码1 
    {(char *)"CombProduct1", (getter)PyCThostFtdcRCAMSInterParameterField_get_CombProduct1, (setter)PyCThostFtdcRCAMSInterParameterField_set_CombProduct1, (char *)"CombProduct1", NULL},
    ///产品组合代码2 
    {(char *)"CombProduct2", (getter)PyCThostFtdcRCAMSInterParameterField_get_CombProduct2, (setter)PyCThostFtdcRCAMSInterParameterField_set_CombProduct2, (char *)"CombProduct2", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSInterParameterField", (PyObject *)&PyCThostFtdcRCAMSInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInterParameterField to module");
        Py_DECREF(&PyCThostFtdcRCAMSInterParameterFieldType);
		return -1;
    }

    return 0;
}
