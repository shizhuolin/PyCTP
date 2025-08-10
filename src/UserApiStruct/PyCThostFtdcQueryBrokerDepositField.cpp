
#include "PyCThostFtdcQueryBrokerDepositField.h"

///查询经纪公司资金

static PyObject *PyCThostFtdcQueryBrokerDepositField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQueryBrokerDepositField *self = (PyCThostFtdcQueryBrokerDepositField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQueryBrokerDepositField_init(PyCThostFtdcQueryBrokerDepositField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ExchangeID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QueryBrokerDepositField_BrokerID = NULL;
    Py_ssize_t QueryBrokerDepositField_BrokerID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QueryBrokerDepositField_ExchangeID = NULL;
    Py_ssize_t QueryBrokerDepositField_ExchangeID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QueryBrokerDepositField_BrokerID, &QueryBrokerDepositField_BrokerID_len 
        , &QueryBrokerDepositField_ExchangeID, &QueryBrokerDepositField_ExchangeID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QueryBrokerDepositField_BrokerID != NULL ) {
        if(QueryBrokerDepositField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QueryBrokerDepositField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QueryBrokerDepositField_BrokerID, QueryBrokerDepositField_BrokerID_len);        
        strncpy(self->data.BrokerID, QueryBrokerDepositField_BrokerID, sizeof(self->data.BrokerID) );
        QueryBrokerDepositField_BrokerID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QueryBrokerDepositField_ExchangeID != NULL ) {
        if(QueryBrokerDepositField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QueryBrokerDepositField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QueryBrokerDepositField_ExchangeID, QueryBrokerDepositField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QueryBrokerDepositField_ExchangeID, sizeof(self->data.ExchangeID) );
        QueryBrokerDepositField_ExchangeID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQueryBrokerDepositField_dealloc(PyCThostFtdcQueryBrokerDepositField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQueryBrokerDepositField_repr(PyCThostFtdcQueryBrokerDepositField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryBrokerDepositField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQueryBrokerDepositField_get_BrokerID(PyCThostFtdcQueryBrokerDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQueryBrokerDepositField_set_BrokerID(PyCThostFtdcQueryBrokerDepositField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQueryBrokerDepositField_get_ExchangeID(PyCThostFtdcQueryBrokerDepositField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQueryBrokerDepositField_set_ExchangeID(PyCThostFtdcQueryBrokerDepositField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQueryBrokerDepositField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQueryBrokerDepositField_get_BrokerID, (setter)PyCThostFtdcQueryBrokerDepositField_set_BrokerID, (char *)"BrokerID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQueryBrokerDepositField_get_ExchangeID, (setter)PyCThostFtdcQueryBrokerDepositField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQueryBrokerDepositFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQueryBrokerDepositField",	/* tp_name */
	sizeof(PyCThostFtdcQueryBrokerDepositField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQueryBrokerDepositField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQueryBrokerDepositField_repr,   /* tp_repr */
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
	"CThostFtdcQueryBrokerDepositField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQueryBrokerDepositField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQueryBrokerDepositField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQueryBrokerDepositField_new,       /* tp_new */
};

int PyCThostFtdcQueryBrokerDepositFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQueryBrokerDepositField  */
	if (PyType_Ready(&PyCThostFtdcQueryBrokerDepositFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQueryBrokerDepositField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQueryBrokerDepositFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQueryBrokerDepositField", (PyObject *)&PyCThostFtdcQueryBrokerDepositFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQueryBrokerDepositField to module");
        Py_DECREF(&PyCThostFtdcQueryBrokerDepositFieldType);
		return -1;
    }

    return 0;
}
