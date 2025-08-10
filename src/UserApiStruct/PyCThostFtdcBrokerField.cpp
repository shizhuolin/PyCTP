
#include "PyCThostFtdcBrokerField.h"

///经纪公司

static PyObject *PyCThostFtdcBrokerField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerField *self = (PyCThostFtdcBrokerField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerField_init(PyCThostFtdcBrokerField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BrokerAbbr", "BrokerName", "IsActive",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerField_BrokerID = NULL;
    Py_ssize_t BrokerField_BrokerID_len = 0;
            
    ///经纪公司简称
    // TThostFtdcBrokerAbbrType char[9]
    const char *BrokerField_BrokerAbbr = NULL;
    Py_ssize_t BrokerField_BrokerAbbr_len = 0;
            
    ///经纪公司名称
    // TThostFtdcBrokerNameType char[81]
    const char *BrokerField_BrokerName = NULL;
    Py_ssize_t BrokerField_BrokerName_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int BrokerField_IsActive = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

        , &BrokerField_BrokerID, &BrokerField_BrokerID_len 
        , &BrokerField_BrokerAbbr, &BrokerField_BrokerAbbr_len 
        , &BrokerField_BrokerName, &BrokerField_BrokerName_len 
        , &BrokerField_IsActive 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerField_BrokerID != NULL ) {
        if(BrokerField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerField_BrokerID, BrokerField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerField_BrokerID = NULL;
    }
            
    ///经纪公司简称
    // TThostFtdcBrokerAbbrType char[9]
    if( BrokerField_BrokerAbbr != NULL ) {
        if(BrokerField_BrokerAbbr_len > (Py_ssize_t)sizeof(self->data.BrokerAbbr)) {
            PyErr_Format(PyExc_ValueError, "BrokerAbbr too long: length=%zd (max allowed is %zd)", BrokerField_BrokerAbbr_len, (Py_ssize_t)sizeof(self->data.BrokerAbbr));
            return -1;
        }
        // memset(self->data.BrokerAbbr, 0, sizeof(self->data.BrokerAbbr));
        // memcpy(self->data.BrokerAbbr, BrokerField_BrokerAbbr, BrokerField_BrokerAbbr_len);        
        strncpy(self->data.BrokerAbbr, BrokerField_BrokerAbbr, sizeof(self->data.BrokerAbbr) );
        BrokerField_BrokerAbbr = NULL;
    }
            
    ///经纪公司名称
    // TThostFtdcBrokerNameType char[81]
    if( BrokerField_BrokerName != NULL ) {
        if(BrokerField_BrokerName_len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
            PyErr_Format(PyExc_ValueError, "BrokerName too long: length=%zd (max allowed is %zd)", BrokerField_BrokerName_len, (Py_ssize_t)sizeof(self->data.BrokerName));
            return -1;
        }
        // memset(self->data.BrokerName, 0, sizeof(self->data.BrokerName));
        // memcpy(self->data.BrokerName, BrokerField_BrokerName, BrokerField_BrokerName_len);        
        strncpy(self->data.BrokerName, BrokerField_BrokerName, sizeof(self->data.BrokerName) );
        BrokerField_BrokerName = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = BrokerField_IsActive;
        

    return 0;
}

static void PyCThostFtdcBrokerField_dealloc(PyCThostFtdcBrokerField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerField_repr(PyCThostFtdcBrokerField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerAbbr", self->data.BrokerAbbr//, (Py_ssize_t)sizeof(self->data.BrokerAbbr) 
        ,"BrokerName", self->data.BrokerName//, (Py_ssize_t)sizeof(self->data.BrokerName) 
        ,"IsActive", self->data.IsActive 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerField_get_BrokerID(PyCThostFtdcBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerField_set_BrokerID(PyCThostFtdcBrokerField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///经纪公司简称
// TThostFtdcBrokerAbbrType char[9]
static PyObject *PyCThostFtdcBrokerField_get_BrokerAbbr(PyCThostFtdcBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerAbbr, (Py_ssize_t)sizeof(self->data.BrokerAbbr));
    return PyBytes_FromString(self->data.BrokerAbbr);
}

///经纪公司简称
// TThostFtdcBrokerAbbrType char[9]
static int PyCThostFtdcBrokerField_set_BrokerAbbr(PyCThostFtdcBrokerField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerAbbr Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerAbbr)) {
        PyErr_SetString(PyExc_ValueError, "BrokerAbbr must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.BrokerAbbr, 0, sizeof(self->data.BrokerAbbr));
    // memcpy(self->data.BrokerAbbr, buf, len);
    strncpy(self->data.BrokerAbbr, buf, sizeof(self->data.BrokerAbbr));
    return 0;
}
            
///经纪公司名称
// TThostFtdcBrokerNameType char[81]
static PyObject *PyCThostFtdcBrokerField_get_BrokerName(PyCThostFtdcBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerName, (Py_ssize_t)sizeof(self->data.BrokerName));
    return PyBytes_FromString(self->data.BrokerName);
}

///经纪公司名称
// TThostFtdcBrokerNameType char[81]
static int PyCThostFtdcBrokerField_set_BrokerName(PyCThostFtdcBrokerField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
        PyErr_SetString(PyExc_ValueError, "BrokerName must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.BrokerName, 0, sizeof(self->data.BrokerName));
    // memcpy(self->data.BrokerName, buf, len);
    strncpy(self->data.BrokerName, buf, sizeof(self->data.BrokerName));
    return 0;
}
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcBrokerField_get_IsActive(PyCThostFtdcBrokerField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcBrokerField_set_IsActive(PyCThostFtdcBrokerField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActive value out of range for C int");
        return -1;
    }
    self->data.IsActive = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcBrokerField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerField_get_BrokerID, (setter)PyCThostFtdcBrokerField_set_BrokerID, (char *)"BrokerID", NULL},
    ///经纪公司简称 
    {(char *)"BrokerAbbr", (getter)PyCThostFtdcBrokerField_get_BrokerAbbr, (setter)PyCThostFtdcBrokerField_set_BrokerAbbr, (char *)"BrokerAbbr", NULL},
    ///经纪公司名称 
    {(char *)"BrokerName", (getter)PyCThostFtdcBrokerField_get_BrokerName, (setter)PyCThostFtdcBrokerField_set_BrokerName, (char *)"BrokerName", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcBrokerField_get_IsActive, (setter)PyCThostFtdcBrokerField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerField_new,       /* tp_new */
};

int PyCThostFtdcBrokerFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerField  */
	if (PyType_Ready(&PyCThostFtdcBrokerFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerField", (PyObject *)&PyCThostFtdcBrokerFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerField to module");
        Py_DECREF(&PyCThostFtdcBrokerFieldType);
		return -1;
    }

    return 0;
}
