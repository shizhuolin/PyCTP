
#include "PyCThostFtdcQueryFreqField.h"

///查询频率，每秒查询比数

static PyObject *PyCThostFtdcQueryFreqField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQueryFreqField *self = (PyCThostFtdcQueryFreqField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQueryFreqField_init(PyCThostFtdcQueryFreqField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"QueryFreq", "FTDPkgFreq",  NULL};


    ///查询频率
    // TThostFtdcQueryFreqType int
    int QueryFreqField_QueryFreq = 0;
        
    ///FTD频率
    // TThostFtdcQueryFreqType int
    int QueryFreqField_FTDPkgFreq = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ii", (char **)kwlist
#endif

        , &QueryFreqField_QueryFreq 
        , &QueryFreqField_FTDPkgFreq 


    )) {
        return -1;
    }


    ///查询频率
    // TThostFtdcQueryFreqType int
    self->data.QueryFreq = QueryFreqField_QueryFreq;
        
    ///FTD频率
    // TThostFtdcQueryFreqType int
    self->data.FTDPkgFreq = QueryFreqField_FTDPkgFreq;
        

    return 0;
}

static void PyCThostFtdcQueryFreqField_dealloc(PyCThostFtdcQueryFreqField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQueryFreqField_repr(PyCThostFtdcQueryFreqField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i}"
#endif

        ,"QueryFreq", self->data.QueryFreq 
        ,"FTDPkgFreq", self->data.FTDPkgFreq 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryFreqField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///查询频率
// TThostFtdcQueryFreqType int
static PyObject *PyCThostFtdcQueryFreqField_get_QueryFreq(PyCThostFtdcQueryFreqField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.QueryFreq);
#else
    return PyInt_FromLong(self->data.QueryFreq);
#endif
}

///查询频率
// TThostFtdcQueryFreqType int
static int PyCThostFtdcQueryFreqField_set_QueryFreq(PyCThostFtdcQueryFreqField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QueryFreq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QueryFreq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the QueryFreq value out of range for C int");
        return -1;
    }
    self->data.QueryFreq = (int)buf;
    return 0;
}
        
///FTD频率
// TThostFtdcQueryFreqType int
static PyObject *PyCThostFtdcQueryFreqField_get_FTDPkgFreq(PyCThostFtdcQueryFreqField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FTDPkgFreq);
#else
    return PyInt_FromLong(self->data.FTDPkgFreq);
#endif
}

///FTD频率
// TThostFtdcQueryFreqType int
static int PyCThostFtdcQueryFreqField_set_FTDPkgFreq(PyCThostFtdcQueryFreqField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcQueryFreqField_getset[] = {
    ///查询频率 
    {(char *)"QueryFreq", (getter)PyCThostFtdcQueryFreqField_get_QueryFreq, (setter)PyCThostFtdcQueryFreqField_set_QueryFreq, (char *)"QueryFreq", NULL},
    ///FTD频率 
    {(char *)"FTDPkgFreq", (getter)PyCThostFtdcQueryFreqField_get_FTDPkgFreq, (setter)PyCThostFtdcQueryFreqField_set_FTDPkgFreq, (char *)"FTDPkgFreq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQueryFreqFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQueryFreqField",	/* tp_name */
	sizeof(PyCThostFtdcQueryFreqField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQueryFreqField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQueryFreqField_repr,   /* tp_repr */
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
	"CThostFtdcQueryFreqField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQueryFreqField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQueryFreqField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQueryFreqField_new,       /* tp_new */
};

int PyCThostFtdcQueryFreqFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQueryFreqField  */
	if (PyType_Ready(&PyCThostFtdcQueryFreqFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQueryFreqField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQueryFreqFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQueryFreqField", (PyObject *)&PyCThostFtdcQueryFreqFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQueryFreqField to module");
        Py_DECREF(&PyCThostFtdcQueryFreqFieldType);
		return -1;
    }

    return 0;
}
