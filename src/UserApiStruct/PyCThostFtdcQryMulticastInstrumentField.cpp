
#include "PyCThostFtdcQryMulticastInstrumentField.h"

///QryMulticastInstrument

static PyObject *PyCThostFtdcQryMulticastInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMulticastInstrumentField *self = (PyCThostFtdcQryMulticastInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryMulticastInstrumentField_init(PyCThostFtdcQryMulticastInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TopicID", "reserve1", "InstrumentID",  NULL};


    ///主题号
    // TThostFtdcInstallIDType int
    int QryMulticastInstrumentField_TopicID = 0;
        
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryMulticastInstrumentField_reserve1 = NULL;
    Py_ssize_t QryMulticastInstrumentField_reserve1_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryMulticastInstrumentField_InstrumentID = NULL;
    Py_ssize_t QryMulticastInstrumentField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#s#", (char **)kwlist
#endif

        , &QryMulticastInstrumentField_TopicID 
        , &QryMulticastInstrumentField_reserve1, &QryMulticastInstrumentField_reserve1_len 
        , &QryMulticastInstrumentField_InstrumentID, &QryMulticastInstrumentField_InstrumentID_len 


    )) {
        return -1;
    }


    ///主题号
    // TThostFtdcInstallIDType int
    self->data.TopicID = QryMulticastInstrumentField_TopicID;
        
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryMulticastInstrumentField_reserve1 != NULL ) {
        if(QryMulticastInstrumentField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryMulticastInstrumentField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryMulticastInstrumentField_reserve1, QryMulticastInstrumentField_reserve1_len);        
        strncpy(self->data.reserve1, QryMulticastInstrumentField_reserve1, sizeof(self->data.reserve1) );
        QryMulticastInstrumentField_reserve1 = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryMulticastInstrumentField_InstrumentID != NULL ) {
        if(QryMulticastInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryMulticastInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryMulticastInstrumentField_InstrumentID, QryMulticastInstrumentField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryMulticastInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryMulticastInstrumentField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryMulticastInstrumentField_dealloc(PyCThostFtdcQryMulticastInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMulticastInstrumentField_repr(PyCThostFtdcQryMulticastInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:s}"
#endif

        ,"TopicID", self->data.TopicID 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMulticastInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///主题号
// TThostFtdcInstallIDType int
static PyObject *PyCThostFtdcQryMulticastInstrumentField_get_TopicID(PyCThostFtdcQryMulticastInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TopicID);
#else
    return PyInt_FromLong(self->data.TopicID);
#endif
}

///主题号
// TThostFtdcInstallIDType int
static int PyCThostFtdcQryMulticastInstrumentField_set_TopicID(PyCThostFtdcQryMulticastInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TopicID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TopicID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TopicID value out of range for C int");
        return -1;
    }
    self->data.TopicID = (int)buf;
    return 0;
}
        
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcQryMulticastInstrumentField_get_reserve1(PyCThostFtdcQryMulticastInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryMulticastInstrumentField_set_reserve1(PyCThostFtdcQryMulticastInstrumentField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryMulticastInstrumentField_get_InstrumentID(PyCThostFtdcQryMulticastInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryMulticastInstrumentField_set_InstrumentID(PyCThostFtdcQryMulticastInstrumentField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryMulticastInstrumentField_getset[] = {
    ///主题号 
    {(char *)"TopicID", (getter)PyCThostFtdcQryMulticastInstrumentField_get_TopicID, (setter)PyCThostFtdcQryMulticastInstrumentField_set_TopicID, (char *)"TopicID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryMulticastInstrumentField_get_reserve1, (setter)PyCThostFtdcQryMulticastInstrumentField_set_reserve1, (char *)"reserve1", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryMulticastInstrumentField_get_InstrumentID, (setter)PyCThostFtdcQryMulticastInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMulticastInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMulticastInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcQryMulticastInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMulticastInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMulticastInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcQryMulticastInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMulticastInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMulticastInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMulticastInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcQryMulticastInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMulticastInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcQryMulticastInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMulticastInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMulticastInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMulticastInstrumentField", (PyObject *)&PyCThostFtdcQryMulticastInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMulticastInstrumentField to module");
        Py_DECREF(&PyCThostFtdcQryMulticastInstrumentFieldType);
		return -1;
    }

    return 0;
}
