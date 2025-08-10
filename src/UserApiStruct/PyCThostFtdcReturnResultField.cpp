
#include "PyCThostFtdcReturnResultField.h"

///返回结果

static PyObject *PyCThostFtdcReturnResultField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReturnResultField *self = (PyCThostFtdcReturnResultField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReturnResultField_init(PyCThostFtdcReturnResultField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ReturnCode", "DescrInfoForReturnCode",  NULL};


    ///返回代码
    // TThostFtdcReturnCodeType char[7]
    const char *ReturnResultField_ReturnCode = NULL;
    Py_ssize_t ReturnResultField_ReturnCode_len = 0;
            
    ///返回码描述
    // TThostFtdcDescrInfoForReturnCodeType char[129]
    const char *ReturnResultField_DescrInfoForReturnCode = NULL;
    Py_ssize_t ReturnResultField_DescrInfoForReturnCode_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &ReturnResultField_ReturnCode, &ReturnResultField_ReturnCode_len 
        , &ReturnResultField_DescrInfoForReturnCode, &ReturnResultField_DescrInfoForReturnCode_len 


    )) {
        return -1;
    }


    ///返回代码
    // TThostFtdcReturnCodeType char[7]
    if( ReturnResultField_ReturnCode != NULL ) {
        if(ReturnResultField_ReturnCode_len > (Py_ssize_t)sizeof(self->data.ReturnCode)) {
            PyErr_Format(PyExc_ValueError, "ReturnCode too long: length=%zd (max allowed is %zd)", ReturnResultField_ReturnCode_len, (Py_ssize_t)sizeof(self->data.ReturnCode));
            return -1;
        }
        // memset(self->data.ReturnCode, 0, sizeof(self->data.ReturnCode));
        // memcpy(self->data.ReturnCode, ReturnResultField_ReturnCode, ReturnResultField_ReturnCode_len);        
        strncpy(self->data.ReturnCode, ReturnResultField_ReturnCode, sizeof(self->data.ReturnCode) );
        ReturnResultField_ReturnCode = NULL;
    }
            
    ///返回码描述
    // TThostFtdcDescrInfoForReturnCodeType char[129]
    if( ReturnResultField_DescrInfoForReturnCode != NULL ) {
        if(ReturnResultField_DescrInfoForReturnCode_len > (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode)) {
            PyErr_Format(PyExc_ValueError, "DescrInfoForReturnCode too long: length=%zd (max allowed is %zd)", ReturnResultField_DescrInfoForReturnCode_len, (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode));
            return -1;
        }
        // memset(self->data.DescrInfoForReturnCode, 0, sizeof(self->data.DescrInfoForReturnCode));
        // memcpy(self->data.DescrInfoForReturnCode, ReturnResultField_DescrInfoForReturnCode, ReturnResultField_DescrInfoForReturnCode_len);        
        strncpy(self->data.DescrInfoForReturnCode, ReturnResultField_DescrInfoForReturnCode, sizeof(self->data.DescrInfoForReturnCode) );
        ReturnResultField_DescrInfoForReturnCode = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReturnResultField_dealloc(PyCThostFtdcReturnResultField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReturnResultField_repr(PyCThostFtdcReturnResultField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"ReturnCode", self->data.ReturnCode//, (Py_ssize_t)sizeof(self->data.ReturnCode) 
        ,"DescrInfoForReturnCode", self->data.DescrInfoForReturnCode//, (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReturnResultField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///返回代码
// TThostFtdcReturnCodeType char[7]
static PyObject *PyCThostFtdcReturnResultField_get_ReturnCode(PyCThostFtdcReturnResultField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ReturnCode, (Py_ssize_t)sizeof(self->data.ReturnCode));
    return PyBytes_FromString(self->data.ReturnCode);
}

///返回代码
// TThostFtdcReturnCodeType char[7]
static int PyCThostFtdcReturnResultField_set_ReturnCode(PyCThostFtdcReturnResultField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReturnCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "ReturnCode must be less than 7 bytes");
        return -1;
    }
    // memset(self->data.ReturnCode, 0, sizeof(self->data.ReturnCode));
    // memcpy(self->data.ReturnCode, buf, len);
    strncpy(self->data.ReturnCode, buf, sizeof(self->data.ReturnCode));
    return 0;
}
            
///返回码描述
// TThostFtdcDescrInfoForReturnCodeType char[129]
static PyObject *PyCThostFtdcReturnResultField_get_DescrInfoForReturnCode(PyCThostFtdcReturnResultField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DescrInfoForReturnCode, (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode));
    return PyBytes_FromString(self->data.DescrInfoForReturnCode);
}

///返回码描述
// TThostFtdcDescrInfoForReturnCodeType char[129]
static int PyCThostFtdcReturnResultField_set_DescrInfoForReturnCode(PyCThostFtdcReturnResultField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DescrInfoForReturnCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DescrInfoForReturnCode)) {
        PyErr_SetString(PyExc_ValueError, "DescrInfoForReturnCode must be less than 129 bytes");
        return -1;
    }
    // memset(self->data.DescrInfoForReturnCode, 0, sizeof(self->data.DescrInfoForReturnCode));
    // memcpy(self->data.DescrInfoForReturnCode, buf, len);
    strncpy(self->data.DescrInfoForReturnCode, buf, sizeof(self->data.DescrInfoForReturnCode));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReturnResultField_getset[] = {
    ///返回代码 
    {(char *)"ReturnCode", (getter)PyCThostFtdcReturnResultField_get_ReturnCode, (setter)PyCThostFtdcReturnResultField_set_ReturnCode, (char *)"ReturnCode", NULL},
    ///返回码描述 
    {(char *)"DescrInfoForReturnCode", (getter)PyCThostFtdcReturnResultField_get_DescrInfoForReturnCode, (setter)PyCThostFtdcReturnResultField_set_DescrInfoForReturnCode, (char *)"DescrInfoForReturnCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReturnResultFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReturnResultField",	/* tp_name */
	sizeof(PyCThostFtdcReturnResultField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReturnResultField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReturnResultField_repr,   /* tp_repr */
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
	"CThostFtdcReturnResultField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReturnResultField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReturnResultField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReturnResultField_new,       /* tp_new */
};

int PyCThostFtdcReturnResultFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReturnResultField  */
	if (PyType_Ready(&PyCThostFtdcReturnResultFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReturnResultField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReturnResultFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReturnResultField", (PyObject *)&PyCThostFtdcReturnResultFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReturnResultField to module");
        Py_DECREF(&PyCThostFtdcReturnResultFieldType);
		return -1;
    }

    return 0;
}
