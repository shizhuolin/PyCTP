
#include "PyCThostFtdcDisseminationField.h"



static PyObject *PyCThostFtdcDisseminationField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDisseminationField *self = (PyCThostFtdcDisseminationField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcDisseminationField_init(PyCThostFtdcDisseminationField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"SequenceSeries", "SequenceNo",  NULL};

	//TThostFtdcSequenceSeriesType short
	short pDisseminationField_SequenceSeries = 0;

	//TThostFtdcSequenceNoType int
	int pDisseminationField_SequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|hi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|hi", (char **)kwlist
#endif

		, &pDisseminationField_SequenceSeries
		, &pDisseminationField_SequenceNo


    )) {
        return -1;
    }

	//TThostFtdcSequenceSeriesType short
	self->data.SequenceSeries = pDisseminationField_SequenceSeries;

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pDisseminationField_SequenceNo;



    return 0;
}

static void PyCThostFtdcDisseminationField_dealloc(PyCThostFtdcDisseminationField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDisseminationField_repr(PyCThostFtdcDisseminationField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:h,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:h,s:i}"
#endif

		, "SequenceSeries", self->data.SequenceSeries
		, "SequenceNo", self->data.SequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDisseminationField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcDisseminationField_get_SequenceSeries(PyCThostFtdcDisseminationField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceSeries);
#else 
	return PyInt_FromLong(self->data.SequenceSeries);
#endif 
}

static PyObject *PyCThostFtdcDisseminationField_get_SequenceNo(PyCThostFtdcDisseminationField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static int PyCThostFtdcDisseminationField_set_SequenceSeries(PyCThostFtdcDisseminationField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceSeries Expected short");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceSeries Expected short"); 
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
    if (buf < SHRT_MIN || buf > SHRT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C short"); 
        return -1; 
    } 
    self->data.SequenceSeries = (short)buf; 
    return 0; 
}

static int PyCThostFtdcDisseminationField_set_SequenceNo(PyCThostFtdcDisseminationField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcDisseminationField_getset[] = {
	 {(char *)"SequenceSeries", (getter)PyCThostFtdcDisseminationField_get_SequenceSeries, (setter)PyCThostFtdcDisseminationField_set_SequenceSeries, (char *)"SequenceSeries", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcDisseminationField_get_SequenceNo, (setter)PyCThostFtdcDisseminationField_set_SequenceNo, (char *)"SequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDisseminationFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDisseminationField",	/* tp_name */
	sizeof(PyCThostFtdcDisseminationField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDisseminationField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDisseminationField_repr,   /* tp_repr */
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
	"CThostFtdcDisseminationField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDisseminationField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDisseminationField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDisseminationField_new,       /* tp_new */
};

int PyCThostFtdcDisseminationFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDisseminationField  */
	if (PyType_Ready(&PyCThostFtdcDisseminationFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDisseminationField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDisseminationFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDisseminationField", (PyObject *)&PyCThostFtdcDisseminationFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDisseminationField to module");
        Py_DECREF(&PyCThostFtdcDisseminationFieldType);
		return -1;
    }

    return 0;
}
