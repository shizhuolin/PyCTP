
#include "PyCThostFtdcQryCurrDRIdentityField.h"

///查询当前交易中心

static PyObject *PyCThostFtdcQryCurrDRIdentityField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCurrDRIdentityField *self = (PyCThostFtdcQryCurrDRIdentityField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryCurrDRIdentityField_init(PyCThostFtdcQryCurrDRIdentityField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DRIdentityID",  NULL};


    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    int QryCurrDRIdentityField_DRIdentityID = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i", (char **)kwlist
#endif

        , &QryCurrDRIdentityField_DRIdentityID 


    )) {
        return -1;
    }


    ///交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DRIdentityID = QryCurrDRIdentityField_DRIdentityID;
        

    return 0;
}

static void PyCThostFtdcQryCurrDRIdentityField_dealloc(PyCThostFtdcQryCurrDRIdentityField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCurrDRIdentityField_repr(PyCThostFtdcQryCurrDRIdentityField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i}"
#endif

        ,"DRIdentityID", self->data.DRIdentityID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCurrDRIdentityField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcQryCurrDRIdentityField_get_DRIdentityID(PyCThostFtdcQryCurrDRIdentityField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DRIdentityID);
#else
    return PyInt_FromLong(self->data.DRIdentityID);
#endif
}

///交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcQryCurrDRIdentityField_set_DRIdentityID(PyCThostFtdcQryCurrDRIdentityField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the DRIdentityID value out of range for C int");
        return -1;
    }
    self->data.DRIdentityID = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcQryCurrDRIdentityField_getset[] = {
    ///交易中心代码 
    {(char *)"DRIdentityID", (getter)PyCThostFtdcQryCurrDRIdentityField_get_DRIdentityID, (setter)PyCThostFtdcQryCurrDRIdentityField_set_DRIdentityID, (char *)"DRIdentityID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCurrDRIdentityFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCurrDRIdentityField",	/* tp_name */
	sizeof(PyCThostFtdcQryCurrDRIdentityField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCurrDRIdentityField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCurrDRIdentityField_repr,   /* tp_repr */
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
	"CThostFtdcQryCurrDRIdentityField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCurrDRIdentityField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCurrDRIdentityField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCurrDRIdentityField_new,       /* tp_new */
};

int PyCThostFtdcQryCurrDRIdentityFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCurrDRIdentityField  */
	if (PyType_Ready(&PyCThostFtdcQryCurrDRIdentityFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCurrDRIdentityField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCurrDRIdentityFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCurrDRIdentityField", (PyObject *)&PyCThostFtdcQryCurrDRIdentityFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCurrDRIdentityField to module");
        Py_DECREF(&PyCThostFtdcQryCurrDRIdentityFieldType);
		return -1;
    }

    return 0;
}
