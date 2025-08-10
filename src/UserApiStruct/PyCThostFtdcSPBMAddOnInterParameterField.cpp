
#include "PyCThostFtdcSPBMAddOnInterParameterField.h"

///SPBM附加跨品种抵扣参数

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMAddOnInterParameterField *self = (PyCThostFtdcSPBMAddOnInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMAddOnInterParameterField_init(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "AddOnInterRateZ2", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SPBMAddOnInterParameterField_TradingDay = NULL;
    Py_ssize_t SPBMAddOnInterParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SPBMAddOnInterParameterField_ExchangeID = NULL;
    Py_ssize_t SPBMAddOnInterParameterField_ExchangeID_len = 0;
            
    ///优先级
    // TThostFtdcSpreadIdType int
    int SPBMAddOnInterParameterField_SpreadId = 0;
        
    ///品种间对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    double SPBMAddOnInterParameterField_AddOnInterRateZ2 = 0.0;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *SPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
    Py_ssize_t SPBMAddOnInterParameterField_Leg1ProdFamilyCode_len = 0;
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    const char *SPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
    Py_ssize_t SPBMAddOnInterParameterField_Leg2ProdFamilyCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#", (char **)kwlist
#endif

        , &SPBMAddOnInterParameterField_TradingDay, &SPBMAddOnInterParameterField_TradingDay_len 
        , &SPBMAddOnInterParameterField_ExchangeID, &SPBMAddOnInterParameterField_ExchangeID_len 
        , &SPBMAddOnInterParameterField_SpreadId 
        , &SPBMAddOnInterParameterField_AddOnInterRateZ2 
        , &SPBMAddOnInterParameterField_Leg1ProdFamilyCode, &SPBMAddOnInterParameterField_Leg1ProdFamilyCode_len 
        , &SPBMAddOnInterParameterField_Leg2ProdFamilyCode, &SPBMAddOnInterParameterField_Leg2ProdFamilyCode_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SPBMAddOnInterParameterField_TradingDay != NULL ) {
        if(SPBMAddOnInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SPBMAddOnInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SPBMAddOnInterParameterField_TradingDay, SPBMAddOnInterParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SPBMAddOnInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SPBMAddOnInterParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SPBMAddOnInterParameterField_ExchangeID != NULL ) {
        if(SPBMAddOnInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SPBMAddOnInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SPBMAddOnInterParameterField_ExchangeID, SPBMAddOnInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SPBMAddOnInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SPBMAddOnInterParameterField_ExchangeID = NULL;
    }
            
    ///优先级
    // TThostFtdcSpreadIdType int
    self->data.SpreadId = SPBMAddOnInterParameterField_SpreadId;
        
    ///品种间对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    self->data.AddOnInterRateZ2 = SPBMAddOnInterParameterField_AddOnInterRateZ2;
        
    ///第一腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( SPBMAddOnInterParameterField_Leg1ProdFamilyCode != NULL ) {
        if(SPBMAddOnInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", SPBMAddOnInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
        // memcpy(self->data.Leg1ProdFamilyCode, SPBMAddOnInterParameterField_Leg1ProdFamilyCode, SPBMAddOnInterParameterField_Leg1ProdFamilyCode_len);        
        strncpy(self->data.Leg1ProdFamilyCode, SPBMAddOnInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
        SPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
    }
            
    ///第二腿构成品种
    // TThostFtdcInstrumentIDType char[81]
    if( SPBMAddOnInterParameterField_Leg2ProdFamilyCode != NULL ) {
        if(SPBMAddOnInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", SPBMAddOnInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
            return -1;
        }
        // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
        // memcpy(self->data.Leg2ProdFamilyCode, SPBMAddOnInterParameterField_Leg2ProdFamilyCode, SPBMAddOnInterParameterField_Leg2ProdFamilyCode_len);        
        strncpy(self->data.Leg2ProdFamilyCode, SPBMAddOnInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
        SPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSPBMAddOnInterParameterField_dealloc(PyCThostFtdcSPBMAddOnInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_repr(PyCThostFtdcSPBMAddOnInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"SpreadId", self->data.SpreadId 
        ,"AddOnInterRateZ2", self->data.AddOnInterRateZ2 
        ,"Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode) 
        ,"Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMAddOnInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_TradingDay(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSPBMAddOnInterParameterField_set_TradingDay(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_ExchangeID(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSPBMAddOnInterParameterField_set_ExchangeID(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
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
            
///优先级
// TThostFtdcSpreadIdType int
static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_SpreadId(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SpreadId);
#else
    return PyInt_FromLong(self->data.SpreadId);
#endif
}

///优先级
// TThostFtdcSpreadIdType int
static int PyCThostFtdcSPBMAddOnInterParameterField_set_SpreadId(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SpreadId value out of range for C int");
        return -1;
    }
    self->data.SpreadId = (int)buf;
    return 0;
}
        
///品种间对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_AddOnInterRateZ2(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnInterRateZ2);
}

///品种间对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSPBMAddOnInterParameterField_set_AddOnInterRateZ2(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnInterRateZ2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnInterRateZ2 = buf;
    return 0;
}
        
///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg1ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

///第一腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSPBMAddOnInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.Leg1ProdFamilyCode, 0, sizeof(self->data.Leg1ProdFamilyCode));
    // memcpy(self->data.Leg1ProdFamilyCode, buf, len);
    strncpy(self->data.Leg1ProdFamilyCode, buf, sizeof(self->data.Leg1ProdFamilyCode));
    return 0;
}
            
///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Leg2ProdFamilyCode, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
    return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

///第二腿构成品种
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSPBMAddOnInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
        PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.Leg2ProdFamilyCode, 0, sizeof(self->data.Leg2ProdFamilyCode));
    // memcpy(self->data.Leg2ProdFamilyCode, buf, len);
    strncpy(self->data.Leg2ProdFamilyCode, buf, sizeof(self->data.Leg2ProdFamilyCode));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSPBMAddOnInterParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_TradingDay, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///优先级 
    {(char *)"SpreadId", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_SpreadId, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
    ///品种间对锁仓附加费率折扣比例 
    {(char *)"AddOnInterRateZ2", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_AddOnInterRateZ2, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_AddOnInterRateZ2, (char *)"AddOnInterRateZ2", NULL},
    ///第一腿构成品种 
    {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
    ///第二腿构成品种 
    {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMAddOnInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMAddOnInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMAddOnInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMAddOnInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMAddOnInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMAddOnInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMAddOnInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMAddOnInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMAddOnInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSPBMAddOnInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMAddOnInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSPBMAddOnInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMAddOnInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMAddOnInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMAddOnInterParameterField", (PyObject *)&PyCThostFtdcSPBMAddOnInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMAddOnInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSPBMAddOnInterParameterFieldType);
		return -1;
    }

    return 0;
}
