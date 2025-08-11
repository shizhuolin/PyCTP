
#include "PyCThostFtdcCurrDRIdentityField.h"



static PyObject *PyCThostFtdcCurrDRIdentityField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCurrDRIdentityField *self = (PyCThostFtdcCurrDRIdentityField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCurrDRIdentityField_init(PyCThostFtdcCurrDRIdentityField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DRIdentityID",  NULL};

	//TThostFtdcDRIdentityIDType int
	int pCurrDRIdentityField_DRIdentityID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#endif

		, &pCurrDRIdentityField_DRIdentityID


    )) {
        return -1;
    }

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pCurrDRIdentityField_DRIdentityID;



    return 0;
}

static void PyCThostFtdcCurrDRIdentityField_dealloc(PyCThostFtdcCurrDRIdentityField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCurrDRIdentityField_repr(PyCThostFtdcCurrDRIdentityField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i}"
#endif

		, "DRIdentityID", self->data.DRIdentityID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCurrDRIdentityField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCurrDRIdentityField_get_DRIdentityID(PyCThostFtdcCurrDRIdentityField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static int PyCThostFtdcCurrDRIdentityField_set_DRIdentityID(PyCThostFtdcCurrDRIdentityField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int"); 
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
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.DRIdentityID = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcCurrDRIdentityField_getset[] = {
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcCurrDRIdentityField_get_DRIdentityID, (setter)PyCThostFtdcCurrDRIdentityField_set_DRIdentityID, (char *)"DRIdentityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCurrDRIdentityFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCurrDRIdentityField",	/* tp_name */
	sizeof(PyCThostFtdcCurrDRIdentityField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCurrDRIdentityField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCurrDRIdentityField_repr,   /* tp_repr */
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
	"CThostFtdcCurrDRIdentityField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCurrDRIdentityField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCurrDRIdentityField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCurrDRIdentityField_new,       /* tp_new */
};

int PyCThostFtdcCurrDRIdentityFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCurrDRIdentityField  */
	if (PyType_Ready(&PyCThostFtdcCurrDRIdentityFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCurrDRIdentityField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCurrDRIdentityFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCurrDRIdentityField", (PyObject *)&PyCThostFtdcCurrDRIdentityFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCurrDRIdentityField to module");
        Py_DECREF(&PyCThostFtdcCurrDRIdentityFieldType);
		return -1;
    }

    return 0;
}
