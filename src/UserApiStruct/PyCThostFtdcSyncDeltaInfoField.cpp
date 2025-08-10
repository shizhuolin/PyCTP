
#include "PyCThostFtdcSyncDeltaInfoField.h"

///风险结算追平信息

static PyObject *PyCThostFtdcSyncDeltaInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInfoField *self = (PyCThostFtdcSyncDeltaInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInfoField_init(PyCThostFtdcSyncDeltaInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"SyncDeltaSequenceNo", "SyncDeltaStatus", "SyncDescription", "IsOnlyTrdDelta",  NULL};


    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaInfoField_SyncDeltaSequenceNo = 0;
        
    ///追平状态
    // TThostFtdcSyncDeltaStatusType char
    char SyncDeltaInfoField_SyncDeltaStatus = 0;
            
    ///追平描述
    // TThostFtdcSyncDescriptionType char[257]
    const char *SyncDeltaInfoField_SyncDescription = NULL;
    Py_ssize_t SyncDeltaInfoField_SyncDescription_len = 0;
            
    ///是否只有资金追平
    // TThostFtdcBoolType int
    int SyncDeltaInfoField_IsOnlyTrdDelta = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|icy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ics#i", (char **)kwlist
#endif

        , &SyncDeltaInfoField_SyncDeltaSequenceNo 
        , &SyncDeltaInfoField_SyncDeltaStatus 
        , &SyncDeltaInfoField_SyncDescription, &SyncDeltaInfoField_SyncDescription_len 
        , &SyncDeltaInfoField_IsOnlyTrdDelta 


    )) {
        return -1;
    }


    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaInfoField_SyncDeltaSequenceNo;
        
    ///追平状态
    // TThostFtdcSyncDeltaStatusType char
    self->data.SyncDeltaStatus = SyncDeltaInfoField_SyncDeltaStatus;
            
    ///追平描述
    // TThostFtdcSyncDescriptionType char[257]
    if( SyncDeltaInfoField_SyncDescription != NULL ) {
        if(SyncDeltaInfoField_SyncDescription_len > (Py_ssize_t)sizeof(self->data.SyncDescription)) {
            PyErr_Format(PyExc_ValueError, "SyncDescription too long: length=%zd (max allowed is %zd)", SyncDeltaInfoField_SyncDescription_len, (Py_ssize_t)sizeof(self->data.SyncDescription));
            return -1;
        }
        // memset(self->data.SyncDescription, 0, sizeof(self->data.SyncDescription));
        // memcpy(self->data.SyncDescription, SyncDeltaInfoField_SyncDescription, SyncDeltaInfoField_SyncDescription_len);        
        strncpy(self->data.SyncDescription, SyncDeltaInfoField_SyncDescription, sizeof(self->data.SyncDescription) );
        SyncDeltaInfoField_SyncDescription = NULL;
    }
            
    ///是否只有资金追平
    // TThostFtdcBoolType int
    self->data.IsOnlyTrdDelta = SyncDeltaInfoField_IsOnlyTrdDelta;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaInfoField_dealloc(PyCThostFtdcSyncDeltaInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInfoField_repr(PyCThostFtdcSyncDeltaInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:c,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:c,s:s,s:i}"
#endif

        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 
        ,"SyncDeltaStatus", self->data.SyncDeltaStatus 
        ,"SyncDescription", self->data.SyncDescription//, (Py_ssize_t)sizeof(self->data.SyncDescription) 
        ,"IsOnlyTrdDelta", self->data.IsOnlyTrdDelta 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaInfoField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaInfoField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SyncDeltaSequenceNo value out of range for C int");
        return -1;
    }
    self->data.SyncDeltaSequenceNo = (int)buf;
    return 0;
}
        
///追平状态
// TThostFtdcSyncDeltaStatusType char
static PyObject *PyCThostFtdcSyncDeltaInfoField_get_SyncDeltaStatus(PyCThostFtdcSyncDeltaInfoField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.SyncDeltaStatus), 1);
}

///追平状态
// TThostFtdcSyncDeltaStatusType char
static int PyCThostFtdcSyncDeltaInfoField_set_SyncDeltaStatus(PyCThostFtdcSyncDeltaInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SyncDeltaStatus)) {
        PyErr_SetString(PyExc_ValueError, "SyncDeltaStatus must be equal 1 bytes");
        return -1;
    }
    self->data.SyncDeltaStatus = *buf;
    return 0;
}
            
///追平描述
// TThostFtdcSyncDescriptionType char[257]
static PyObject *PyCThostFtdcSyncDeltaInfoField_get_SyncDescription(PyCThostFtdcSyncDeltaInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SyncDescription, (Py_ssize_t)sizeof(self->data.SyncDescription));
    return PyBytes_FromString(self->data.SyncDescription);
}

///追平描述
// TThostFtdcSyncDescriptionType char[257]
static int PyCThostFtdcSyncDeltaInfoField_set_SyncDescription(PyCThostFtdcSyncDeltaInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDescription Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SyncDescription)) {
        PyErr_SetString(PyExc_ValueError, "SyncDescription must be less than 257 bytes");
        return -1;
    }
    // memset(self->data.SyncDescription, 0, sizeof(self->data.SyncDescription));
    // memcpy(self->data.SyncDescription, buf, len);
    strncpy(self->data.SyncDescription, buf, sizeof(self->data.SyncDescription));
    return 0;
}
            
///是否只有资金追平
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDeltaInfoField_get_IsOnlyTrdDelta(PyCThostFtdcSyncDeltaInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsOnlyTrdDelta);
#else
    return PyInt_FromLong(self->data.IsOnlyTrdDelta);
#endif
}

///是否只有资金追平
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDeltaInfoField_set_IsOnlyTrdDelta(PyCThostFtdcSyncDeltaInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOnlyTrdDelta Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOnlyTrdDelta Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsOnlyTrdDelta value out of range for C int");
        return -1;
    }
    self->data.IsOnlyTrdDelta = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDeltaInfoField_getset[] = {
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInfoField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInfoField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},
    ///追平状态 
    {(char *)"SyncDeltaStatus", (getter)PyCThostFtdcSyncDeltaInfoField_get_SyncDeltaStatus, (setter)PyCThostFtdcSyncDeltaInfoField_set_SyncDeltaStatus, (char *)"SyncDeltaStatus", NULL},
    ///追平描述 
    {(char *)"SyncDescription", (getter)PyCThostFtdcSyncDeltaInfoField_get_SyncDescription, (setter)PyCThostFtdcSyncDeltaInfoField_set_SyncDescription, (char *)"SyncDescription", NULL},
    ///是否只有资金追平 
    {(char *)"IsOnlyTrdDelta", (getter)PyCThostFtdcSyncDeltaInfoField_get_IsOnlyTrdDelta, (setter)PyCThostFtdcSyncDeltaInfoField_set_IsOnlyTrdDelta, (char *)"IsOnlyTrdDelta", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInfoField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInfoField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInfoField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInfoField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInfoField", (PyObject *)&PyCThostFtdcSyncDeltaInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInfoField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInfoFieldType);
		return -1;
    }

    return 0;
}
