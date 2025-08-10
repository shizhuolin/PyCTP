
#include "PyCThostFtdcSyncSPBMParameterEndField.h"

///同步SPBM参数结束

static PyObject *PyCThostFtdcSyncSPBMParameterEndField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncSPBMParameterEndField *self = (PyCThostFtdcSyncSPBMParameterEndField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncSPBMParameterEndField_init(PyCThostFtdcSyncSPBMParameterEndField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncSPBMParameterEndField_TradingDay = NULL;
    Py_ssize_t SyncSPBMParameterEndField_TradingDay_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &SyncSPBMParameterEndField_TradingDay, &SyncSPBMParameterEndField_TradingDay_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncSPBMParameterEndField_TradingDay != NULL ) {
        if(SyncSPBMParameterEndField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncSPBMParameterEndField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncSPBMParameterEndField_TradingDay, SyncSPBMParameterEndField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncSPBMParameterEndField_TradingDay, sizeof(self->data.TradingDay) );
        SyncSPBMParameterEndField_TradingDay = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSyncSPBMParameterEndField_dealloc(PyCThostFtdcSyncSPBMParameterEndField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncSPBMParameterEndField_repr(PyCThostFtdcSyncSPBMParameterEndField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncSPBMParameterEndField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncSPBMParameterEndField_get_TradingDay(PyCThostFtdcSyncSPBMParameterEndField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncSPBMParameterEndField_set_TradingDay(PyCThostFtdcSyncSPBMParameterEndField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSyncSPBMParameterEndField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncSPBMParameterEndField_get_TradingDay, (setter)PyCThostFtdcSyncSPBMParameterEndField_set_TradingDay, (char *)"TradingDay", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncSPBMParameterEndFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncSPBMParameterEndField",	/* tp_name */
	sizeof(PyCThostFtdcSyncSPBMParameterEndField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncSPBMParameterEndField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncSPBMParameterEndField_repr,   /* tp_repr */
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
	"CThostFtdcSyncSPBMParameterEndField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncSPBMParameterEndField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncSPBMParameterEndField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncSPBMParameterEndField_new,       /* tp_new */
};

int PyCThostFtdcSyncSPBMParameterEndFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncSPBMParameterEndField  */
	if (PyType_Ready(&PyCThostFtdcSyncSPBMParameterEndFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncSPBMParameterEndField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncSPBMParameterEndFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncSPBMParameterEndField", (PyObject *)&PyCThostFtdcSyncSPBMParameterEndFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncSPBMParameterEndField to module");
        Py_DECREF(&PyCThostFtdcSyncSPBMParameterEndFieldType);
		return -1;
    }

    return 0;
}
