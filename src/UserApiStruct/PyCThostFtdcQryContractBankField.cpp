
#include "PyCThostFtdcQryContractBankField.h"

///查询签约银行请求

static PyObject *PyCThostFtdcQryContractBankField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryContractBankField *self = (PyCThostFtdcQryContractBankField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryContractBankField_init(PyCThostFtdcQryContractBankField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BankID", "BankBrchID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryContractBankField_BrokerID = NULL;
    Py_ssize_t QryContractBankField_BrokerID_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *QryContractBankField_BankID = NULL;
    Py_ssize_t QryContractBankField_BankID_len = 0;
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    const char *QryContractBankField_BankBrchID = NULL;
    Py_ssize_t QryContractBankField_BankBrchID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryContractBankField_BrokerID, &QryContractBankField_BrokerID_len 
        , &QryContractBankField_BankID, &QryContractBankField_BankID_len 
        , &QryContractBankField_BankBrchID, &QryContractBankField_BankBrchID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryContractBankField_BrokerID != NULL ) {
        if(QryContractBankField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryContractBankField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryContractBankField_BrokerID, QryContractBankField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryContractBankField_BrokerID, sizeof(self->data.BrokerID) );
        QryContractBankField_BrokerID = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( QryContractBankField_BankID != NULL ) {
        if(QryContractBankField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", QryContractBankField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, QryContractBankField_BankID, QryContractBankField_BankID_len);        
        strncpy(self->data.BankID, QryContractBankField_BankID, sizeof(self->data.BankID) );
        QryContractBankField_BankID = NULL;
    }
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    if( QryContractBankField_BankBrchID != NULL ) {
        if(QryContractBankField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", QryContractBankField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
            return -1;
        }
        // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
        // memcpy(self->data.BankBrchID, QryContractBankField_BankBrchID, QryContractBankField_BankBrchID_len);        
        strncpy(self->data.BankBrchID, QryContractBankField_BankBrchID, sizeof(self->data.BankBrchID) );
        QryContractBankField_BankBrchID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryContractBankField_dealloc(PyCThostFtdcQryContractBankField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryContractBankField_repr(PyCThostFtdcQryContractBankField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBrchID", self->data.BankBrchID//, (Py_ssize_t)sizeof(self->data.BankBrchID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryContractBankField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryContractBankField_get_BrokerID(PyCThostFtdcQryContractBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryContractBankField_set_BrokerID(PyCThostFtdcQryContractBankField *self, PyObject* val, void *closure) {
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
            
///银行代码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcQryContractBankField_get_BankID(PyCThostFtdcQryContractBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcQryContractBankField_set_BankID(PyCThostFtdcQryContractBankField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryContractBankField_get_BankBrchID(PyCThostFtdcQryContractBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBrchID, (Py_ssize_t)sizeof(self->data.BankBrchID));
    return PyBytes_FromString(self->data.BankBrchID);
}

///银行分中心代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcQryContractBankField_set_BankBrchID(PyCThostFtdcQryContractBankField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryContractBankField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryContractBankField_get_BrokerID, (setter)PyCThostFtdcQryContractBankField_set_BrokerID, (char *)"BrokerID", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcQryContractBankField_get_BankID, (setter)PyCThostFtdcQryContractBankField_set_BankID, (char *)"BankID", NULL},
    ///银行分中心代码 
    {(char *)"BankBrchID", (getter)PyCThostFtdcQryContractBankField_get_BankBrchID, (setter)PyCThostFtdcQryContractBankField_set_BankBrchID, (char *)"BankBrchID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryContractBankFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryContractBankField",	/* tp_name */
	sizeof(PyCThostFtdcQryContractBankField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryContractBankField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryContractBankField_repr,   /* tp_repr */
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
	"CThostFtdcQryContractBankField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryContractBankField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryContractBankField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryContractBankField_new,       /* tp_new */
};

int PyCThostFtdcQryContractBankFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryContractBankField  */
	if (PyType_Ready(&PyCThostFtdcQryContractBankFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryContractBankField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryContractBankFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryContractBankField", (PyObject *)&PyCThostFtdcQryContractBankFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryContractBankField to module");
        Py_DECREF(&PyCThostFtdcQryContractBankFieldType);
		return -1;
    }

    return 0;
}
