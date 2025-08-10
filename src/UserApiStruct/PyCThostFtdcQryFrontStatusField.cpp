
#include "PyCThostFtdcQryFrontStatusField.h"

///查询前置状态

static PyObject *PyCThostFtdcQryFrontStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryFrontStatusField *self = (PyCThostFtdcQryFrontStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryFrontStatusField_init(PyCThostFtdcQryFrontStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID",  NULL};


    ///前置编号
    // TThostFtdcFrontIDType int
    int QryFrontStatusField_FrontID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#endif

        , &QryFrontStatusField_FrontID 


    )) {
        return -1;
    }


    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = QryFrontStatusField_FrontID;
        

    return 0;
}

static void PyCThostFtdcQryFrontStatusField_dealloc(PyCThostFtdcQryFrontStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryFrontStatusField_repr(PyCThostFtdcQryFrontStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i}"
#endif

        ,"FrontID", self->data.FrontID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryFrontStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcQryFrontStatusField_get_FrontID(PyCThostFtdcQryFrontStatusField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcQryFrontStatusField_set_FrontID(PyCThostFtdcQryFrontStatusField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FrontID value out of range for C int");
        return -1;
    }
    self->data.FrontID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcQryFrontStatusField_getset[] = {
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcQryFrontStatusField_get_FrontID, (setter)PyCThostFtdcQryFrontStatusField_set_FrontID, (char *)"FrontID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryFrontStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryFrontStatusField",	/* tp_name */
	sizeof(PyCThostFtdcQryFrontStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryFrontStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryFrontStatusField_repr,   /* tp_repr */
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
	"CThostFtdcQryFrontStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryFrontStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryFrontStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryFrontStatusField_new,       /* tp_new */
};

int PyCThostFtdcQryFrontStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryFrontStatusField  */
	if (PyType_Ready(&PyCThostFtdcQryFrontStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryFrontStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryFrontStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryFrontStatusField", (PyObject *)&PyCThostFtdcQryFrontStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryFrontStatusField to module");
        Py_DECREF(&PyCThostFtdcQryFrontStatusFieldType);
		return -1;
    }

    return 0;
}
