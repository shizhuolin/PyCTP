
#include "PyCThostFtdcTradeParamField.h"

///交易参数

static PyObject *PyCThostFtdcTradeParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradeParamField *self = (PyCThostFtdcTradeParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradeParamField_init(PyCThostFtdcTradeParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "TradeParamID", "TradeParamValue", "Memo",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradeParamField_BrokerID = NULL;
    Py_ssize_t TradeParamField_BrokerID_len = 0;
            
    ///参数代码
    // TThostFtdcTradeParamIDType char
    char TradeParamField_TradeParamID = 0;
            
    ///参数代码值
    // TThostFtdcSettlementParamValueType char[256]
    const char *TradeParamField_TradeParamValue = NULL;
    Py_ssize_t TradeParamField_TradeParamValue_len = 0;
            
    ///备注
    // TThostFtdcMemoType char[161]
    const char *TradeParamField_Memo = NULL;
    Py_ssize_t TradeParamField_Memo_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#", (char **)kwlist
#endif

        , &TradeParamField_BrokerID, &TradeParamField_BrokerID_len 
        , &TradeParamField_TradeParamID 
        , &TradeParamField_TradeParamValue, &TradeParamField_TradeParamValue_len 
        , &TradeParamField_Memo, &TradeParamField_Memo_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradeParamField_BrokerID != NULL ) {
        if(TradeParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradeParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradeParamField_BrokerID, TradeParamField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradeParamField_BrokerID, sizeof(self->data.BrokerID) );
        TradeParamField_BrokerID = NULL;
    }
            
    ///参数代码
    // TThostFtdcTradeParamIDType char
    self->data.TradeParamID = TradeParamField_TradeParamID;
            
    ///参数代码值
    // TThostFtdcSettlementParamValueType char[256]
    if( TradeParamField_TradeParamValue != NULL ) {
        if(TradeParamField_TradeParamValue_len > (Py_ssize_t)sizeof(self->data.TradeParamValue)) {
            PyErr_Format(PyExc_ValueError, "TradeParamValue too long: length=%zd (max allowed is %zd)", TradeParamField_TradeParamValue_len, (Py_ssize_t)sizeof(self->data.TradeParamValue));
            return -1;
        }
        // memset(self->data.TradeParamValue, 0, sizeof(self->data.TradeParamValue));
        // memcpy(self->data.TradeParamValue, TradeParamField_TradeParamValue, TradeParamField_TradeParamValue_len);        
        strncpy(self->data.TradeParamValue, TradeParamField_TradeParamValue, sizeof(self->data.TradeParamValue) );
        TradeParamField_TradeParamValue = NULL;
    }
            
    ///备注
    // TThostFtdcMemoType char[161]
    if( TradeParamField_Memo != NULL ) {
        if(TradeParamField_Memo_len > (Py_ssize_t)sizeof(self->data.Memo)) {
            PyErr_Format(PyExc_ValueError, "Memo too long: length=%zd (max allowed is %zd)", TradeParamField_Memo_len, (Py_ssize_t)sizeof(self->data.Memo));
            return -1;
        }
        // memset(self->data.Memo, 0, sizeof(self->data.Memo));
        // memcpy(self->data.Memo, TradeParamField_Memo, TradeParamField_Memo_len);        
        strncpy(self->data.Memo, TradeParamField_Memo, sizeof(self->data.Memo) );
        TradeParamField_Memo = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradeParamField_dealloc(PyCThostFtdcTradeParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradeParamField_repr(PyCThostFtdcTradeParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"TradeParamID", self->data.TradeParamID 
        ,"TradeParamValue", self->data.TradeParamValue//, (Py_ssize_t)sizeof(self->data.TradeParamValue) 
        ,"Memo", self->data.Memo//, (Py_ssize_t)sizeof(self->data.Memo) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradeParamField_get_BrokerID(PyCThostFtdcTradeParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradeParamField_set_BrokerID(PyCThostFtdcTradeParamField *self, PyObject* val, void *closure) {
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
            
///参数代码
// TThostFtdcTradeParamIDType char
static PyObject *PyCThostFtdcTradeParamField_get_TradeParamID(PyCThostFtdcTradeParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradeParamID), 1);
}

///参数代码
// TThostFtdcTradeParamIDType char
static int PyCThostFtdcTradeParamField_set_TradeParamID(PyCThostFtdcTradeParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeParamID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeParamID)) {
        PyErr_SetString(PyExc_ValueError, "TradeParamID must be equal 1 bytes");
        return -1;
    }
    self->data.TradeParamID = *buf;
    return 0;
}
            
