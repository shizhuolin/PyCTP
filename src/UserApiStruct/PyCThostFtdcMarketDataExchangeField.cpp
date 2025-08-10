
#include "PyCThostFtdcMarketDataExchangeField.h"

///行情交易所代码属性

static PyObject *PyCThostFtdcMarketDataExchangeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataExchangeField *self = (PyCThostFtdcMarketDataExchangeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataExchangeField_init(PyCThostFtdcMarketDataExchangeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *MarketDataExchangeField_ExchangeID = NULL;
    Py_ssize_t MarketDataExchangeField_ExchangeID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &MarketDataExchangeField_ExchangeID, &MarketDataExchangeField_ExchangeID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( MarketDataExchangeField_ExchangeID != NULL ) {
        if(MarketDataExchangeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", MarketDataExchangeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, MarketDataExchangeField_ExchangeID, MarketDataExchangeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, MarketDataExchangeField_ExchangeID, sizeof(self->data.ExchangeID) );
        MarketDataExchangeField_ExchangeID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcMarketDataExchangeField_dealloc(PyCThostFtdcMarketDataExchangeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataExchangeField_repr(PyCThostFtdcMarketDataExchangeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataExchangeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcMarketDataExchangeField_get_ExchangeID(PyCThostFtdcMarketDataExchangeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcMarketDataExchangeField_set_ExchangeID(PyCThostFtdcMarketDataExchangeField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcMarketDataExchangeField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcMarketDataExchangeField_get_ExchangeID, (setter)PyCThostFtdcMarketDataExchangeField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataExchangeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataExchangeField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataExchangeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataExchangeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataExchangeField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataExchangeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataExchangeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataExchangeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataExchangeField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataExchangeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataExchangeField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataExchangeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataExchangeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataExchangeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataExchangeField", (PyObject *)&PyCThostFtdcMarketDataExchangeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataExchangeField to module");
        Py_DECREF(&PyCThostFtdcMarketDataExchangeFieldType);
		return -1;
    }

    return 0;
}
