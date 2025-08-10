
#include "PyCThostFtdcSpecificInstrumentField.h"

///指定的合约

static PyObject *PyCThostFtdcSpecificInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSpecificInstrumentField *self = (PyCThostFtdcSpecificInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSpecificInstrumentField_init(PyCThostFtdcSpecificInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *SpecificInstrumentField_reserve1 = NULL;
    Py_ssize_t SpecificInstrumentField_reserve1_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SpecificInstrumentField_InstrumentID = NULL;
    Py_ssize_t SpecificInstrumentField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &SpecificInstrumentField_reserve1, &SpecificInstrumentField_reserve1_len 
        , &SpecificInstrumentField_InstrumentID, &SpecificInstrumentField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( SpecificInstrumentField_reserve1 != NULL ) {
        if(SpecificInstrumentField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", SpecificInstrumentField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, SpecificInstrumentField_reserve1, SpecificInstrumentField_reserve1_len);        
        strncpy(self->data.reserve1, SpecificInstrumentField_reserve1, sizeof(self->data.reserve1) );
        SpecificInstrumentField_reserve1 = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SpecificInstrumentField_InstrumentID != NULL ) {
        if(SpecificInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SpecificInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SpecificInstrumentField_InstrumentID, SpecificInstrumentField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SpecificInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
        SpecificInstrumentField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSpecificInstrumentField_dealloc(PyCThostFtdcSpecificInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSpecificInstrumentField_repr(PyCThostFtdcSpecificInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSpecificInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcSpecificInstrumentField_get_reserve1(PyCThostFtdcSpecificInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcSpecificInstrumentField_set_reserve1(PyCThostFtdcSpecificInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSpecificInstrumentField_get_InstrumentID(PyCThostFtdcSpecificInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSpecificInstrumentField_set_InstrumentID(PyCThostFtdcSpecificInstrumentField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSpecificInstrumentField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcSpecificInstrumentField_get_reserve1, (setter)PyCThostFtdcSpecificInstrumentField_set_reserve1, (char *)"reserve1", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSpecificInstrumentField_get_InstrumentID, (setter)PyCThostFtdcSpecificInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSpecificInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSpecificInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcSpecificInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSpecificInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSpecificInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcSpecificInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSpecificInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSpecificInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSpecificInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcSpecificInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSpecificInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcSpecificInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSpecificInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSpecificInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSpecificInstrumentField", (PyObject *)&PyCThostFtdcSpecificInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSpecificInstrumentField to module");
        Py_DECREF(&PyCThostFtdcSpecificInstrumentFieldType);
		return -1;
    }

    return 0;
}
