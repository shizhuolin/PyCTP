
#include "PyCThostFtdcQryExchangeRateField.h"

///查询汇率

static PyObject *PyCThostFtdcQryExchangeRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeRateField *self = (PyCThostFtdcQryExchangeRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeRateField_init(PyCThostFtdcQryExchangeRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "FromCurrencyID", "ToCurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryExchangeRateField_BrokerID = NULL;
    Py_ssize_t QryExchangeRateField_BrokerID_len = 0;
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    const char *QryExchangeRateField_FromCurrencyID = NULL;
    Py_ssize_t QryExchangeRateField_FromCurrencyID_len = 0;
            
    ///目标币种
    // TThostFtdcCurrencyIDType char[4]
    const char *QryExchangeRateField_ToCurrencyID = NULL;
    Py_ssize_t QryExchangeRateField_ToCurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryExchangeRateField_BrokerID, &QryExchangeRateField_BrokerID_len 
        , &QryExchangeRateField_FromCurrencyID, &QryExchangeRateField_FromCurrencyID_len 
        , &QryExchangeRateField_ToCurrencyID, &QryExchangeRateField_ToCurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryExchangeRateField_BrokerID != NULL ) {
        if(QryExchangeRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryExchangeRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryExchangeRateField_BrokerID, QryExchangeRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryExchangeRateField_BrokerID, sizeof(self->data.BrokerID) );
        QryExchangeRateField_BrokerID = NULL;
    }
            
    ///源币种
    // TThostFtdcCurrencyIDType char[4]
    if( QryExchangeRateField_FromCurrencyID != NULL ) {
        if(QryExchangeRateField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", QryExchangeRateField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
            return -1;
        }
        // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
        // memcpy(self->data.FromCurrencyID, QryExchangeRateField_FromCurrencyID, QryExchangeRateField_FromCurrencyID_len);        
        strncpy(self->data.FromCurrencyID, QryExchangeRateField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
        QryExchangeRateField_FromCurrencyID = NULL;
    }
            
    ///目标币种
    // TThostFtdcCurrencyIDType char[4]
    if( QryExchangeRateField_ToCurrencyID != NULL ) {
        if(QryExchangeRateField_ToCurrencyID_len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
            PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is %zd)", QryExchangeRateField_ToCurrencyID_len, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
            return -1;
        }
        // memset(self->data.ToCurrencyID, 0, sizeof(self->data.ToCurrencyID));
        // memcpy(self->data.ToCurrencyID, QryExchangeRateField_ToCurrencyID, QryExchangeRateField_ToCurrencyID_len);        
        strncpy(self->data.ToCurrencyID, QryExchangeRateField_ToCurrencyID, sizeof(self->data.ToCurrencyID) );
        QryExchangeRateField_ToCurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeRateField_dealloc(PyCThostFtdcQryExchangeRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeRateField_repr(PyCThostFtdcQryExchangeRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"FromCurrencyID", self->data.FromCurrencyID//, (Py_ssize_t)sizeof(self->data.FromCurrencyID) 
        ,"ToCurrencyID", self->data.ToCurrencyID//, (Py_ssize_t)sizeof(self->data.ToCurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryExchangeRateField_get_BrokerID(PyCThostFtdcQryExchangeRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryExchangeRateField_set_BrokerID(PyCThostFtdcQryExchangeRateField *self, PyObject* val, void *closure) {
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
            
///源币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcQryExchangeRateField_get_FromCurrencyID(PyCThostFtdcQryExchangeRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FromCurrencyID, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
    return PyBytes_FromString(self->data.FromCurrencyID);
}

///源币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQryExchangeRateField_set_FromCurrencyID(PyCThostFtdcQryExchangeRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.FromCurrencyID, 0, sizeof(self->data.FromCurrencyID));
    // memcpy(self->data.FromCurrencyID, buf, len);
    strncpy(self->data.FromCurrencyID, buf, sizeof(self->data.FromCurrencyID));
    return 0;
}
            
///目标币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcQryExchangeRateField_get_ToCurrencyID(PyCThostFtdcQryExchangeRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ToCurrencyID, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
    return PyBytes_FromString(self->data.ToCurrencyID);
}

///目标币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQryExchangeRateField_set_ToCurrencyID(PyCThostFtdcQryExchangeRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.ToCurrencyID, 0, sizeof(self->data.ToCurrencyID));
    // memcpy(self->data.ToCurrencyID, buf, len);
    strncpy(self->data.ToCurrencyID, buf, sizeof(self->data.ToCurrencyID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryExchangeRateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryExchangeRateField_get_BrokerID, (setter)PyCThostFtdcQryExchangeRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///源币种 
    {(char *)"FromCurrencyID", (getter)PyCThostFtdcQryExchangeRateField_get_FromCurrencyID, (setter)PyCThostFtdcQryExchangeRateField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
    ///目标币种 
    {(char *)"ToCurrencyID", (getter)PyCThostFtdcQryExchangeRateField_get_ToCurrencyID, (setter)PyCThostFtdcQryExchangeRateField_set_ToCurrencyID, (char *)"ToCurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeRateField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeRateField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeRateField", (PyObject *)&PyCThostFtdcQryExchangeRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeRateField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeRateFieldType);
		return -1;
    }

    return 0;
}
