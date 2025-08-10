
#include "PyCThostFtdcRspUserAuthMethodField.h"

///用户发出获取安全安全登陆方法回复

static PyObject *PyCThostFtdcRspUserAuthMethodField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspUserAuthMethodField *self = (PyCThostFtdcRspUserAuthMethodField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspUserAuthMethodField_init(PyCThostFtdcRspUserAuthMethodField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UsableAuthMethod",  NULL};


    ///当前可以用的认证模式
    // TThostFtdcCurrentAuthMethodType int
    int RspUserAuthMethodField_UsableAuthMethod = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#endif

        , &RspUserAuthMethodField_UsableAuthMethod 


    )) {
        return -1;
    }


    ///当前可以用的认证模式
    // TThostFtdcCurrentAuthMethodType int
    self->data.UsableAuthMethod = RspUserAuthMethodField_UsableAuthMethod;
        

    return 0;
}

static void PyCThostFtdcRspUserAuthMethodField_dealloc(PyCThostFtdcRspUserAuthMethodField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspUserAuthMethodField_repr(PyCThostFtdcRspUserAuthMethodField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i}"
#endif

        ,"UsableAuthMethod", self->data.UsableAuthMethod 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserAuthMethodField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///当前可以用的认证模式
// TThostFtdcCurrentAuthMethodType int
static PyObject *PyCThostFtdcRspUserAuthMethodField_get_UsableAuthMethod(PyCThostFtdcRspUserAuthMethodField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UsableAuthMethod);
#else
    return PyInt_FromLong(self->data.UsableAuthMethod);
#endif
}

///当前可以用的认证模式
// TThostFtdcCurrentAuthMethodType int
static int PyCThostFtdcRspUserAuthMethodField_set_UsableAuthMethod(PyCThostFtdcRspUserAuthMethodField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsableAuthMethod Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsableAuthMethod Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the UsableAuthMethod value out of range for C int");
        return -1;
    }
    self->data.UsableAuthMethod = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcRspUserAuthMethodField_getset[] = {
    ///当前可以用的认证模式 
    {(char *)"UsableAuthMethod", (getter)PyCThostFtdcRspUserAuthMethodField_get_UsableAuthMethod, (setter)PyCThostFtdcRspUserAuthMethodField_set_UsableAuthMethod, (char *)"UsableAuthMethod", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspUserAuthMethodFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspUserAuthMethodField",	/* tp_name */
	sizeof(PyCThostFtdcRspUserAuthMethodField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspUserAuthMethodField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspUserAuthMethodField_repr,   /* tp_repr */
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
	"CThostFtdcRspUserAuthMethodField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspUserAuthMethodField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspUserAuthMethodField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspUserAuthMethodField_new,       /* tp_new */
};

int PyCThostFtdcRspUserAuthMethodFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspUserAuthMethodField  */
	if (PyType_Ready(&PyCThostFtdcRspUserAuthMethodFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspUserAuthMethodField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspUserAuthMethodFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspUserAuthMethodField", (PyObject *)&PyCThostFtdcRspUserAuthMethodFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspUserAuthMethodField to module");
        Py_DECREF(&PyCThostFtdcRspUserAuthMethodFieldType);
		return -1;
    }

    return 0;
}
