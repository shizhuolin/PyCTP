
#include "PyCThostFtdcQrySPMMInstParamField.h"

///SPMM合约参数查询

static PyObject *PyCThostFtdcQrySPMMInstParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPMMInstParamField *self = (PyCThostFtdcQrySPMMInstParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPMMInstParamField_init(PyCThostFtdcQrySPMMInstParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QrySPMMInstParamField_InstrumentID = NULL;
    Py_ssize_t QrySPMMInstParamField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QrySPMMInstParamField_InstrumentID, &QrySPMMInstParamField_InstrumentID_len 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QrySPMMInstParamField_InstrumentID != NULL ) {
        if(QrySPMMInstParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QrySPMMInstParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QrySPMMInstParamField_InstrumentID, QrySPMMInstParamField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QrySPMMInstParamField_InstrumentID, sizeof(self->data.InstrumentID) );
        QrySPMMInstParamField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySPMMInstParamField_dealloc(PyCThostFtdcQrySPMMInstParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPMMInstParamField_repr(PyCThostFtdcQrySPMMInstParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPMMInstParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQrySPMMInstParamField_get_InstrumentID(PyCThostFtdcQrySPMMInstParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQrySPMMInstParamField_set_InstrumentID(PyCThostFtdcQrySPMMInstParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQrySPMMInstParamField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQrySPMMInstParamField_get_InstrumentID, (setter)PyCThostFtdcQrySPMMInstParamField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPMMInstParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPMMInstParamField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPMMInstParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPMMInstParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPMMInstParamField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPMMInstParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPMMInstParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPMMInstParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPMMInstParamField_new,       /* tp_new */
};

int PyCThostFtdcQrySPMMInstParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPMMInstParamField  */
	if (PyType_Ready(&PyCThostFtdcQrySPMMInstParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPMMInstParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPMMInstParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPMMInstParamField", (PyObject *)&PyCThostFtdcQrySPMMInstParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPMMInstParamField to module");
        Py_DECREF(&PyCThostFtdcQrySPMMInstParamFieldType);
		return -1;
    }

    return 0;
}
