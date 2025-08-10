
#include "PyCThostFtdcAuthForbiddenIPField.h"

///禁止认证IP

static PyObject *PyCThostFtdcAuthForbiddenIPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAuthForbiddenIPField *self = (PyCThostFtdcAuthForbiddenIPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcAuthForbiddenIPField_init(PyCThostFtdcAuthForbiddenIPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"IPAddress",  NULL};


    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *AuthForbiddenIPField_IPAddress = NULL;
    Py_ssize_t AuthForbiddenIPField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &AuthForbiddenIPField_IPAddress, &AuthForbiddenIPField_IPAddress_len 


    )) {
        return -1;
    }


    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( AuthForbiddenIPField_IPAddress != NULL ) {
        if(AuthForbiddenIPField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", AuthForbiddenIPField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, AuthForbiddenIPField_IPAddress, AuthForbiddenIPField_IPAddress_len);        
        strncpy(self->data.IPAddress, AuthForbiddenIPField_IPAddress, sizeof(self->data.IPAddress) );
        AuthForbiddenIPField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcAuthForbiddenIPField_dealloc(PyCThostFtdcAuthForbiddenIPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAuthForbiddenIPField_repr(PyCThostFtdcAuthForbiddenIPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthForbiddenIPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcAuthForbiddenIPField_get_IPAddress(PyCThostFtdcAuthForbiddenIPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcAuthForbiddenIPField_set_IPAddress(PyCThostFtdcAuthForbiddenIPField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcAuthForbiddenIPField_getset[] = {
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcAuthForbiddenIPField_get_IPAddress, (setter)PyCThostFtdcAuthForbiddenIPField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAuthForbiddenIPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAuthForbiddenIPField",	/* tp_name */
	sizeof(PyCThostFtdcAuthForbiddenIPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAuthForbiddenIPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAuthForbiddenIPField_repr,   /* tp_repr */
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
	"CThostFtdcAuthForbiddenIPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAuthForbiddenIPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAuthForbiddenIPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAuthForbiddenIPField_new,       /* tp_new */
};

int PyCThostFtdcAuthForbiddenIPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAuthForbiddenIPField  */
	if (PyType_Ready(&PyCThostFtdcAuthForbiddenIPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAuthForbiddenIPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAuthForbiddenIPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAuthForbiddenIPField", (PyObject *)&PyCThostFtdcAuthForbiddenIPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthForbiddenIPField to module");
        Py_DECREF(&PyCThostFtdcAuthForbiddenIPFieldType);
		return -1;
    }

    return 0;
}
