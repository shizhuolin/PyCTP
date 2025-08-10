
#include "PyCThostFtdcDRTransferField.h"

///灾备交易转换报文

static PyObject *PyCThostFtdcDRTransferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDRTransferField *self = (PyCThostFtdcDRTransferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcDRTransferField_init(PyCThostFtdcDRTransferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"OrigDRIdentityID", "DestDRIdentityID", "OrigBrokerID", "DestBrokerID",  NULL};


    ///原交易中心代码
    // TThostFtdcDRIdentityIDType int
    int DRTransferField_OrigDRIdentityID = 0;
        
    ///目标交易中心代码
    // TThostFtdcDRIdentityIDType int
    int DRTransferField_DestDRIdentityID = 0;
        
    ///原应用单元代码
    // TThostFtdcBrokerIDType char[11]
    const char *DRTransferField_OrigBrokerID = NULL;
    Py_ssize_t DRTransferField_OrigBrokerID_len = 0;
            
    ///目标易用单元代码
    // TThostFtdcBrokerIDType char[11]
    const char *DRTransferField_DestBrokerID = NULL;
    Py_ssize_t DRTransferField_DestBrokerID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#s#", (char **)kwlist
#endif

        , &DRTransferField_OrigDRIdentityID 
        , &DRTransferField_DestDRIdentityID 
        , &DRTransferField_OrigBrokerID, &DRTransferField_OrigBrokerID_len 
        , &DRTransferField_DestBrokerID, &DRTransferField_DestBrokerID_len 


    )) {
        return -1;
    }


    ///原交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.OrigDRIdentityID = DRTransferField_OrigDRIdentityID;
        
    ///目标交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.DestDRIdentityID = DRTransferField_DestDRIdentityID;
        
    ///原应用单元代码
    // TThostFtdcBrokerIDType char[11]
    if( DRTransferField_OrigBrokerID != NULL ) {
        if(DRTransferField_OrigBrokerID_len > (Py_ssize_t)sizeof(self->data.OrigBrokerID)) {
            PyErr_Format(PyExc_ValueError, "OrigBrokerID too long: length=%zd (max allowed is %zd)", DRTransferField_OrigBrokerID_len, (Py_ssize_t)sizeof(self->data.OrigBrokerID));
            return -1;
        }
        // memset(self->data.OrigBrokerID, 0, sizeof(self->data.OrigBrokerID));
        // memcpy(self->data.OrigBrokerID, DRTransferField_OrigBrokerID, DRTransferField_OrigBrokerID_len);        
        strncpy(self->data.OrigBrokerID, DRTransferField_OrigBrokerID, sizeof(self->data.OrigBrokerID) );
        DRTransferField_OrigBrokerID = NULL;
    }
            
    ///目标易用单元代码
    // TThostFtdcBrokerIDType char[11]
    if( DRTransferField_DestBrokerID != NULL ) {
        if(DRTransferField_DestBrokerID_len > (Py_ssize_t)sizeof(self->data.DestBrokerID)) {
            PyErr_Format(PyExc_ValueError, "DestBrokerID too long: length=%zd (max allowed is %zd)", DRTransferField_DestBrokerID_len, (Py_ssize_t)sizeof(self->data.DestBrokerID));
            return -1;
        }
        // memset(self->data.DestBrokerID, 0, sizeof(self->data.DestBrokerID));
        // memcpy(self->data.DestBrokerID, DRTransferField_DestBrokerID, DRTransferField_DestBrokerID_len);        
        strncpy(self->data.DestBrokerID, DRTransferField_DestBrokerID, sizeof(self->data.DestBrokerID) );
        DRTransferField_DestBrokerID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcDRTransferField_dealloc(PyCThostFtdcDRTransferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDRTransferField_repr(PyCThostFtdcDRTransferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:s}"
#endif

        ,"OrigDRIdentityID", self->data.OrigDRIdentityID 
        ,"DestDRIdentityID", self->data.DestDRIdentityID 
        ,"OrigBrokerID", self->data.OrigBrokerID//, (Py_ssize_t)sizeof(self->data.OrigBrokerID) 
        ,"DestBrokerID", self->data.DestBrokerID//, (Py_ssize_t)sizeof(self->data.DestBrokerID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDRTransferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///原交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcDRTransferField_get_OrigDRIdentityID(PyCThostFtdcDRTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.OrigDRIdentityID);
#else
    return PyInt_FromLong(self->data.OrigDRIdentityID);
#endif
}

///原交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcDRTransferField_set_OrigDRIdentityID(PyCThostFtdcDRTransferField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrigDRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrigDRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the OrigDRIdentityID value out of range for C int");
        return -1;
    }
    self->data.OrigDRIdentityID = (int)buf;
    return 0;
}
        
