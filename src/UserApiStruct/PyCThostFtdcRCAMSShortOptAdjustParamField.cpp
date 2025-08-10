
#include "PyCThostFtdcRCAMSShortOptAdjustParamField.h"

///RCAMS空头期权风险调整参数

static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSShortOptAdjustParamField *self = (PyCThostFtdcRCAMSShortOptAdjustParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSShortOptAdjustParamField_init(PyCThostFtdcRCAMSShortOptAdjustParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "CombProductID", "HedgeFlag", "AdjustValue",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *RCAMSShortOptAdjustParamField_TradingDay = NULL;
    Py_ssize_t RCAMSShortOptAdjustParamField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RCAMSShortOptAdjustParamField_ExchangeID = NULL;
    Py_ssize_t RCAMSShortOptAdjustParamField_ExchangeID_len = 0;
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    const char *RCAMSShortOptAdjustParamField_CombProductID = NULL;
    Py_ssize_t RCAMSShortOptAdjustParamField_CombProductID_len = 0;
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    char RCAMSShortOptAdjustParamField_HedgeFlag = 0;
            
    ///空头期权风险调整标准
    // TThostFtdcAdjustValueType double
    double RCAMSShortOptAdjustParamField_AdjustValue = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cd", (char **)kwlist
#endif

        , &RCAMSShortOptAdjustParamField_TradingDay, &RCAMSShortOptAdjustParamField_TradingDay_len 
        , &RCAMSShortOptAdjustParamField_ExchangeID, &RCAMSShortOptAdjustParamField_ExchangeID_len 
        , &RCAMSShortOptAdjustParamField_CombProductID, &RCAMSShortOptAdjustParamField_CombProductID_len 
        , &RCAMSShortOptAdjustParamField_HedgeFlag 
        , &RCAMSShortOptAdjustParamField_AdjustValue 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( RCAMSShortOptAdjustParamField_TradingDay != NULL ) {
        if(RCAMSShortOptAdjustParamField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", RCAMSShortOptAdjustParamField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, RCAMSShortOptAdjustParamField_TradingDay, RCAMSShortOptAdjustParamField_TradingDay_len);        
        strncpy(self->data.TradingDay, RCAMSShortOptAdjustParamField_TradingDay, sizeof(self->data.TradingDay) );
        RCAMSShortOptAdjustParamField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RCAMSShortOptAdjustParamField_ExchangeID != NULL ) {
        if(RCAMSShortOptAdjustParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RCAMSShortOptAdjustParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RCAMSShortOptAdjustParamField_ExchangeID, RCAMSShortOptAdjustParamField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RCAMSShortOptAdjustParamField_ExchangeID, sizeof(self->data.ExchangeID) );
        RCAMSShortOptAdjustParamField_ExchangeID = NULL;
    }
            
    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    if( RCAMSShortOptAdjustParamField_CombProductID != NULL ) {
        if(RCAMSShortOptAdjustParamField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", RCAMSShortOptAdjustParamField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, RCAMSShortOptAdjustParamField_CombProductID, RCAMSShortOptAdjustParamField_CombProductID_len);        
        strncpy(self->data.CombProductID, RCAMSShortOptAdjustParamField_CombProductID, sizeof(self->data.CombProductID) );
        RCAMSShortOptAdjustParamField_CombProductID = NULL;
    }
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = RCAMSShortOptAdjustParamField_HedgeFlag;
            
    ///空头期权风险调整标准
    // TThostFtdcAdjustValueType double
    self->data.AdjustValue = RCAMSShortOptAdjustParamField_AdjustValue;
        

    return 0;
}

static void PyCThostFtdcRCAMSShortOptAdjustParamField_dealloc(PyCThostFtdcRCAMSShortOptAdjustParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamField_repr(PyCThostFtdcRCAMSShortOptAdjustParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"AdjustValue", self->data.AdjustValue 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSShortOptAdjustParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamField_get_TradingDay(PyCThostFtdcRCAMSShortOptAdjustParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcRCAMSShortOptAdjustParamField_set_TradingDay(PyCThostFtdcRCAMSShortOptAdjustParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamField_get_ExchangeID(PyCThostFtdcRCAMSShortOptAdjustParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRCAMSShortOptAdjustParamField_set_ExchangeID(PyCThostFtdcRCAMSShortOptAdjustParamField *self, PyObject* val, void *closure) {
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
            
///产品组合代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamField_get_CombProductID(PyCThostFtdcRCAMSShortOptAdjustParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///产品组合代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcRCAMSShortOptAdjustParamField_set_CombProductID(PyCThostFtdcRCAMSShortOptAdjustParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
    // memcpy(self->data.CombProductID, buf, len);
    strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
    return 0;
}
            
///投套标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamField_get_HedgeFlag(PyCThostFtdcRCAMSShortOptAdjustParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投套标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcRCAMSShortOptAdjustParamField_set_HedgeFlag(PyCThostFtdcRCAMSShortOptAdjustParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///空头期权风险调整标准
// TThostFtdcAdjustValueType double
static PyObject *PyCThostFtdcRCAMSShortOptAdjustParamField_get_AdjustValue(PyCThostFtdcRCAMSShortOptAdjustParamField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AdjustValue);
}

///空头期权风险调整标准
// TThostFtdcAdjustValueType double
static int PyCThostFtdcRCAMSShortOptAdjustParamField_set_AdjustValue(PyCThostFtdcRCAMSShortOptAdjustParamField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AdjustValue Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AdjustValue = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcRCAMSShortOptAdjustParamField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcRCAMSShortOptAdjustParamField_get_TradingDay, (setter)PyCThostFtdcRCAMSShortOptAdjustParamField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSShortOptAdjustParamField_get_ExchangeID, (setter)PyCThostFtdcRCAMSShortOptAdjustParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品组合代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcRCAMSShortOptAdjustParamField_get_CombProductID, (setter)PyCThostFtdcRCAMSShortOptAdjustParamField_set_CombProductID, (char *)"CombProductID", NULL},
    ///投套标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcRCAMSShortOptAdjustParamField_get_HedgeFlag, (setter)PyCThostFtdcRCAMSShortOptAdjustParamField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///空头期权风险调整标准 
    {(char *)"AdjustValue", (getter)PyCThostFtdcRCAMSShortOptAdjustParamField_get_AdjustValue, (setter)PyCThostFtdcRCAMSShortOptAdjustParamField_set_AdjustValue, (char *)"AdjustValue", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSShortOptAdjustParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSShortOptAdjustParamField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSShortOptAdjustParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSShortOptAdjustParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSShortOptAdjustParamField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSShortOptAdjustParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSShortOptAdjustParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSShortOptAdjustParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSShortOptAdjustParamField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSShortOptAdjustParamField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSShortOptAdjustParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSShortOptAdjustParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSShortOptAdjustParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSShortOptAdjustParamField", (PyObject *)&PyCThostFtdcRCAMSShortOptAdjustParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSShortOptAdjustParamField to module");
        Py_DECREF(&PyCThostFtdcRCAMSShortOptAdjustParamFieldType);
		return -1;
    }

    return 0;
}
