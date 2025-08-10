
#include "PyCThostFtdcQryCombLegField.h"

///组合腿信息查询

static PyObject *PyCThostFtdcQryCombLegField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCombLegField *self = (PyCThostFtdcQryCombLegField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryCombLegField_init(PyCThostFtdcQryCombLegField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"LegInstrumentID",  NULL};


    ///单腿合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryCombLegField_LegInstrumentID = NULL;
    Py_ssize_t QryCombLegField_LegInstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QryCombLegField_LegInstrumentID, &QryCombLegField_LegInstrumentID_len 


    )) {
        return -1;
    }


    ///单腿合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryCombLegField_LegInstrumentID != NULL ) {
        if(QryCombLegField_LegInstrumentID_len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is %zd)", QryCombLegField_LegInstrumentID_len, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
            return -1;
        }
        // memset(self->data.LegInstrumentID, 0, sizeof(self->data.LegInstrumentID));
        // memcpy(self->data.LegInstrumentID, QryCombLegField_LegInstrumentID, QryCombLegField_LegInstrumentID_len);        
        strncpy(self->data.LegInstrumentID, QryCombLegField_LegInstrumentID, sizeof(self->data.LegInstrumentID) );
        QryCombLegField_LegInstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryCombLegField_dealloc(PyCThostFtdcQryCombLegField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCombLegField_repr(PyCThostFtdcQryCombLegField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"LegInstrumentID", self->data.LegInstrumentID//, (Py_ssize_t)sizeof(self->data.LegInstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombLegField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///单腿合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryCombLegField_get_LegInstrumentID(PyCThostFtdcQryCombLegField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LegInstrumentID, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
    return PyBytes_FromString(self->data.LegInstrumentID);
}

///单腿合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryCombLegField_set_LegInstrumentID(PyCThostFtdcQryCombLegField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.LegInstrumentID, 0, sizeof(self->data.LegInstrumentID));
    // memcpy(self->data.LegInstrumentID, buf, len);
    strncpy(self->data.LegInstrumentID, buf, sizeof(self->data.LegInstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryCombLegField_getset[] = {
    ///单腿合约代码 
    {(char *)"LegInstrumentID", (getter)PyCThostFtdcQryCombLegField_get_LegInstrumentID, (setter)PyCThostFtdcQryCombLegField_set_LegInstrumentID, (char *)"LegInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCombLegFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCombLegField",	/* tp_name */
	sizeof(PyCThostFtdcQryCombLegField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCombLegField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCombLegField_repr,   /* tp_repr */
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
	"CThostFtdcQryCombLegField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCombLegField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCombLegField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCombLegField_new,       /* tp_new */
};

int PyCThostFtdcQryCombLegFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCombLegField  */
	if (PyType_Ready(&PyCThostFtdcQryCombLegFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCombLegField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCombLegFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCombLegField", (PyObject *)&PyCThostFtdcQryCombLegFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombLegField to module");
        Py_DECREF(&PyCThostFtdcQryCombLegFieldType);
		return -1;
    }

    return 0;
}
