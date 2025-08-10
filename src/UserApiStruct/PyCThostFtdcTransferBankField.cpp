
#include "PyCThostFtdcTransferBankField.h"

///转帐银行

static PyObject *PyCThostFtdcTransferBankField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferBankField *self = (PyCThostFtdcTransferBankField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTransferBankField_init(PyCThostFtdcTransferBankField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BankID", "BankBrchID", "BankName", "IsActive",  NULL};


    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *TransferBankField_BankID = NULL;
    Py_ssize_t TransferBankField_BankID_len = 0;
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    const char *TransferBankField_BankBrchID = NULL;
    Py_ssize_t TransferBankField_BankBrchID_len = 0;
            
    ///银行名称
    // TThostFtdcBankNameType char[101]
    const char *TransferBankField_BankName = NULL;
    Py_ssize_t TransferBankField_BankName_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int TransferBankField_IsActive = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

        , &TransferBankField_BankID, &TransferBankField_BankID_len 
        , &TransferBankField_BankBrchID, &TransferBankField_BankBrchID_len 
        , &TransferBankField_BankName, &TransferBankField_BankName_len 
        , &TransferBankField_IsActive 


    )) {
        return -1;
    }


    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( TransferBankField_BankID != NULL ) {
        if(TransferBankField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", TransferBankField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, TransferBankField_BankID, TransferBankField_BankID_len);        
        strncpy(self->data.BankID, TransferBankField_BankID, sizeof(self->data.BankID) );
        TransferBankField_BankID = NULL;
    }
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    if( TransferBankField_BankBrchID != NULL ) {
        if(TransferBankField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", TransferBankField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
            return -1;
        }
        // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
        // memcpy(self->data.BankBrchID, TransferBankField_BankBrchID, TransferBankField_BankBrchID_len);        
        strncpy(self->data.BankBrchID, TransferBankField_BankBrchID, sizeof(self->data.BankBrchID) );
        TransferBankField_BankBrchID = NULL;
    }
            
    ///银行名称
    // TThostFtdcBankNameType char[101]
    if( TransferBankField_BankName != NULL ) {
        if(TransferBankField_BankName_len > (Py_ssize_t)sizeof(self->data.BankName)) {
            PyErr_Format(PyExc_ValueError, "BankName too long: length=%zd (max allowed is %zd)", TransferBankField_BankName_len, (Py_ssize_t)sizeof(self->data.BankName));
            return -1;
        }
        // memset(self->data.BankName, 0, sizeof(self->data.BankName));
        // memcpy(self->data.BankName, TransferBankField_BankName, TransferBankField_BankName_len);        
        strncpy(self->data.BankName, TransferBankField_BankName, sizeof(self->data.BankName) );
        TransferBankField_BankName = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = TransferBankField_IsActive;
        

    return 0;
}

static void PyCThostFtdcTransferBankField_dealloc(PyCThostFtdcTransferBankField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferBankField_repr(PyCThostFtdcTransferBankField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBrchID", self->data.BankBrchID//, (Py_ssize_t)sizeof(self->data.BankBrchID) 
        ,"BankName", self->data.BankName//, (Py_ssize_t)sizeof(self->data.BankName) 
        ,"IsActive", self->data.IsActive 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///银行代码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcTransferBankField_get_BankID(PyCThostFtdcTransferBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcTransferBankField_set_BankID(PyCThostFtdcTransferBankField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.BankID, 0, sizeof(self->data.BankID));
    // memcpy(self->data.BankID, buf, len);
    strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
    return 0;
}
            
///银行分中心代码
// TThostFtdcBankBrchIDType char[5]
static PyObject *PyCThostFtdcTransferBankField_get_BankBrchID(PyCThostFtdcTransferBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBrchID, (Py_ssize_t)sizeof(self->data.BankBrchID));
    return PyBytes_FromString(self->data.BankBrchID);
}

///银行分中心代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcTransferBankField_set_BankBrchID(PyCThostFtdcTransferBankField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
        PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 5 bytes");
        return -1;
    }
    // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
    // memcpy(self->data.BankBrchID, buf, len);
    strncpy(self->data.BankBrchID, buf, sizeof(self->data.BankBrchID));
    return 0;
}
            
///银行名称
// TThostFtdcBankNameType char[101]
static PyObject *PyCThostFtdcTransferBankField_get_BankName(PyCThostFtdcTransferBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankName, (Py_ssize_t)sizeof(self->data.BankName));
    return PyBytes_FromString(self->data.BankName);
}

///银行名称
// TThostFtdcBankNameType char[101]
static int PyCThostFtdcTransferBankField_set_BankName(PyCThostFtdcTransferBankField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankName)) {
        PyErr_SetString(PyExc_ValueError, "BankName must be less than 101 bytes");
        return -1;
    }
    // memset(self->data.BankName, 0, sizeof(self->data.BankName));
    // memcpy(self->data.BankName, buf, len);
    strncpy(self->data.BankName, buf, sizeof(self->data.BankName));
    return 0;
}
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcTransferBankField_get_IsActive(PyCThostFtdcTransferBankField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcTransferBankField_set_IsActive(PyCThostFtdcTransferBankField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcTransferBankField_getset[] = {
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcTransferBankField_get_BankID, (setter)PyCThostFtdcTransferBankField_set_BankID, (char *)"BankID", NULL},
    ///银行分中心代码 
    {(char *)"BankBrchID", (getter)PyCThostFtdcTransferBankField_get_BankBrchID, (setter)PyCThostFtdcTransferBankField_set_BankBrchID, (char *)"BankBrchID", NULL},
    ///银行名称 
    {(char *)"BankName", (getter)PyCThostFtdcTransferBankField_get_BankName, (setter)PyCThostFtdcTransferBankField_set_BankName, (char *)"BankName", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcTransferBankField_get_IsActive, (setter)PyCThostFtdcTransferBankField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferBankFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferBankField",	/* tp_name */
	sizeof(PyCThostFtdcTransferBankField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferBankField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferBankField_repr,   /* tp_repr */
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
	"CThostFtdcTransferBankField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferBankField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferBankField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferBankField_new,       /* tp_new */
};

int PyCThostFtdcTransferBankFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferBankField  */
	if (PyType_Ready(&PyCThostFtdcTransferBankFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferBankField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferBankFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferBankField", (PyObject *)&PyCThostFtdcTransferBankFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankField to module");
        Py_DECREF(&PyCThostFtdcTransferBankFieldType);
		return -1;
    }

    return 0;
}
