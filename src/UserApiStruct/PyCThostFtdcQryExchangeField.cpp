
#include "PyCThostFtdcQryExchangeField.h"

///查询交易所

static PyObject *PyCThostFtdcQryExchangeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeField *self = (PyCThostFtdcQryExchangeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeField_init(PyCThostFtdcQryExchangeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeField_ExchangeID = NULL;
    Py_ssize_t QryExchangeField_ExchangeID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QryExchangeField_ExchangeID, &QryExchangeField_ExchangeID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeField_ExchangeID != NULL ) {
        if(QryExchangeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeField_ExchangeID, QryExchangeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeField_ExchangeID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeField_dealloc(PyCThostFtdcQryExchangeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeField_repr(PyCThostFtdcQryExchangeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryExchangeField_get_ExchangeID(PyCThostFtdcQryExchangeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeField_set_ExchangeID(PyCThostFtdcQryExchangeField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeField_set_ExchangeID, (char *)"ExchangeID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeField", (PyObject *)&PyCThostFtdcQryExchangeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeFieldType);
		return -1;
    }

    return 0;
}
