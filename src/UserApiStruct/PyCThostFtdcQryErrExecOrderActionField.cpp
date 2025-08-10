
#include "PyCThostFtdcQryErrExecOrderActionField.h"

///查询错误执行宣告操作

static PyObject *PyCThostFtdcQryErrExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryErrExecOrderActionField *self = (PyCThostFtdcQryErrExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryErrExecOrderActionField_init(PyCThostFtdcQryErrExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryErrExecOrderActionField_BrokerID = NULL;
    Py_ssize_t QryErrExecOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryErrExecOrderActionField_InvestorID = NULL;
    Py_ssize_t QryErrExecOrderActionField_InvestorID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QryErrExecOrderActionField_BrokerID, &QryErrExecOrderActionField_BrokerID_len 
        , &QryErrExecOrderActionField_InvestorID, &QryErrExecOrderActionField_InvestorID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryErrExecOrderActionField_BrokerID != NULL ) {
        if(QryErrExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryErrExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryErrExecOrderActionField_BrokerID, QryErrExecOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryErrExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        QryErrExecOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryErrExecOrderActionField_InvestorID != NULL ) {
        if(QryErrExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryErrExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryErrExecOrderActionField_InvestorID, QryErrExecOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryErrExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        QryErrExecOrderActionField_InvestorID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryErrExecOrderActionField_dealloc(PyCThostFtdcQryErrExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryErrExecOrderActionField_repr(PyCThostFtdcQryErrExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryErrExecOrderActionField_get_BrokerID(PyCThostFtdcQryErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryErrExecOrderActionField_set_BrokerID(PyCThostFtdcQryErrExecOrderActionField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcQryErrExecOrderActionField_get_InvestorID(PyCThostFtdcQryErrExecOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryErrExecOrderActionField_set_InvestorID(PyCThostFtdcQryErrExecOrderActionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryErrExecOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryErrExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcQryErrExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryErrExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcQryErrExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryErrExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryErrExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryErrExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryErrExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryErrExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryErrExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryErrExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryErrExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryErrExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcQryErrExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryErrExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcQryErrExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryErrExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryErrExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryErrExecOrderActionField", (PyObject *)&PyCThostFtdcQryErrExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryErrExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcQryErrExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
