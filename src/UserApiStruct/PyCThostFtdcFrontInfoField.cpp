
#include "PyCThostFtdcFrontInfoField.h"

///前置信息

static PyObject *PyCThostFtdcFrontInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcFrontInfoField *self = (PyCThostFtdcFrontInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcFrontInfoField_init(PyCThostFtdcFrontInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontAddr", "QryFreq", "FTDPkgFreq",  NULL};


    ///前置地址
    // TThostFtdcAddressType char[101]
    const char *FrontInfoField_FrontAddr = NULL;
    Py_ssize_t FrontInfoField_FrontAddr_len = 0;
            
    ///查询流控
    // TThostFtdcQueryFreqType int
    int FrontInfoField_QryFreq = 0;
        
    ///FTD流控
    // TThostFtdcQueryFreqType int
    int FrontInfoField_FTDPkgFreq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#ii", (char **)kwlist
#endif

        , &FrontInfoField_FrontAddr, &FrontInfoField_FrontAddr_len 
        , &FrontInfoField_QryFreq 
        , &FrontInfoField_FTDPkgFreq 


    )) {
        return -1;
    }


    ///前置地址
    // TThostFtdcAddressType char[101]
    if( FrontInfoField_FrontAddr != NULL ) {
        if(FrontInfoField_FrontAddr_len > (Py_ssize_t)sizeof(self->data.FrontAddr)) {
            PyErr_Format(PyExc_ValueError, "FrontAddr too long: length=%zd (max allowed is %zd)", FrontInfoField_FrontAddr_len, (Py_ssize_t)sizeof(self->data.FrontAddr));
            return -1;
        }
        // memset(self->data.FrontAddr, 0, sizeof(self->data.FrontAddr));
        // memcpy(self->data.FrontAddr, FrontInfoField_FrontAddr, FrontInfoField_FrontAddr_len);        
        strncpy(self->data.FrontAddr, FrontInfoField_FrontAddr, sizeof(self->data.FrontAddr) );
        FrontInfoField_FrontAddr = NULL;
    }
            
    ///查询流控
    // TThostFtdcQueryFreqType int
    self->data.QryFreq = FrontInfoField_QryFreq;
        
    ///FTD流控
    // TThostFtdcQueryFreqType int
    self->data.FTDPkgFreq = FrontInfoField_FTDPkgFreq;
        

    return 0;
}

static void PyCThostFtdcFrontInfoField_dealloc(PyCThostFtdcFrontInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcFrontInfoField_repr(PyCThostFtdcFrontInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:i}"
#endif

        ,"FrontAddr", self->data.FrontAddr//, (Py_ssize_t)sizeof(self->data.FrontAddr) 
        ,"QryFreq", self->data.QryFreq 
        ,"FTDPkgFreq", self->data.FTDPkgFreq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFrontInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///前置地址
// TThostFtdcAddressType char[101]
static PyObject *PyCThostFtdcFrontInfoField_get_FrontAddr(PyCThostFtdcFrontInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FrontAddr, (Py_ssize_t)sizeof(self->data.FrontAddr));
    return PyBytes_FromString(self->data.FrontAddr);
}

///前置地址
// TThostFtdcAddressType char[101]
static int PyCThostFtdcFrontInfoField_set_FrontAddr(PyCThostFtdcFrontInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontAddr Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FrontAddr)) {
        PyErr_SetString(PyExc_ValueError, "FrontAddr must be less than 101 bytes");
        return -1;
    }
    // memset(self->data.FrontAddr, 0, sizeof(self->data.FrontAddr));
    // memcpy(self->data.FrontAddr, buf, len);
    strncpy(self->data.FrontAddr, buf, sizeof(self->data.FrontAddr));
    return 0;
}
            
///查询流控
// TThostFtdcQueryFreqType int
static PyObject *PyCThostFtdcFrontInfoField_get_QryFreq(PyCThostFtdcFrontInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.QryFreq);
#else
    return PyInt_FromLong(self->data.QryFreq);
#endif
}

///查询流控
// TThostFtdcQueryFreqType int
static int PyCThostFtdcFrontInfoField_set_QryFreq(PyCThostFtdcFrontInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QryFreq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QryFreq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the QryFreq value out of range for C int");
        return -1;
    }
    self->data.QryFreq = (int)buf;
    return 0;
}
        
///FTD流控
// TThostFtdcQueryFreqType int
static PyObject *PyCThostFtdcFrontInfoField_get_FTDPkgFreq(PyCThostFtdcFrontInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FTDPkgFreq);
#else
    return PyInt_FromLong(self->data.FTDPkgFreq);
#endif
}

///FTD流控
// TThostFtdcQueryFreqType int
static int PyCThostFtdcFrontInfoField_set_FTDPkgFreq(PyCThostFtdcFrontInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FTDPkgFreq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FTDPkgFreq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FTDPkgFreq value out of range for C int");
        return -1;
    }
    self->data.FTDPkgFreq = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcFrontInfoField_getset[] = {
    ///前置地址 
    {(char *)"FrontAddr", (getter)PyCThostFtdcFrontInfoField_get_FrontAddr, (setter)PyCThostFtdcFrontInfoField_set_FrontAddr, (char *)"FrontAddr", NULL},
    ///查询流控 
    {(char *)"QryFreq", (getter)PyCThostFtdcFrontInfoField_get_QryFreq, (setter)PyCThostFtdcFrontInfoField_set_QryFreq, (char *)"QryFreq", NULL},
    ///FTD流控 
    {(char *)"FTDPkgFreq", (getter)PyCThostFtdcFrontInfoField_get_FTDPkgFreq, (setter)PyCThostFtdcFrontInfoField_set_FTDPkgFreq, (char *)"FTDPkgFreq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcFrontInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcFrontInfoField",	/* tp_name */
	sizeof(PyCThostFtdcFrontInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcFrontInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcFrontInfoField_repr,   /* tp_repr */
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
	"CThostFtdcFrontInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcFrontInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcFrontInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcFrontInfoField_new,       /* tp_new */
};

int PyCThostFtdcFrontInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcFrontInfoField  */
	if (PyType_Ready(&PyCThostFtdcFrontInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcFrontInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcFrontInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcFrontInfoField", (PyObject *)&PyCThostFtdcFrontInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFrontInfoField to module");
        Py_DECREF(&PyCThostFtdcFrontInfoFieldType);
		return -1;
    }

    return 0;
}
