
#include "PyCThostFtdcRspGenUserTextField.h"

///短信验证码生成的回复

static PyObject *PyCThostFtdcRspGenUserTextField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspGenUserTextField *self = (PyCThostFtdcRspGenUserTextField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspGenUserTextField_init(PyCThostFtdcRspGenUserTextField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UserTextSeq",  NULL};


    ///短信验证码序号
    // TThostFtdcUserTextSeqType int
    int RspGenUserTextField_UserTextSeq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#endif

        , &RspGenUserTextField_UserTextSeq 


    )) {
        return -1;
    }


    ///短信验证码序号
    // TThostFtdcUserTextSeqType int
    self->data.UserTextSeq = RspGenUserTextField_UserTextSeq;
        

    return 0;
}

static void PyCThostFtdcRspGenUserTextField_dealloc(PyCThostFtdcRspGenUserTextField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspGenUserTextField_repr(PyCThostFtdcRspGenUserTextField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i}"
#endif

        ,"UserTextSeq", self->data.UserTextSeq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenUserTextField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///短信验证码序号
// TThostFtdcUserTextSeqType int
static PyObject *PyCThostFtdcRspGenUserTextField_get_UserTextSeq(PyCThostFtdcRspGenUserTextField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UserTextSeq);
#else
    return PyInt_FromLong(self->data.UserTextSeq);
#endif
}

///短信验证码序号
// TThostFtdcUserTextSeqType int
static int PyCThostFtdcRspGenUserTextField_set_UserTextSeq(PyCThostFtdcRspGenUserTextField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserTextSeq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserTextSeq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the UserTextSeq value out of range for C int");
        return -1;
    }
    self->data.UserTextSeq = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcRspGenUserTextField_getset[] = {
    ///短信验证码序号 
    {(char *)"UserTextSeq", (getter)PyCThostFtdcRspGenUserTextField_get_UserTextSeq, (setter)PyCThostFtdcRspGenUserTextField_set_UserTextSeq, (char *)"UserTextSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspGenUserTextFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspGenUserTextField",	/* tp_name */
	sizeof(PyCThostFtdcRspGenUserTextField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspGenUserTextField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspGenUserTextField_repr,   /* tp_repr */
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
	"CThostFtdcRspGenUserTextField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspGenUserTextField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspGenUserTextField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspGenUserTextField_new,       /* tp_new */
};

int PyCThostFtdcRspGenUserTextFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspGenUserTextField  */
	if (PyType_Ready(&PyCThostFtdcRspGenUserTextFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspGenUserTextField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspGenUserTextFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspGenUserTextField", (PyObject *)&PyCThostFtdcRspGenUserTextFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspGenUserTextField to module");
        Py_DECREF(&PyCThostFtdcRspGenUserTextFieldType);
		return -1;
    }

    return 0;
}
