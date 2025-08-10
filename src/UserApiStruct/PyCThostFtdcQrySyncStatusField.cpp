
#include "PyCThostFtdcQrySyncStatusField.h"

///查询组合合约分腿

static PyObject *PyCThostFtdcQrySyncStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySyncStatusField *self = (PyCThostFtdcQrySyncStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySyncStatusField_init(PyCThostFtdcQrySyncStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *QrySyncStatusField_TradingDay = NULL;
    Py_ssize_t QrySyncStatusField_TradingDay_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QrySyncStatusField_TradingDay, &QrySyncStatusField_TradingDay_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( QrySyncStatusField_TradingDay != NULL ) {
        if(QrySyncStatusField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", QrySyncStatusField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, QrySyncStatusField_TradingDay, QrySyncStatusField_TradingDay_len);        
        strncpy(self->data.TradingDay, QrySyncStatusField_TradingDay, sizeof(self->data.TradingDay) );
        QrySyncStatusField_TradingDay = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySyncStatusField_dealloc(PyCThostFtdcQrySyncStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySyncStatusField_repr(PyCThostFtdcQrySyncStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcQrySyncStatusField_get_TradingDay(PyCThostFtdcQrySyncStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcQrySyncStatusField_set_TradingDay(PyCThostFtdcQrySyncStatusField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySyncStatusField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcQrySyncStatusField_get_TradingDay, (setter)PyCThostFtdcQrySyncStatusField_set_TradingDay, (char *)"TradingDay", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySyncStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySyncStatusField",	/* tp_name */
	sizeof(PyCThostFtdcQrySyncStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySyncStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySyncStatusField_repr,   /* tp_repr */
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
	"CThostFtdcQrySyncStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySyncStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySyncStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySyncStatusField_new,       /* tp_new */
};

int PyCThostFtdcQrySyncStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySyncStatusField  */
	if (PyType_Ready(&PyCThostFtdcQrySyncStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySyncStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySyncStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySyncStatusField", (PyObject *)&PyCThostFtdcQrySyncStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncStatusField to module");
        Py_DECREF(&PyCThostFtdcQrySyncStatusFieldType);
		return -1;
    }

    return 0;
}