///目标交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcDRTransferField_get_DestDRIdentityID(PyCThostFtdcDRTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.DestDRIdentityID);
#else
    return PyInt_FromLong(self->data.DestDRIdentityID);
#endif
}

///目标交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcDRTransferField_set_DestDRIdentityID(PyCThostFtdcDRTransferField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DestDRIdentityID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DestDRIdentityID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the DestDRIdentityID value out of range for C int");
        return -1;
    }
    self->data.DestDRIdentityID = (int)buf;
    return 0;
}
        
///原应用单元代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcDRTransferField_get_OrigBrokerID(PyCThostFtdcDRTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrigBrokerID, (Py_ssize_t)sizeof(self->data.OrigBrokerID));
    return PyBytes_FromString(self->data.OrigBrokerID);
}

///原应用单元代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcDRTransferField_set_OrigBrokerID(PyCThostFtdcDRTransferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrigBrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OrigBrokerID)) {
        PyErr_SetString(PyExc_ValueError, "OrigBrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.OrigBrokerID, 0, sizeof(self->data.OrigBrokerID));
    // memcpy(self->data.OrigBrokerID, buf, len);
    strncpy(self->data.OrigBrokerID, buf, sizeof(self->data.OrigBrokerID));
    return 0;
}
            
///目标易用单元代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcDRTransferField_get_DestBrokerID(PyCThostFtdcDRTransferField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DestBrokerID, (Py_ssize_t)sizeof(self->data.DestBrokerID));
    return PyBytes_FromString(self->data.DestBrokerID);
}

///目标易用单元代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcDRTransferField_set_DestBrokerID(PyCThostFtdcDRTransferField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DestBrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DestBrokerID)) {
        PyErr_SetString(PyExc_ValueError, "DestBrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.DestBrokerID, 0, sizeof(self->data.DestBrokerID));
    // memcpy(self->data.DestBrokerID, buf, len);
    strncpy(self->data.DestBrokerID, buf, sizeof(self->data.DestBrokerID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcDRTransferField_getset[] = {
    ///原交易中心代码 
    {(char *)"OrigDRIdentityID", (getter)PyCThostFtdcDRTransferField_get_OrigDRIdentityID, (setter)PyCThostFtdcDRTransferField_set_OrigDRIdentityID, (char *)"OrigDRIdentityID", NULL},
    ///目标交易中心代码 
    {(char *)"DestDRIdentityID", (getter)PyCThostFtdcDRTransferField_get_DestDRIdentityID, (setter)PyCThostFtdcDRTransferField_set_DestDRIdentityID, (char *)"DestDRIdentityID", NULL},
    ///原应用单元代码 
    {(char *)"OrigBrokerID", (getter)PyCThostFtdcDRTransferField_get_OrigBrokerID, (setter)PyCThostFtdcDRTransferField_set_OrigBrokerID, (char *)"OrigBrokerID", NULL},
    ///目标易用单元代码 
    {(char *)"DestBrokerID", (getter)PyCThostFtdcDRTransferField_get_DestBrokerID, (setter)PyCThostFtdcDRTransferField_set_DestBrokerID, (char *)"DestBrokerID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDRTransferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDRTransferField",	/* tp_name */
	sizeof(PyCThostFtdcDRTransferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDRTransferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDRTransferField_repr,   /* tp_repr */
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
	"CThostFtdcDRTransferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDRTransferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDRTransferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDRTransferField_new,       /* tp_new */
};

int PyCThostFtdcDRTransferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDRTransferField  */
	if (PyType_Ready(&PyCThostFtdcDRTransferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDRTransferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDRTransferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDRTransferField", (PyObject *)&PyCThostFtdcDRTransferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDRTransferField to module");
        Py_DECREF(&PyCThostFtdcDRTransferFieldType);
		return -1;
    }

    return 0;
}
