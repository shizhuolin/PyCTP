
#include "PyCThostFtdcSPBMIntraParameterField.h"

///SPBM品种内对锁仓折扣参数

static PyObject *PyCThostFtdcSPBMIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMIntraParameterField *self = (PyCThostFtdcSPBMIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMIntraParameterField_init(PyCThostFtdcSPBMIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdFamilyCode", "IntraRateY", "AddOnIntraRateY2",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SPBMIntraParameterField_TradingDay = NULL;
    Py_ssize_t SPBMIntraParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SPBMIntraParameterField_ExchangeID = NULL;
    Py_ssize_t SPBMIntraParameterField_ExchangeID_len = 0;
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SPBMIntraParameterField_ProdFamilyCode = NULL;
    Py_ssize_t SPBMIntraParameterField_ProdFamilyCode_len = 0;
            
    ///品种内合约间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    double SPBMIntraParameterField_IntraRateY = 0.0;
        
    ///品种内合约间对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    double SPBMIntraParameterField_AddOnIntraRateY2 = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dd", (char **)kwlist
#endif

        , &SPBMIntraParameterField_TradingDay, &SPBMIntraParameterField_TradingDay_len 
        , &SPBMIntraParameterField_ExchangeID, &SPBMIntraParameterField_ExchangeID_len 
        , &SPBMIntraParameterField_ProdFamilyCode, &SPBMIntraParameterField_ProdFamilyCode_len 
        , &SPBMIntraParameterField_IntraRateY 
        , &SPBMIntraParameterField_AddOnIntraRateY2 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SPBMIntraParameterField_TradingDay != NULL ) {
        if(SPBMIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SPBMIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SPBMIntraParameterField_TradingDay, SPBMIntraParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SPBMIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SPBMIntraParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SPBMIntraParameterField_ExchangeID != NULL ) {
        if(SPBMIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SPBMIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SPBMIntraParameterField_ExchangeID, SPBMIntraParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SPBMIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SPBMIntraParameterField_ExchangeID = NULL;
    }
            
    ///品种代码
    // TThostFtdcInstrumentIDType char[81]
    if( SPBMIntraParameterField_ProdFamilyCode != NULL ) {
        if(SPBMIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
            PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", SPBMIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
            return -1;
        }
        // memset(self->data.ProdFamilyCode, 0, sizeof(self->data.ProdFamilyCode));
        // memcpy(self->data.ProdFamilyCode, SPBMIntraParameterField_ProdFamilyCode, SPBMIntraParameterField_ProdFamilyCode_len);        
        strncpy(self->data.ProdFamilyCode, SPBMIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
        SPBMIntraParameterField_ProdFamilyCode = NULL;
    }
            
    ///品种内合约间对锁仓费率折扣比例
    // TThostFtdcRatioType double
    self->data.IntraRateY = SPBMIntraParameterField_IntraRateY;
        
    ///品种内合约间对锁仓附加费率折扣比例
    // TThostFtdcRatioType double
    self->data.AddOnIntraRateY2 = SPBMIntraParameterField_AddOnIntraRateY2;
        

    return 0;
}

static void PyCThostFtdcSPBMIntraParameterField_dealloc(PyCThostFtdcSPBMIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMIntraParameterField_repr(PyCThostFtdcSPBMIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProdFamilyCode", self->data.ProdFamilyCode//, (Py_ssize_t)sizeof(self->data.ProdFamilyCode) 
        ,"IntraRateY", self->data.IntraRateY 
        ,"AddOnIntraRateY2", self->data.AddOnIntraRateY2 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSPBMIntraParameterField_get_TradingDay(PyCThostFtdcSPBMIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSPBMIntraParameterField_set_TradingDay(PyCThostFtdcSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPBMIntraParameterField_get_ExchangeID(PyCThostFtdcSPBMIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSPBMIntraParameterField_set_ExchangeID(PyCThostFtdcSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPBMIntraParameterField_get_ProdFamilyCode(PyCThostFtdcSPBMIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProdFamilyCode, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
    return PyBytes_FromString(self->data.ProdFamilyCode);
}

///品种代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSPBMIntraParameterField_set_ProdFamilyCode(PyCThostFtdcSPBMIntraParameterField *self, PyObject* val, void *closure) {
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
            
///品种内合约间对锁仓费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSPBMIntraParameterField_get_IntraRateY(PyCThostFtdcSPBMIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.IntraRateY);
}

///品种内合约间对锁仓费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSPBMIntraParameterField_set_IntraRateY(PyCThostFtdcSPBMIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraRateY Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraRateY = buf;
    return 0;
}
        
///品种内合约间对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSPBMIntraParameterField_get_AddOnIntraRateY2(PyCThostFtdcSPBMIntraParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AddOnIntraRateY2);
}

///品种内合约间对锁仓附加费率折扣比例
// TThostFtdcRatioType double
static int PyCThostFtdcSPBMIntraParameterField_set_AddOnIntraRateY2(PyCThostFtdcSPBMIntraParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnIntraRateY2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnIntraRateY2 = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSPBMIntraParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSPBMIntraParameterField_get_TradingDay, (setter)PyCThostFtdcSPBMIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcSPBMIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///品种代码 
    {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSPBMIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSPBMIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
    ///品种内合约间对锁仓费率折扣比例 
    {(char *)"IntraRateY", (getter)PyCThostFtdcSPBMIntraParameterField_get_IntraRateY, (setter)PyCThostFtdcSPBMIntraParameterField_set_IntraRateY, (char *)"IntraRateY", NULL},
    ///品种内合约间对锁仓附加费率折扣比例 
    {(char *)"AddOnIntraRateY2", (getter)PyCThostFtdcSPBMIntraParameterField_get_AddOnIntraRateY2, (setter)PyCThostFtdcSPBMIntraParameterField_set_AddOnIntraRateY2, (char *)"AddOnIntraRateY2", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcSPBMIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcSPBMIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMIntraParameterField", (PyObject *)&PyCThostFtdcSPBMIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcSPBMIntraParameterFieldType);
		return -1;
    }

    return 0;
}
