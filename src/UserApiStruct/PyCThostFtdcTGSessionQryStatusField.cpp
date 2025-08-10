
#include "PyCThostFtdcTGSessionQryStatusField.h"

///TGate会话查询状态

static PyObject *PyCThostFtdcTGSessionQryStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTGSessionQryStatusField *self = (PyCThostFtdcTGSessionQryStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTGSessionQryStatusField_init(PyCThostFtdcTGSessionQryStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"LastQryFreq", "QryStatus",  NULL};


    ///最近30s的查询频率
    // TThostFtdcCommonIntType int
    int TGSessionQryStatusField_LastQryFreq = 0;
        
    ///查询状态
    // TThostFtdcTGSessionQryStatusType char
    char TGSessionQryStatusField_QryStatus = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ic", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ic", (char **)kwlist
#endif

        , &TGSessionQryStatusField_LastQryFreq 
        , &TGSessionQryStatusField_QryStatus 


    )) {
        return -1;
    }


    ///最近30s的查询频率
    // TThostFtdcCommonIntType int
    self->data.LastQryFreq = TGSessionQryStatusField_LastQryFreq;
        
    ///查询状态
    // TThostFtdcTGSessionQryStatusType char
    self->data.QryStatus = TGSessionQryStatusField_QryStatus;
            

    return 0;
}

static void PyCThostFtdcTGSessionQryStatusField_dealloc(PyCThostFtdcTGSessionQryStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTGSessionQryStatusField_repr(PyCThostFtdcTGSessionQryStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:c}"
#endif

        ,"LastQryFreq", self->data.LastQryFreq 
        ,"QryStatus", self->data.QryStatus 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTGSessionQryStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///最近30s的查询频率
// TThostFtdcCommonIntType int
static PyObject *PyCThostFtdcTGSessionQryStatusField_get_LastQryFreq(PyCThostFtdcTGSessionQryStatusField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LastQryFreq);
#else
    return PyInt_FromLong(self->data.LastQryFreq);
#endif
}

///最近30s的查询频率
// TThostFtdcCommonIntType int
static int PyCThostFtdcTGSessionQryStatusField_set_LastQryFreq(PyCThostFtdcTGSessionQryStatusField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastQryFreq Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastQryFreq Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LastQryFreq value out of range for C int");
        return -1;
    }
    self->data.LastQryFreq = (int)buf;
    return 0;
}
        
///查询状态
// TThostFtdcTGSessionQryStatusType char
static PyObject *PyCThostFtdcTGSessionQryStatusField_get_QryStatus(PyCThostFtdcTGSessionQryStatusField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.QryStatus), 1);
}

///查询状态
// TThostFtdcTGSessionQryStatusType char
static int PyCThostFtdcTGSessionQryStatusField_set_QryStatus(PyCThostFtdcTGSessionQryStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QryStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.QryStatus)) {
        PyErr_SetString(PyExc_ValueError, "QryStatus must be equal 1 bytes");
        return -1;
    }
    self->data.QryStatus = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcTGSessionQryStatusField_getset[] = {
    ///最近30s的查询频率 
    {(char *)"LastQryFreq", (getter)PyCThostFtdcTGSessionQryStatusField_get_LastQryFreq, (setter)PyCThostFtdcTGSessionQryStatusField_set_LastQryFreq, (char *)"LastQryFreq", NULL},
    ///查询状态 
    {(char *)"QryStatus", (getter)PyCThostFtdcTGSessionQryStatusField_get_QryStatus, (setter)PyCThostFtdcTGSessionQryStatusField_set_QryStatus, (char *)"QryStatus", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTGSessionQryStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTGSessionQryStatusField",	/* tp_name */
	sizeof(PyCThostFtdcTGSessionQryStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTGSessionQryStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTGSessionQryStatusField_repr,   /* tp_repr */
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
	"CThostFtdcTGSessionQryStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTGSessionQryStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTGSessionQryStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTGSessionQryStatusField_new,       /* tp_new */
};

int PyCThostFtdcTGSessionQryStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTGSessionQryStatusField  */
	if (PyType_Ready(&PyCThostFtdcTGSessionQryStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTGSessionQryStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTGSessionQryStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTGSessionQryStatusField", (PyObject *)&PyCThostFtdcTGSessionQryStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTGSessionQryStatusField to module");
        Py_DECREF(&PyCThostFtdcTGSessionQryStatusFieldType);
		return -1;
    }

    return 0;
}
