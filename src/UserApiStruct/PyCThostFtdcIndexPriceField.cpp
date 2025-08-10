
#include "PyCThostFtdcIndexPriceField.h"

///股指现货指数

static PyObject *PyCThostFtdcIndexPriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcIndexPriceField *self = (PyCThostFtdcIndexPriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcIndexPriceField_init(PyCThostFtdcIndexPriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "ClosePrice", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *IndexPriceField_BrokerID = NULL;
    Py_ssize_t IndexPriceField_BrokerID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *IndexPriceField_reserve1 = NULL;
    Py_ssize_t IndexPriceField_reserve1_len = 0;
            
    ///指数现货收盘价
    // TThostFtdcPriceType double
    double IndexPriceField_ClosePrice = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *IndexPriceField_InstrumentID = NULL;
    Py_ssize_t IndexPriceField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#", (char **)kwlist
#endif

        , &IndexPriceField_BrokerID, &IndexPriceField_BrokerID_len 
        , &IndexPriceField_reserve1, &IndexPriceField_reserve1_len 
        , &IndexPriceField_ClosePrice 
        , &IndexPriceField_InstrumentID, &IndexPriceField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( IndexPriceField_BrokerID != NULL ) {
        if(IndexPriceField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", IndexPriceField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, IndexPriceField_BrokerID, IndexPriceField_BrokerID_len);        
        strncpy(self->data.BrokerID, IndexPriceField_BrokerID, sizeof(self->data.BrokerID) );
        IndexPriceField_BrokerID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( IndexPriceField_reserve1 != NULL ) {
        if(IndexPriceField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", IndexPriceField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, IndexPriceField_reserve1, IndexPriceField_reserve1_len);        
        strncpy(self->data.reserve1, IndexPriceField_reserve1, sizeof(self->data.reserve1) );
        IndexPriceField_reserve1 = NULL;
    }
            
    ///指数现货收盘价
    // TThostFtdcPriceType double
    self->data.ClosePrice = IndexPriceField_ClosePrice;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( IndexPriceField_InstrumentID != NULL ) {
        if(IndexPriceField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", IndexPriceField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, IndexPriceField_InstrumentID, IndexPriceField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, IndexPriceField_InstrumentID, sizeof(self->data.InstrumentID) );
        IndexPriceField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcIndexPriceField_dealloc(PyCThostFtdcIndexPriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcIndexPriceField_repr(PyCThostFtdcIndexPriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ClosePrice", self->data.ClosePrice 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIndexPriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcIndexPriceField_get_BrokerID(PyCThostFtdcIndexPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcIndexPriceField_set_BrokerID(PyCThostFtdcIndexPriceField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcIndexPriceField_get_reserve1(PyCThostFtdcIndexPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcIndexPriceField_set_reserve1(PyCThostFtdcIndexPriceField *self, PyObject* val, void *closure) {
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
            
///指数现货收盘价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcIndexPriceField_get_ClosePrice(PyCThostFtdcIndexPriceField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ClosePrice);
}

///指数现货收盘价
// TThostFtdcPriceType double
static int PyCThostFtdcIndexPriceField_set_ClosePrice(PyCThostFtdcIndexPriceField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ClosePrice = buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcIndexPriceField_get_InstrumentID(PyCThostFtdcIndexPriceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcIndexPriceField_set_InstrumentID(PyCThostFtdcIndexPriceField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcIndexPriceField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcIndexPriceField_get_BrokerID, (setter)PyCThostFtdcIndexPriceField_set_BrokerID, (char *)"BrokerID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcIndexPriceField_get_reserve1, (setter)PyCThostFtdcIndexPriceField_set_reserve1, (char *)"reserve1", NULL},
    ///指数现货收盘价 
    {(char *)"ClosePrice", (getter)PyCThostFtdcIndexPriceField_get_ClosePrice, (setter)PyCThostFtdcIndexPriceField_set_ClosePrice, (char *)"ClosePrice", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcIndexPriceField_get_InstrumentID, (setter)PyCThostFtdcIndexPriceField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcIndexPriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcIndexPriceField",	/* tp_name */
	sizeof(PyCThostFtdcIndexPriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcIndexPriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcIndexPriceField_repr,   /* tp_repr */
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
	"CThostFtdcIndexPriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcIndexPriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcIndexPriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcIndexPriceField_new,       /* tp_new */
};

int PyCThostFtdcIndexPriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcIndexPriceField  */
	if (PyType_Ready(&PyCThostFtdcIndexPriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcIndexPriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcIndexPriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcIndexPriceField", (PyObject *)&PyCThostFtdcIndexPriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIndexPriceField to module");
        Py_DECREF(&PyCThostFtdcIndexPriceFieldType);
		return -1;
    }

    return 0;
}
