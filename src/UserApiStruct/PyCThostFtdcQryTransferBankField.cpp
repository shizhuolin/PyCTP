
#include "PyCThostFtdcQryTransferBankField.h"

///查询转帐银行

static PyObject *PyCThostFtdcQryTransferBankField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTransferBankField *self = (PyCThostFtdcQryTransferBankField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryTransferBankField_init(PyCThostFtdcQryTransferBankField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BankID", "BankBrchID",  NULL};


    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *QryTransferBankField_BankID = NULL;
    Py_ssize_t QryTransferBankField_BankID_len = 0;
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    const char *QryTransferBankField_BankBrchID = NULL;
    Py_ssize_t QryTransferBankField_BankBrchID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QryTransferBankField_BankID, &QryTransferBankField_BankID_len 
        , &QryTransferBankField_BankBrchID, &QryTransferBankField_BankBrchID_len 


    )) {
        return -1;
    }


    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( QryTransferBankField_BankID != NULL ) {
        if(QryTransferBankField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", QryTransferBankField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, QryTransferBankField_BankID, QryTransferBankField_BankID_len);        
        strncpy(self->data.BankID, QryTransferBankField_BankID, sizeof(self->data.BankID) );
        QryTransferBankField_BankID = NULL;
    }
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    if( QryTransferBankField_BankBrchID != NULL ) {
        if(QryTransferBankField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", QryTransferBankField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
            return -1;
        }
        // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
        // memcpy(self->data.BankBrchID, QryTransferBankField_BankBrchID, QryTransferBankField_BankBrchID_len);        
        strncpy(self->data.BankBrchID, QryTransferBankField_BankBrchID, sizeof(self->data.BankBrchID) );
        QryTransferBankField_BankBrchID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryTransferBankField_dealloc(PyCThostFtdcQryTransferBankField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTransferBankField_repr(PyCThostFtdcQryTransferBankField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBrchID", self->data.BankBrchID//, (Py_ssize_t)sizeof(self->data.BankBrchID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTransferBankField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///银行代码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcQryTransferBankField_get_BankID(PyCThostFtdcQryTransferBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcQryTransferBankField_set_BankID(PyCThostFtdcQryTransferBankField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryTransferBankField_get_BankBrchID(PyCThostFtdcQryTransferBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBrchID, (Py_ssize_t)sizeof(self->data.BankBrchID));
    return PyBytes_FromString(self->data.BankBrchID);
}

///银行分中心代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcQryTransferBankField_set_BankBrchID(PyCThostFtdcQryTransferBankField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryTransferBankField_getset[] = {
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcQryTransferBankField_get_BankID, (setter)PyCThostFtdcQryTransferBankField_set_BankID, (char *)"BankID", NULL},
    ///银行分中心代码 
    {(char *)"BankBrchID", (getter)PyCThostFtdcQryTransferBankField_get_BankBrchID, (setter)PyCThostFtdcQryTransferBankField_set_BankBrchID, (char *)"BankBrchID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTransferBankFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTransferBankField",	/* tp_name */
	sizeof(PyCThostFtdcQryTransferBankField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTransferBankField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTransferBankField_repr,   /* tp_repr */
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
	"CThostFtdcQryTransferBankField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTransferBankField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTransferBankField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTransferBankField_new,       /* tp_new */
};

int PyCThostFtdcQryTransferBankFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTransferBankField  */
	if (PyType_Ready(&PyCThostFtdcQryTransferBankFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTransferBankField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTransferBankFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTransferBankField", (PyObject *)&PyCThostFtdcQryTransferBankFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTransferBankField to module");
        Py_DECREF(&PyCThostFtdcQryTransferBankFieldType);
		return -1;
    }

    return 0;
}
