
#include "PyCThostFtdcMarketDataBaseField.h"

///行情基础属性

static PyObject *PyCThostFtdcMarketDataBaseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataBaseField *self = (PyCThostFtdcMarketDataBaseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataBaseField_init(PyCThostFtdcMarketDataBaseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "PreDelta",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *MarketDataBaseField_TradingDay = NULL;
    Py_ssize_t MarketDataBaseField_TradingDay_len = 0;
            
    ///上次结算价
    // TThostFtdcPriceType double
    double MarketDataBaseField_PreSettlementPrice = 0.0;
        
    ///昨收盘
    // TThostFtdcPriceType double
    double MarketDataBaseField_PreClosePrice = 0.0;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    double MarketDataBaseField_PreOpenInterest = 0.0;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    double MarketDataBaseField_PreDelta = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#dddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#dddd", (char **)kwlist
#endif

        , &MarketDataBaseField_TradingDay, &MarketDataBaseField_TradingDay_len 
        , &MarketDataBaseField_PreSettlementPrice 
        , &MarketDataBaseField_PreClosePrice 
        , &MarketDataBaseField_PreOpenInterest 
        , &MarketDataBaseField_PreDelta 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( MarketDataBaseField_TradingDay != NULL ) {
        if(MarketDataBaseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", MarketDataBaseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, MarketDataBaseField_TradingDay, MarketDataBaseField_TradingDay_len);        
        strncpy(self->data.TradingDay, MarketDataBaseField_TradingDay, sizeof(self->data.TradingDay) );
        MarketDataBaseField_TradingDay = NULL;
    }
            
    ///上次结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = MarketDataBaseField_PreSettlementPrice;
        
    ///昨收盘
    // TThostFtdcPriceType double
    self->data.PreClosePrice = MarketDataBaseField_PreClosePrice;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    self->data.PreOpenInterest = MarketDataBaseField_PreOpenInterest;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    self->data.PreDelta = MarketDataBaseField_PreDelta;
        

    return 0;
}

static void PyCThostFtdcMarketDataBaseField_dealloc(PyCThostFtdcMarketDataBaseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataBaseField_repr(PyCThostFtdcMarketDataBaseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:d,s:d,s:d,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"PreSettlementPrice", self->data.PreSettlementPrice 
        ,"PreClosePrice", self->data.PreClosePrice 
        ,"PreOpenInterest", self->data.PreOpenInterest 
        ,"PreDelta", self->data.PreDelta 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBaseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcMarketDataBaseField_get_TradingDay(PyCThostFtdcMarketDataBaseField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcMarketDataBaseField_set_TradingDay(PyCThostFtdcMarketDataBaseField *self, PyObject* val, void *closure) {
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
            
///上次结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBaseField_get_PreSettlementPrice(PyCThostFtdcMarketDataBaseField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///上次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBaseField_set_PreSettlementPrice(PyCThostFtdcMarketDataBaseField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}
        
///昨收盘
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcMarketDataBaseField_get_PreClosePrice(PyCThostFtdcMarketDataBaseField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreClosePrice);
}

///昨收盘
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataBaseField_set_PreClosePrice(PyCThostFtdcMarketDataBaseField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreClosePrice = buf;
    return 0;
}
        
///昨持仓量
// TThostFtdcLargeVolumeType double
static PyObject *PyCThostFtdcMarketDataBaseField_get_PreOpenInterest(PyCThostFtdcMarketDataBaseField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreOpenInterest);
}

///昨持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcMarketDataBaseField_set_PreOpenInterest(PyCThostFtdcMarketDataBaseField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreOpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreOpenInterest = buf;
    return 0;
}
        
///昨虚实度
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcMarketDataBaseField_get_PreDelta(PyCThostFtdcMarketDataBaseField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreDelta);
}

///昨虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcMarketDataBaseField_set_PreDelta(PyCThostFtdcMarketDataBaseField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreDelta = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcMarketDataBaseField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcMarketDataBaseField_get_TradingDay, (setter)PyCThostFtdcMarketDataBaseField_set_TradingDay, (char *)"TradingDay", NULL},
    ///上次结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcMarketDataBaseField_get_PreSettlementPrice, (setter)PyCThostFtdcMarketDataBaseField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///昨收盘 
    {(char *)"PreClosePrice", (getter)PyCThostFtdcMarketDataBaseField_get_PreClosePrice, (setter)PyCThostFtdcMarketDataBaseField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
    ///昨持仓量 
    {(char *)"PreOpenInterest", (getter)PyCThostFtdcMarketDataBaseField_get_PreOpenInterest, (setter)PyCThostFtdcMarketDataBaseField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
    ///昨虚实度 
    {(char *)"PreDelta", (getter)PyCThostFtdcMarketDataBaseField_get_PreDelta, (setter)PyCThostFtdcMarketDataBaseField_set_PreDelta, (char *)"PreDelta", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataBaseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataBaseField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataBaseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataBaseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataBaseField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataBaseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataBaseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataBaseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataBaseField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataBaseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataBaseField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataBaseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataBaseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataBaseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataBaseField", (PyObject *)&PyCThostFtdcMarketDataBaseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBaseField to module");
        Py_DECREF(&PyCThostFtdcMarketDataBaseFieldType);
		return -1;
    }

    return 0;
}
