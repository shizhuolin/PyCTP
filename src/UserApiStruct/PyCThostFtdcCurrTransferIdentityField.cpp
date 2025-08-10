
#include "PyCThostFtdcCurrTransferIdentityField.h"

///当前银期所属交易中心

static PyObject *PyCThostFtdcCurrTransferIdentityField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCurrTransferIdentityField *self = (PyCThostFtdcCurrTransferIdentityField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCurrTransferIdentityField_init(PyCThostFtdcCurrTransferIdentityField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"IdentityID",  NULL};


    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int CurrTransferIdentityField_IdentityID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#endif

        , &CurrTransferIdentityField_IdentityID 


    )) {
        return -1;
    }


    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.IdentityID = CurrTransferIdentityField_IdentityID;
        

    return 0;
}

static void PyCThostFtdcCurrTransferIdentityField_dealloc(PyCThostFtdcCurrTransferIdentityField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCurrTransferIdentityField_repr(PyCThostFtdcCurrTransferIdentityField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i}"
#endif

        ,"IdentityID", self->data.IdentityID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrTransferIdentityField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcCurrTransferIdentityField_get_IdentityID(PyCThostFtdcCurrTransferIdentityField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IdentityID);
#else
    return PyInt_FromLong(self->data.IdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcCurrTransferIdentityField_set_IdentityID(PyCThostFtdcCurrTransferIdentityField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IdentityID value out of range for C int");
        return -1;
    }
    self->data.IdentityID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcCurrTransferIdentityField_getset[] = {
    ///交易中心代码 
    {(char *)"IdentityID", (getter)PyCThostFtdcCurrTransferIdentityField_get_IdentityID, (setter)PyCThostFtdcCurrTransferIdentityField_set_IdentityID, (char *)"IdentityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCurrTransferIdentityFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCurrTransferIdentityField",	/* tp_name */
	sizeof(PyCThostFtdcCurrTransferIdentityField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCurrTransferIdentityField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCurrTransferIdentityField_repr,   /* tp_repr */
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
	"CThostFtdcCurrTransferIdentityField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCurrTransferIdentityField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCurrTransferIdentityField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCurrTransferIdentityField_new,       /* tp_new */
};

int PyCThostFtdcCurrTransferIdentityFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCurrTransferIdentityField  */
	if (PyType_Ready(&PyCThostFtdcCurrTransferIdentityFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCurrTransferIdentityField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCurrTransferIdentityFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCurrTransferIdentityField", (PyObject *)&PyCThostFtdcCurrTransferIdentityFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCurrTransferIdentityField to module");
        Py_DECREF(&PyCThostFtdcCurrTransferIdentityFieldType);
		return -1;
    }

    return 0;
}
