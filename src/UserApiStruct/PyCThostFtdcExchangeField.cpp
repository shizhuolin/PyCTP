
#include "PyCThostFtdcExchangeField.h"

///交易所

static PyObject *PyCThostFtdcExchangeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeField *self = (PyCThostFtdcExchangeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeField_init(PyCThostFtdcExchangeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ExchangeName", "ExchangeProperty",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ExchangeField_ExchangeID = NULL;
    Py_ssize_t ExchangeField_ExchangeID_len = 0;
            
    ///交易所名称
    // TThostFtdcExchangeNameType char[61]
    const char *ExchangeField_ExchangeName = NULL;
    Py_ssize_t ExchangeField_ExchangeName_len = 0;
            
    ///交易所属性
    // TThostFtdcExchangePropertyType char
    char ExchangeField_ExchangeProperty = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#c", (char **)kwlist
#endif

        , &ExchangeField_ExchangeID, &ExchangeField_ExchangeID_len 
        , &ExchangeField_ExchangeName, &ExchangeField_ExchangeName_len 
        , &ExchangeField_ExchangeProperty 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ExchangeField_ExchangeID != NULL ) {
        if(ExchangeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ExchangeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ExchangeField_ExchangeID, ExchangeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ExchangeField_ExchangeID, sizeof(self->data.ExchangeID) );
        ExchangeField_ExchangeID = NULL;
    }
            
    ///交易所名称
    // TThostFtdcExchangeNameType char[61]
    if( ExchangeField_ExchangeName != NULL ) {
        if(ExchangeField_ExchangeName_len > (Py_ssize_t)sizeof(self->data.ExchangeName)) {
            PyErr_Format(PyExc_ValueError, "ExchangeName too long: length=%zd (max allowed is %zd)", ExchangeField_ExchangeName_len, (Py_ssize_t)sizeof(self->data.ExchangeName));
            return -1;
        }
        // memset(self->data.ExchangeName, 0, sizeof(self->data.ExchangeName));
        // memcpy(self->data.ExchangeName, ExchangeField_ExchangeName, ExchangeField_ExchangeName_len);        
        strncpy(self->data.ExchangeName, ExchangeField_ExchangeName, sizeof(self->data.ExchangeName) );
        ExchangeField_ExchangeName = NULL;
    }
            
    ///交易所属性
    // TThostFtdcExchangePropertyType char
    self->data.ExchangeProperty = ExchangeField_ExchangeProperty;
            

    return 0;
}

static void PyCThostFtdcExchangeField_dealloc(PyCThostFtdcExchangeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeField_repr(PyCThostFtdcExchangeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ExchangeName", self->data.ExchangeName//, (Py_ssize_t)sizeof(self->data.ExchangeName) 
        ,"ExchangeProperty", self->data.ExchangeProperty 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcExchangeField_get_ExchangeID(PyCThostFtdcExchangeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcExchangeField_set_ExchangeID(PyCThostFtdcExchangeField *self, PyObject* val, void *closure) {
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
            
///交易所名称
// TThostFtdcExchangeNameType char[61]
static PyObject *PyCThostFtdcExchangeField_get_ExchangeName(PyCThostFtdcExchangeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeName, (Py_ssize_t)sizeof(self->data.ExchangeName));
    return PyBytes_FromString(self->data.ExchangeName);
}

///交易所名称
// TThostFtdcExchangeNameType char[61]
static int PyCThostFtdcExchangeField_set_ExchangeName(PyCThostFtdcExchangeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeName)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeName must be less than 61 bytes");
        return -1;
    }
    // memset(self->data.ExchangeName, 0, sizeof(self->data.ExchangeName));
    // memcpy(self->data.ExchangeName, buf, len);
    strncpy(self->data.ExchangeName, buf, sizeof(self->data.ExchangeName));
    return 0;
}
            
///交易所属性
// TThostFtdcExchangePropertyType char
static PyObject *PyCThostFtdcExchangeField_get_ExchangeProperty(PyCThostFtdcExchangeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ExchangeProperty), 1);
}

///交易所属性
// TThostFtdcExchangePropertyType char
static int PyCThostFtdcExchangeField_set_ExchangeProperty(PyCThostFtdcExchangeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeProperty Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeProperty)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeProperty must be equal 1 bytes");
        return -1;
    }
    self->data.ExchangeProperty = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcExchangeField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeField_get_ExchangeID, (setter)PyCThostFtdcExchangeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所名称 
    {(char *)"ExchangeName", (getter)PyCThostFtdcExchangeField_get_ExchangeName, (setter)PyCThostFtdcExchangeField_set_ExchangeName, (char *)"ExchangeName", NULL},
    ///交易所属性 
    {(char *)"ExchangeProperty", (getter)PyCThostFtdcExchangeField_get_ExchangeProperty, (setter)PyCThostFtdcExchangeField_set_ExchangeProperty, (char *)"ExchangeProperty", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeField_new,       /* tp_new */
};

int PyCThostFtdcExchangeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeField  */
	if (PyType_Ready(&PyCThostFtdcExchangeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeField", (PyObject *)&PyCThostFtdcExchangeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeField to module");
        Py_DECREF(&PyCThostFtdcExchangeFieldType);
		return -1;
    }

    return 0;
}