///参数代码值
// TThostFtdcSettlementParamValueType char[256]
static PyObject *PyCThostFtdcTradeParamField_get_TradeParamValue(PyCThostFtdcTradeParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeParamValue, (Py_ssize_t)sizeof(self->data.TradeParamValue));
    return PyBytes_FromString(self->data.TradeParamValue);
}

///参数代码值
// TThostFtdcSettlementParamValueType char[256]
static int PyCThostFtdcTradeParamField_set_TradeParamValue(PyCThostFtdcTradeParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeParamValue Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeParamValue)) {
        PyErr_SetString(PyExc_ValueError, "TradeParamValue must be less than 256 bytes");
        return -1;
    }
    // memset(self->data.TradeParamValue, 0, sizeof(self->data.TradeParamValue));
    // memcpy(self->data.TradeParamValue, buf, len);
    strncpy(self->data.TradeParamValue, buf, sizeof(self->data.TradeParamValue));
    return 0;
}
            
///备注
// TThostFtdcMemoType char[161]
static PyObject *PyCThostFtdcTradeParamField_get_Memo(PyCThostFtdcTradeParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Memo, (Py_ssize_t)sizeof(self->data.Memo));
    return PyBytes_FromString(self->data.Memo);
}

///备注
// TThostFtdcMemoType char[161]
static int PyCThostFtdcTradeParamField_set_Memo(PyCThostFtdcTradeParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Memo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Memo)) {
        PyErr_SetString(PyExc_ValueError, "Memo must be less than 161 bytes");
        return -1;
    }
    // memset(self->data.Memo, 0, sizeof(self->data.Memo));
    // memcpy(self->data.Memo, buf, len);
    strncpy(self->data.Memo, buf, sizeof(self->data.Memo));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTradeParamField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradeParamField_get_BrokerID, (setter)PyCThostFtdcTradeParamField_set_BrokerID, (char *)"BrokerID", NULL},
    ///参数代码 
    {(char *)"TradeParamID", (getter)PyCThostFtdcTradeParamField_get_TradeParamID, (setter)PyCThostFtdcTradeParamField_set_TradeParamID, (char *)"TradeParamID", NULL},
    ///参数代码值 
    {(char *)"TradeParamValue", (getter)PyCThostFtdcTradeParamField_get_TradeParamValue, (setter)PyCThostFtdcTradeParamField_set_TradeParamValue, (char *)"TradeParamValue", NULL},
    ///备注 
    {(char *)"Memo", (getter)PyCThostFtdcTradeParamField_get_Memo, (setter)PyCThostFtdcTradeParamField_set_Memo, (char *)"Memo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradeParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradeParamField",	/* tp_name */
	sizeof(PyCThostFtdcTradeParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradeParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradeParamField_repr,   /* tp_repr */
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
	"CThostFtdcTradeParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradeParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradeParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradeParamField_new,       /* tp_new */
};

int PyCThostFtdcTradeParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradeParamField  */
	if (PyType_Ready(&PyCThostFtdcTradeParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradeParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradeParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradeParamField", (PyObject *)&PyCThostFtdcTradeParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradeParamField to module");
        Py_DECREF(&PyCThostFtdcTradeParamFieldType);
		return -1;
    }

    return 0;
}
