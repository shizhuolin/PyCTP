
#include "PyCThostFtdcRULEIntraParameterField.h"

///RULE品种内对锁仓折扣参数

static PyObject *PyCThostFtdcRULEIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRULEIntraParameterField *self = (PyCThostFtdcRULEIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRULEIntraParameterField_init(PyCThostFtdcRULEIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdFamilyCode", "StdInstrumentID", "StdInstrMargin", "UsualIntraRate", "DeliveryIntraRate",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *RULEIntraParameterField_TradingDay = NULL;
    Py_ssize_t RULEIntraParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RULEIntraParameterField_ExchangeID = NULL;
    Py_ssize_t RULEIntraParameterField_ExchangeID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *RULEIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t RULEIntraParameterField_ProdFamilyCode_len = 0;
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    const char *RULEIntraParameterField_StdInstrumentID = NULL;
    Py_ssize_t RULEIntraParameterField_StdInstrumentID_len = 0;
            
    ///标准合约保证金
    // TThostFtdcMoneyType double
    double RULEIntraParameterField_StdInstrMargin = 0.0;
        
    ///一般月份合约组合保证金系数
    // TThostFtdcRatioType double
    double RULEIntraParameterField_UsualIntraRate = 0.0;
        
    ///临近交割合约组合保证金系数
    // TThostFtdcRatioType double
    double RULEIntraParameterField_DeliveryIntraRate = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddd", (char **)kwlist
#endif

        , &RULEIntraParameterField_TradingDay, &RULEIntraParameterField_TradingDay_len 
        , &RULEIntraParameterField_ExchangeID, &RULEIntraParameterField_ExchangeID_len 
        , &RULEIntraParameterField_ProdFamilyCode, &RULEIntraParameterField_ProdFamilyCode_len 
        , &RULEIntraParameterField_StdInstrumentID, &RULEIntraParameterField_StdInstrumentID_len 
        , &RULEIntraParameterField_StdInstrMargin 
        , &RULEIntraParameterField_UsualIntraRate 
        , &RULEIntraParameterField_DeliveryIntraRate 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( RULEIntraParameterField_TradingDay != NULL ) {
        if(RULEIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RULEIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RULEIntraParameterField_TradingDay, RULEIntraParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, RULEIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
        RULEIntraParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RULEIntraParameterField_ExchangeID != NULL ) {
        if(RULEIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RULEIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RULEIntraParameterField_ExchangeID, RULEIntraParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RULEIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        RULEIntraParameterField_ExchangeID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( RULEIntraParameterField_ProdFamilyCode != NULL ) {
        if(RULEIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", RULEIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, RULEIntraParameterField_ProdFamilyCode, RULEIntraParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, RULEIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        RULEIntraParameterField_ProdFamilyCode = NULL;
    }
            
    ///标准合约
    // TThostFtdcInstrumentIDType char[81]
    if( RULEIntraParameterField_StdInstrumentID != NULL ) {
        if(RULEIntraParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", RULEIntraParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
            return -1;
        }
        // memset(self->data.StdInstrumentID, 0, sizeof(self->data.StdInstrumentID));
        // memcpy(self->data.StdInstrumentID, RULEIntraParameterField_StdInstrumentID, RULEIntraParameterField_StdInstrumentID_len);        
        strncpy(self->data.StdInstrumentID, RULEIntraParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
        RULEIntraParameterField_StdInstrumentID = NULL;
    }
            
    ///标准合约保证金
    // TThostFtdcMoneyType double
    self->data.StdInstrMargin = RULEIntraParameterField_StdInstrMargin;
        
    ///一般月份合约组合保证金系数
    // TThostFtdcRatioType double
    self->data.UsualIntraRate = RULEIntraParameterField_UsualIntraRate;
        
    ///临近交割合约组合保证金系数
    // TThostFtdcRatioType double
    self->data.DeliveryIntraRate = RULEIntraParameterField_DeliveryIntraRate;
        

    return 0;
}

static void PyCThostFtdcRULEIntraParameterField_dealloc(PyCThostFtdcRULEIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_repr(PyCThostFtdcRULEIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"StdInstrumentID", self->data.StdInstrumentID//, (Py_ssize_t)sizeof(self->data.StdInstrumentID) 
        ,"StdInstrMargin", self->data.StdInstrMargin 
        ,"UsualIntraRate", self->data.UsualIntraRate 
        ,"DeliveryIntraRate", self->data.DeliveryIntraRate 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRULEIntraParameterField_get_TradingDay(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRULEIntraParameterField_set_TradingDay(PyCThostFtdcRULEIntraParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRULEIntraParameterField_get_ExchangeID(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRULEIntraParameterField_set_ExchangeID(PyCThostFtdcRULEIntraParameterField *self, PyObject* val, void *closure) {
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
            
///品种代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcRULEIntraParameterField_get_ProdFamilyCode(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRULEIntraParameterField_set_ProdFamilyCode(PyCThostFtdcRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
    // memcpy(self->data.ProdFamilyCode, buf, len);
    strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
    return 0;
}
            
///标准合约
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcRULEIntraParameterField_get_StdInstrumentID(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.StdInstrumentID, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
    return PyBytes_FromString(self->data.StdInstrumentID);
}

///标准合约
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRULEIntraParameterField_set_StdInstrumentID(PyCThostFtdcRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.StdInstrumentID, 0, sizeof(self->data.StdInstrumentID));
    // memcpy(self->data.StdInstrumentID, buf, len);
    strncpy(self->data.StdInstrumentID, buf, sizeof(self->data.StdInstrumentID));
    return 0;
}
            
///标准合约保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcRULEIntraParameterField_get_StdInstrMargin(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StdInstrMargin);
}

///标准合约保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRULEIntraParameterField_set_StdInstrMargin(PyCThostFtdcRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StdInstrMargin = buf;
    return 0;
}
        
///一般月份合约组合保证金系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcRULEIntraParameterField_get_UsualIntraRate(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UsualIntraRate);
}

///一般月份合约组合保证金系数
// TThostFtdcRatioType double
static int PyCThostFtdcRULEIntraParameterField_set_UsualIntraRate(PyCThostFtdcRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsualIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UsualIntraRate = buf;
    return 0;
}
        
///临近交割合约组合保证金系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcRULEIntraParameterField_get_DeliveryIntraRate(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.DeliveryIntraRate);
}

///临近交割合约组合保证金系数
// TThostFtdcRatioType double
static int PyCThostFtdcRULEIntraParameterField_set_DeliveryIntraRate(PyCThostFtdcRULEIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryIntraRate = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcRULEIntraParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRULEIntraParameterField_get_TradingDay, (setter)PyCThostFtdcRULEIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRULEIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcRULEIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcRULEIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcRULEIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///标准合约 
    {(char *)"StdInstrumentID", (getter)PyCThostFtdcRULEIntraParameterField_get_StdInstrumentID, (setter)PyCThostFtdcRULEIntraParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
    ///标准合约保证金 
    {(char *)"StdInstrMargin", (getter)PyCThostFtdcRULEIntraParameterField_get_StdInstrMargin, (setter)PyCThostFtdcRULEIntraParameterField_set_StdInstrMargin, (char *)"StdInstrMargin", NULL},
    ///一般月份合约组合保证金系数 
    {(char *)"UsualIntraRate", (getter)PyCThostFtdcRULEIntraParameterField_get_UsualIntraRate, (setter)PyCThostFtdcRULEIntraParameterField_set_UsualIntraRate, (char *)"UsualIntraRate", NULL},
    ///临近交割合约组合保证金系数 
    {(char *)"DeliveryIntraRate", (getter)PyCThostFtdcRULEIntraParameterField_get_DeliveryIntraRate, (setter)PyCThostFtdcRULEIntraParameterField_set_DeliveryIntraRate, (char *)"DeliveryIntraRate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRULEIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRULEIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRULEIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRULEIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRULEIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRULEIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRULEIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRULEIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRULEIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcRULEIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRULEIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcRULEIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRULEIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRULEIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRULEIntraParameterField", (PyObject *)&PyCThostFtdcRULEIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcRULEIntraParameterFieldType);
		return -1;
    }

    return 0;
}
