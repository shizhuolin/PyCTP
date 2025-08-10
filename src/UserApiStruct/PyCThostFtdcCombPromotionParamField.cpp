
#include "PyCThostFtdcCombPromotionParamField.h"

///组合优惠比例

static PyObject *PyCThostFtdcCombPromotionParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCombPromotionParamField *self = (PyCThostFtdcCombPromotionParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCombPromotionParamField_init(PyCThostFtdcCombPromotionParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "CombHedgeFlag", "Xparameter",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *CombPromotionParamField_ExchangeID = NULL;
    Py_ssize_t CombPromotionParamField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *CombPromotionParamField_InstrumentID = NULL;
    Py_ssize_t CombPromotionParamField_InstrumentID_len = 0;
            
    ///投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    const char *CombPromotionParamField_CombHedgeFlag = NULL;
    Py_ssize_t CombPromotionParamField_CombHedgeFlag_len = 0;
            
    ///期权组合保证金比例
    // TThostFtdcDiscountRatioType double
    double CombPromotionParamField_Xparameter = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#d", (char **)kwlist
#endif

        , &CombPromotionParamField_ExchangeID, &CombPromotionParamField_ExchangeID_len 
        , &CombPromotionParamField_InstrumentID, &CombPromotionParamField_InstrumentID_len 
        , &CombPromotionParamField_CombHedgeFlag, &CombPromotionParamField_CombHedgeFlag_len 
        , &CombPromotionParamField_Xparameter 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( CombPromotionParamField_ExchangeID != NULL ) {
        if(CombPromotionParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", CombPromotionParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, CombPromotionParamField_ExchangeID, CombPromotionParamField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, CombPromotionParamField_ExchangeID, sizeof(self->data.ExchangeID) );
        CombPromotionParamField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( CombPromotionParamField_InstrumentID != NULL ) {
        if(CombPromotionParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", CombPromotionParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, CombPromotionParamField_InstrumentID, CombPromotionParamField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, CombPromotionParamField_InstrumentID, sizeof(self->data.InstrumentID) );
        CombPromotionParamField_InstrumentID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcCombHedgeFlagType char[5]
    if( CombPromotionParamField_CombHedgeFlag != NULL ) {
        if(CombPromotionParamField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
            PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", CombPromotionParamField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
            return -1;
        }
        // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
        // memcpy(self->data.CombHedgeFlag, CombPromotionParamField_CombHedgeFlag, CombPromotionParamField_CombHedgeFlag_len);        
        strncpy(self->data.CombHedgeFlag, CombPromotionParamField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
        CombPromotionParamField_CombHedgeFlag = NULL;
    }
            
    ///期权组合保证金比例
    // TThostFtdcDiscountRatioType double
    self->data.Xparameter = CombPromotionParamField_Xparameter;
        

    return 0;
}

static void PyCThostFtdcCombPromotionParamField_dealloc(PyCThostFtdcCombPromotionParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCombPromotionParamField_repr(PyCThostFtdcCombPromotionParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"CombHedgeFlag", self->data.CombHedgeFlag//, (Py_ssize_t)sizeof(self->data.CombHedgeFlag) 
        ,"Xparameter", self->data.Xparameter 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombPromotionParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcCombPromotionParamField_get_ExchangeID(PyCThostFtdcCombPromotionParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcCombPromotionParamField_set_ExchangeID(PyCThostFtdcCombPromotionParamField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcCombPromotionParamField_get_InstrumentID(PyCThostFtdcCombPromotionParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcCombPromotionParamField_set_InstrumentID(PyCThostFtdcCombPromotionParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static PyObject *PyCThostFtdcCombPromotionParamField_get_CombHedgeFlag(PyCThostFtdcCombPromotionParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombHedgeFlag, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
    return PyBytes_FromString(self->data.CombHedgeFlag);
}

///投机套保标志
// TThostFtdcCombHedgeFlagType char[5]
static int PyCThostFtdcCombPromotionParamField_set_CombHedgeFlag(PyCThostFtdcCombPromotionParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.CombHedgeFlag, 0, sizeof(self->data.CombHedgeFlag));
    // memcpy(self->data.CombHedgeFlag, buf, len);
    strncpy(self->data.CombHedgeFlag, buf, sizeof(self->data.CombHedgeFlag));
    return 0;
}
            
///期权组合保证金比例
// TThostFtdcDiscountRatioType double
static PyObject *PyCThostFtdcCombPromotionParamField_get_Xparameter(PyCThostFtdcCombPromotionParamField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Xparameter);
}

///期权组合保证金比例
// TThostFtdcDiscountRatioType double
static int PyCThostFtdcCombPromotionParamField_set_Xparameter(PyCThostFtdcCombPromotionParamField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Xparameter Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Xparameter = buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcCombPromotionParamField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcCombPromotionParamField_get_ExchangeID, (setter)PyCThostFtdcCombPromotionParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcCombPromotionParamField_get_InstrumentID, (setter)PyCThostFtdcCombPromotionParamField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投机套保标志 
    {(char *)"CombHedgeFlag", (getter)PyCThostFtdcCombPromotionParamField_get_CombHedgeFlag, (setter)PyCThostFtdcCombPromotionParamField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
    ///期权组合保证金比例 
    {(char *)"Xparameter", (getter)PyCThostFtdcCombPromotionParamField_get_Xparameter, (setter)PyCThostFtdcCombPromotionParamField_set_Xparameter, (char *)"Xparameter", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCombPromotionParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCombPromotionParamField",	/* tp_name */
	sizeof(PyCThostFtdcCombPromotionParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCombPromotionParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCombPromotionParamField_repr,   /* tp_repr */
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
	"CThostFtdcCombPromotionParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCombPromotionParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCombPromotionParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCombPromotionParamField_new,       /* tp_new */
};

int PyCThostFtdcCombPromotionParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCombPromotionParamField  */
	if (PyType_Ready(&PyCThostFtdcCombPromotionParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCombPromotionParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCombPromotionParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCombPromotionParamField", (PyObject *)&PyCThostFtdcCombPromotionParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombPromotionParamField to module");
        Py_DECREF(&PyCThostFtdcCombPromotionParamFieldType);
		return -1;
    }

    return 0;
}
