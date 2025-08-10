
#include "PyCThostFtdcContractBankField.h"

///查询签约银行响应

static PyObject *PyCThostFtdcContractBankField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcContractBankField *self = (PyCThostFtdcContractBankField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcContractBankField_init(PyCThostFtdcContractBankField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BankID", "BankBrchID", "BankName",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ContractBankField_BrokerID = NULL;
    Py_ssize_t ContractBankField_BrokerID_len = 0;
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    const char *ContractBankField_BankID = NULL;
    Py_ssize_t ContractBankField_BankID_len = 0;
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    const char *ContractBankField_BankBrchID = NULL;
    Py_ssize_t ContractBankField_BankBrchID_len = 0;
            
    ///银行名称
    // TThostFtdcBankNameType char[101]
    const char *ContractBankField_BankName = NULL;
    Py_ssize_t ContractBankField_BankName_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &ContractBankField_BrokerID, &ContractBankField_BrokerID_len 
        , &ContractBankField_BankID, &ContractBankField_BankID_len 
        , &ContractBankField_BankBrchID, &ContractBankField_BankBrchID_len 
        , &ContractBankField_BankName, &ContractBankField_BankName_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ContractBankField_BrokerID != NULL ) {
        if(ContractBankField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ContractBankField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ContractBankField_BrokerID, ContractBankField_BrokerID_len);        
        strncpy(self->data.BrokerID, ContractBankField_BrokerID, sizeof(self->data.BrokerID) );
        ContractBankField_BrokerID = NULL;
    }
            
    ///银行代码
    // TThostFtdcBankIDType char[4]
    if( ContractBankField_BankID != NULL ) {
        if(ContractBankField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", ContractBankField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, ContractBankField_BankID, ContractBankField_BankID_len);        
        strncpy(self->data.BankID, ContractBankField_BankID, sizeof(self->data.BankID) );
        ContractBankField_BankID = NULL;
    }
            
    ///银行分中心代码
    // TThostFtdcBankBrchIDType char[5]
    if( ContractBankField_BankBrchID != NULL ) {
        if(ContractBankField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
            PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", ContractBankField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
            return -1;
        }
        // memset(self->data.BankBrchID, 0, sizeof(self->data.BankBrchID));
        // memcpy(self->data.BankBrchID, ContractBankField_BankBrchID, ContractBankField_BankBrchID_len);        
        strncpy(self->data.BankBrchID, ContractBankField_BankBrchID, sizeof(self->data.BankBrchID) );
        ContractBankField_BankBrchID = NULL;
    }
            
    ///银行名称
    // TThostFtdcBankNameType char[101]
    if( ContractBankField_BankName != NULL ) {
        if(ContractBankField_BankName_len > (Py_ssize_t)sizeof(self->data.BankName)) {
            PyErr_Format(PyExc_ValueError, "BankName too long: length=%zd (max allowed is %zd)", ContractBankField_BankName_len, (Py_ssize_t)sizeof(self->data.BankName));
            return -1;
        }
        // memset(self->data.BankName, 0, sizeof(self->data.BankName));
        // memcpy(self->data.BankName, ContractBankField_BankName, ContractBankField_BankName_len);        
        strncpy(self->data.BankName, ContractBankField_BankName, sizeof(self->data.BankName) );
        ContractBankField_BankName = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcContractBankField_dealloc(PyCThostFtdcContractBankField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcContractBankField_repr(PyCThostFtdcContractBankField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"BankBrchID", self->data.BankBrchID//, (Py_ssize_t)sizeof(self->data.BankBrchID) 
        ,"BankName", self->data.BankName//, (Py_ssize_t)sizeof(self->data.BankName) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcContractBankField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcContractBankField_get_BrokerID(PyCThostFtdcContractBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcContractBankField_set_BrokerID(PyCThostFtdcContractBankField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcContractBankField_get_BankID(PyCThostFtdcContractBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行代码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcContractBankField_set_BankID(PyCThostFtdcContractBankField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcContractBankField_get_BankBrchID(PyCThostFtdcContractBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankBrchID, (Py_ssize_t)sizeof(self->data.BankBrchID));
    return PyBytes_FromString(self->data.BankBrchID);
}

///银行分中心代码
// TThostFtdcBankBrchIDType char[5]
static int PyCThostFtdcContractBankField_set_BankBrchID(PyCThostFtdcContractBankField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcContractBankField_get_BankName(PyCThostFtdcContractBankField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankName, (Py_ssize_t)sizeof(self->data.BankName));
    return PyBytes_FromString(self->data.BankName);
}

///银行名称
// TThostFtdcBankNameType char[101]
static int PyCThostFtdcContractBankField_set_BankName(PyCThostFtdcContractBankField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcContractBankField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcContractBankField_get_BrokerID, (setter)PyCThostFtdcContractBankField_set_BrokerID, (char *)"BrokerID", NULL},
    ///银行代码 
    {(char *)"BankID", (getter)PyCThostFtdcContractBankField_get_BankID, (setter)PyCThostFtdcContractBankField_set_BankID, (char *)"BankID", NULL},
    ///银行分中心代码 
    {(char *)"BankBrchID", (getter)PyCThostFtdcContractBankField_get_BankBrchID, (setter)PyCThostFtdcContractBankField_set_BankBrchID, (char *)"BankBrchID", NULL},
    ///银行名称 
    {(char *)"BankName", (getter)PyCThostFtdcContractBankField_get_BankName, (setter)PyCThostFtdcContractBankField_set_BankName, (char *)"BankName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcContractBankFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcContractBankField",	/* tp_name */
	sizeof(PyCThostFtdcContractBankField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcContractBankField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcContractBankField_repr,   /* tp_repr */
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
	"CThostFtdcContractBankField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcContractBankField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcContractBankField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcContractBankField_new,       /* tp_new */
};

int PyCThostFtdcContractBankFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcContractBankField  */
	if (PyType_Ready(&PyCThostFtdcContractBankFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcContractBankField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcContractBankFieldType);
    if( PyModule_AddObject(module, "CThostFtdcContractBankField", (PyObject *)&PyCThostFtdcContractBankFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcContractBankField to module");
        Py_DECREF(&PyCThostFtdcContractBankFieldType);
		return -1;
    }

    return 0;
}
