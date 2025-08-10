
#include "PyCThostFtdcLoginForbiddenIPField.h"

///禁止登录IP

static PyObject *PyCThostFtdcLoginForbiddenIPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLoginForbiddenIPField *self = (PyCThostFtdcLoginForbiddenIPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcLoginForbiddenIPField_init(PyCThostFtdcLoginForbiddenIPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "IPAddress",  NULL};


    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *LoginForbiddenIPField_reserve1 = NULL;
    Py_ssize_t LoginForbiddenIPField_reserve1_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *LoginForbiddenIPField_IPAddress = NULL;
    Py_ssize_t LoginForbiddenIPField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &LoginForbiddenIPField_reserve1, &LoginForbiddenIPField_reserve1_len 
        , &LoginForbiddenIPField_IPAddress, &LoginForbiddenIPField_IPAddress_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( LoginForbiddenIPField_reserve1 != NULL ) {
        if(LoginForbiddenIPField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", LoginForbiddenIPField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, LoginForbiddenIPField_reserve1, LoginForbiddenIPField_reserve1_len);        
        strncpy(self->data.reserve1, LoginForbiddenIPField_reserve1, sizeof(self->data.reserve1) );
        LoginForbiddenIPField_reserve1 = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( LoginForbiddenIPField_IPAddress != NULL ) {
        if(LoginForbiddenIPField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", LoginForbiddenIPField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, LoginForbiddenIPField_IPAddress, LoginForbiddenIPField_IPAddress_len);        
        strncpy(self->data.IPAddress, LoginForbiddenIPField_IPAddress, sizeof(self->data.IPAddress) );
        LoginForbiddenIPField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcLoginForbiddenIPField_dealloc(PyCThostFtdcLoginForbiddenIPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLoginForbiddenIPField_repr(PyCThostFtdcLoginForbiddenIPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginForbiddenIPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcLoginForbiddenIPField_get_reserve1(PyCThostFtdcLoginForbiddenIPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcLoginForbiddenIPField_set_reserve1(PyCThostFtdcLoginForbiddenIPField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcLoginForbiddenIPField_get_IPAddress(PyCThostFtdcLoginForbiddenIPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcLoginForbiddenIPField_set_IPAddress(PyCThostFtdcLoginForbiddenIPField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcLoginForbiddenIPField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcLoginForbiddenIPField_get_reserve1, (setter)PyCThostFtdcLoginForbiddenIPField_set_reserve1, (char *)"reserve1", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcLoginForbiddenIPField_get_IPAddress, (setter)PyCThostFtdcLoginForbiddenIPField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLoginForbiddenIPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLoginForbiddenIPField",	/* tp_name */
	sizeof(PyCThostFtdcLoginForbiddenIPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLoginForbiddenIPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLoginForbiddenIPField_repr,   /* tp_repr */
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
	"CThostFtdcLoginForbiddenIPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLoginForbiddenIPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLoginForbiddenIPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLoginForbiddenIPField_new,       /* tp_new */
};

int PyCThostFtdcLoginForbiddenIPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLoginForbiddenIPField  */
	if (PyType_Ready(&PyCThostFtdcLoginForbiddenIPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLoginForbiddenIPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLoginForbiddenIPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLoginForbiddenIPField", (PyObject *)&PyCThostFtdcLoginForbiddenIPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoginForbiddenIPField to module");
        Py_DECREF(&PyCThostFtdcLoginForbiddenIPFieldType);
		return -1;
    }

    return 0;
}
