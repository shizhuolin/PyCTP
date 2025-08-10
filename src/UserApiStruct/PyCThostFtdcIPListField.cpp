
#include "PyCThostFtdcIPListField.h"

///IP列表

static PyObject *PyCThostFtdcIPListField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcIPListField *self = (PyCThostFtdcIPListField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcIPListField_init(PyCThostFtdcIPListField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "IsWhite", "IPAddress",  NULL};


    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *IPListField_reserve1 = NULL;
    Py_ssize_t IPListField_reserve1_len = 0;
            
    ///是否白名单
    // TThostFtdcBoolType int
    int IPListField_IsWhite = 0;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *IPListField_IPAddress = NULL;
    Py_ssize_t IPListField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#", (char **)kwlist
#endif

        , &IPListField_reserve1, &IPListField_reserve1_len 
        , &IPListField_IsWhite 
        , &IPListField_IPAddress, &IPListField_IPAddress_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( IPListField_reserve1 != NULL ) {
        if(IPListField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", IPListField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, IPListField_reserve1, IPListField_reserve1_len);        
        strncpy(self->data.reserve1, IPListField_reserve1, sizeof(self->data.reserve1) );
        IPListField_reserve1 = NULL;
    }
            
    ///是否白名单
    // TThostFtdcBoolType int
    self->data.IsWhite = IPListField_IsWhite;
        
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( IPListField_IPAddress != NULL ) {
        if(IPListField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", IPListField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, IPListField_IPAddress, IPListField_IPAddress_len);        
        strncpy(self->data.IPAddress, IPListField_IPAddress, sizeof(self->data.IPAddress) );
        IPListField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcIPListField_dealloc(PyCThostFtdcIPListField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcIPListField_repr(PyCThostFtdcIPListField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"IsWhite", self->data.IsWhite 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIPListField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcIPListField_get_reserve1(PyCThostFtdcIPListField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcIPListField_set_reserve1(PyCThostFtdcIPListField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///是否白名单
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcIPListField_get_IsWhite(PyCThostFtdcIPListField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsWhite);
#else
    return PyInt_FromLong(self->data.IsWhite);
#endif
}

///是否白名单
// TThostFtdcBoolType int
static int PyCThostFtdcIPListField_set_IsWhite(PyCThostFtdcIPListField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsWhite Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsWhite Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the IsWhite value out of range for C int");
        return -1;
    }
    self->data.IsWhite = (int)buf;
    return 0;
}
        
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcIPListField_get_IPAddress(PyCThostFtdcIPListField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcIPListField_set_IPAddress(PyCThostFtdcIPListField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcIPListField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcIPListField_get_reserve1, (setter)PyCThostFtdcIPListField_set_reserve1, (char *)"reserve1", NULL},
    ///是否白名单 
    {(char *)"IsWhite", (getter)PyCThostFtdcIPListField_get_IsWhite, (setter)PyCThostFtdcIPListField_set_IsWhite, (char *)"IsWhite", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcIPListField_get_IPAddress, (setter)PyCThostFtdcIPListField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcIPListFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcIPListField",	/* tp_name */
	sizeof(PyCThostFtdcIPListField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcIPListField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcIPListField_repr,   /* tp_repr */
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
	"CThostFtdcIPListField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcIPListField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcIPListField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcIPListField_new,       /* tp_new */
};

int PyCThostFtdcIPListFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcIPListField  */
	if (PyType_Ready(&PyCThostFtdcIPListFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcIPListField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcIPListFieldType);
    if( PyModule_AddObject(module, "CThostFtdcIPListField", (PyObject *)&PyCThostFtdcIPListFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIPListField to module");
        Py_DECREF(&PyCThostFtdcIPListFieldType);
		return -1;
    }

    return 0;
}
