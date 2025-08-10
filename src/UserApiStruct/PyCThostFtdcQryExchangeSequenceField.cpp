
#include "PyCThostFtdcQryExchangeSequenceField.h"

///查询交易所状态

static PyObject *PyCThostFtdcQryExchangeSequenceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeSequenceField *self = (PyCThostFtdcQryExchangeSequenceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeSequenceField_init(PyCThostFtdcQryExchangeSequenceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeSequenceField_ExchangeID = NULL;
    Py_ssize_t QryExchangeSequenceField_ExchangeID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QryExchangeSequenceField_ExchangeID, &QryExchangeSequenceField_ExchangeID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeSequenceField_ExchangeID != NULL ) {
        if(QryExchangeSequenceField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeSequenceField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeSequenceField_ExchangeID, QryExchangeSequenceField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeSequenceField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeSequenceField_ExchangeID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeSequenceField_dealloc(PyCThostFtdcQryExchangeSequenceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeSequenceField_repr(PyCThostFtdcQryExchangeSequenceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeSequenceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryExchangeSequenceField_get_ExchangeID(PyCThostFtdcQryExchangeSequenceField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeSequenceField_set_ExchangeID(PyCThostFtdcQryExchangeSequenceField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeSequenceField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeSequenceField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeSequenceField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeSequenceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeSequenceField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeSequenceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeSequenceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeSequenceField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeSequenceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeSequenceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeSequenceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeSequenceField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeSequenceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeSequenceField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeSequenceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeSequenceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeSequenceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeSequenceField", (PyObject *)&PyCThostFtdcQryExchangeSequenceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeSequenceField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeSequenceFieldType);
		return -1;
    }

    return 0;
}
