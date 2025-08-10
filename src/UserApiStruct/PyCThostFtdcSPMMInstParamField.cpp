
#include "PyCThostFtdcSPMMInstParamField.h"

///SPMM合约参数

static PyObject *PyCThostFtdcSPMMInstParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPMMInstParamField *self = (PyCThostFtdcSPMMInstParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSPMMInstParamField_init(PyCThostFtdcSPMMInstParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "InstMarginCalID", "CommodityID", "CommodityGroupID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SPMMInstParamField_ExchangeID = NULL;
    Py_ssize_t SPMMInstParamField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SPMMInstParamField_InstrumentID = NULL;
    Py_ssize_t SPMMInstParamField_InstrumentID_len = 0;
            
    ///SPMM合约保证金算法
    // TThostFtdcInstMarginCalIDType char
    char SPMMInstParamField_InstMarginCalID = 0;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SPMMInstParamField_CommodityID = NULL;
    Py_ssize_t SPMMInstParamField_CommodityID_len = 0;
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SPMMInstParamField_CommodityGroupID = NULL;
    Py_ssize_t SPMMInstParamField_CommodityGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#", (char **)kwlist
#endif

        , &SPMMInstParamField_ExchangeID, &SPMMInstParamField_ExchangeID_len 
        , &SPMMInstParamField_InstrumentID, &SPMMInstParamField_InstrumentID_len 
        , &SPMMInstParamField_InstMarginCalID 
        , &SPMMInstParamField_CommodityID, &SPMMInstParamField_CommodityID_len 
        , &SPMMInstParamField_CommodityGroupID, &SPMMInstParamField_CommodityGroupID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SPMMInstParamField_ExchangeID != NULL ) {
        if(SPMMInstParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SPMMInstParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SPMMInstParamField_ExchangeID, SPMMInstParamField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SPMMInstParamField_ExchangeID, sizeof(self->data.ExchangeID) );
        SPMMInstParamField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SPMMInstParamField_InstrumentID != NULL ) {
        if(SPMMInstParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SPMMInstParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SPMMInstParamField_InstrumentID, SPMMInstParamField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SPMMInstParamField_InstrumentID, sizeof(self->data.InstrumentID) );
        SPMMInstParamField_InstrumentID = NULL;
    }
            
    ///SPMM合约保证金算法
    // TThostFtdcInstMarginCalIDType char
    self->data.InstMarginCalID = SPMMInstParamField_InstMarginCalID;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SPMMInstParamField_CommodityID != NULL ) {
        if(SPMMInstParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", SPMMInstParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
            return -1;
        }
        // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
        // memcpy(self->data.CommodityID, SPMMInstParamField_CommodityID, SPMMInstParamField_CommodityID_len);        
        strncpy(self->data.CommodityID, SPMMInstParamField_CommodityID, sizeof(self->data.CommodityID) );
        SPMMInstParamField_CommodityID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SPMMInstParamField_CommodityGroupID != NULL ) {
        if(SPMMInstParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", SPMMInstParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
            return -1;
        }
        // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
        // memcpy(self->data.CommodityGroupID, SPMMInstParamField_CommodityGroupID, SPMMInstParamField_CommodityGroupID_len);        
        strncpy(self->data.CommodityGroupID, SPMMInstParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
        SPMMInstParamField_CommodityGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSPMMInstParamField_dealloc(PyCThostFtdcSPMMInstParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPMMInstParamField_repr(PyCThostFtdcSPMMInstParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"InstMarginCalID", self->data.InstMarginCalID 
        ,"CommodityID", self->data.CommodityID//, (Py_ssize_t)sizeof(self->data.CommodityID) 
        ,"CommodityGroupID", self->data.CommodityGroupID//, (Py_ssize_t)sizeof(self->data.CommodityGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMInstParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSPMMInstParamField_get_ExchangeID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSPMMInstParamField_set_ExchangeID(PyCThostFtdcSPMMInstParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPMMInstParamField_get_InstrumentID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSPMMInstParamField_set_InstrumentID(PyCThostFtdcSPMMInstParamField *self, PyObject* val, void *closure) {
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
            
///SPMM合约保证金算法
// TThostFtdcInstMarginCalIDType char
static PyObject *PyCThostFtdcSPMMInstParamField_get_InstMarginCalID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InstMarginCalID), 1);
}

///SPMM合约保证金算法
// TThostFtdcInstMarginCalIDType char
static int PyCThostFtdcSPMMInstParamField_set_InstMarginCalID(PyCThostFtdcSPMMInstParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstMarginCalID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstMarginCalID)) {
        PyErr_SetString(PyExc_ValueError, "InstMarginCalID must be equal 1 bytes");
        return -1;
    }
    self->data.InstMarginCalID = *buf;
    return 0;
}
            
///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSPMMInstParamField_get_CommodityID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityID, (Py_ssize_t)sizeof(self->data.CommodityID));
    return PyBytes_FromString(self->data.CommodityID);
}

///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSPMMInstParamField_set_CommodityID(PyCThostFtdcSPMMInstParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
    // memcpy(self->data.CommodityID, buf, len);
    strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
    return 0;
}
            
///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSPMMInstParamField_get_CommodityGroupID(PyCThostFtdcSPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupID, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
    return PyBytes_FromString(self->data.CommodityGroupID);
}

///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSPMMInstParamField_set_CommodityGroupID(PyCThostFtdcSPMMInstParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
    // memcpy(self->data.CommodityGroupID, buf, len);
    strncpy(self->data.CommodityGroupID, buf, sizeof(self->data.CommodityGroupID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSPMMInstParamField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSPMMInstParamField_get_ExchangeID, (setter)PyCThostFtdcSPMMInstParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSPMMInstParamField_get_InstrumentID, (setter)PyCThostFtdcSPMMInstParamField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///SPMM合约保证金算法 
    {(char *)"InstMarginCalID", (getter)PyCThostFtdcSPMMInstParamField_get_InstMarginCalID, (setter)PyCThostFtdcSPMMInstParamField_set_InstMarginCalID, (char *)"InstMarginCalID", NULL},
    ///商品组代码 
    {(char *)"CommodityID", (getter)PyCThostFtdcSPMMInstParamField_get_CommodityID, (setter)PyCThostFtdcSPMMInstParamField_set_CommodityID, (char *)"CommodityID", NULL},
    ///商品群代码 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcSPMMInstParamField_get_CommodityGroupID, (setter)PyCThostFtdcSPMMInstParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPMMInstParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPMMInstParamField",	/* tp_name */
	sizeof(PyCThostFtdcSPMMInstParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPMMInstParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPMMInstParamField_repr,   /* tp_repr */
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
	"CThostFtdcSPMMInstParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPMMInstParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPMMInstParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPMMInstParamField_new,       /* tp_new */
};

int PyCThostFtdcSPMMInstParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPMMInstParamField  */
	if (PyType_Ready(&PyCThostFtdcSPMMInstParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPMMInstParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPMMInstParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPMMInstParamField", (PyObject *)&PyCThostFtdcSPMMInstParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPMMInstParamField to module");
        Py_DECREF(&PyCThostFtdcSPMMInstParamFieldType);
		return -1;
    }

    return 0;
}
