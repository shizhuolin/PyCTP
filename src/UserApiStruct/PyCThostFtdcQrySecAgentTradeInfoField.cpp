
#include "PyCThostFtdcQrySecAgentTradeInfoField.h"

///查询二级代理商信息

static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySecAgentTradeInfoField *self = (PyCThostFtdcQrySecAgentTradeInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySecAgentTradeInfoField_init(PyCThostFtdcQrySecAgentTradeInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BrokerSecAgentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QrySecAgentTradeInfoField_BrokerID = NULL;
    Py_ssize_t QrySecAgentTradeInfoField_BrokerID_len = 0;
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    const char *QrySecAgentTradeInfoField_BrokerSecAgentID = NULL;
    Py_ssize_t QrySecAgentTradeInfoField_BrokerSecAgentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QrySecAgentTradeInfoField_BrokerID, &QrySecAgentTradeInfoField_BrokerID_len 
        , &QrySecAgentTradeInfoField_BrokerSecAgentID, &QrySecAgentTradeInfoField_BrokerSecAgentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QrySecAgentTradeInfoField_BrokerID != NULL ) {
        if(QrySecAgentTradeInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QrySecAgentTradeInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QrySecAgentTradeInfoField_BrokerID, QrySecAgentTradeInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, QrySecAgentTradeInfoField_BrokerID, sizeof(self->data.BrokerID) );
        QrySecAgentTradeInfoField_BrokerID = NULL;
    }
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    if( QrySecAgentTradeInfoField_BrokerSecAgentID != NULL ) {
        if(QrySecAgentTradeInfoField_BrokerSecAgentID_len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is %zd)", QrySecAgentTradeInfoField_BrokerSecAgentID_len, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
            return -1;
        }
        // memset(self->data.BrokerSecAgentID, 0, sizeof(self->data.BrokerSecAgentID));
        // memcpy(self->data.BrokerSecAgentID, QrySecAgentTradeInfoField_BrokerSecAgentID, QrySecAgentTradeInfoField_BrokerSecAgentID_len);        
        strncpy(self->data.BrokerSecAgentID, QrySecAgentTradeInfoField_BrokerSecAgentID, sizeof(self->data.BrokerSecAgentID) );
        QrySecAgentTradeInfoField_BrokerSecAgentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySecAgentTradeInfoField_dealloc(PyCThostFtdcQrySecAgentTradeInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_repr(PyCThostFtdcQrySecAgentTradeInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"BrokerSecAgentID", self->data.BrokerSecAgentID//, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentTradeInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerID(PyCThostFtdcQrySecAgentTradeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerID(PyCThostFtdcQrySecAgentTradeInfoField *self, PyObject* val, void *closure) {
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
            
///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerSecAgentID(PyCThostFtdcQrySecAgentTradeInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerSecAgentID, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
    return PyBytes_FromString(self->data.BrokerSecAgentID);
}

///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerSecAgentID(PyCThostFtdcQrySecAgentTradeInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BrokerSecAgentID, 0, sizeof(self->data.BrokerSecAgentID));
    // memcpy(self->data.BrokerSecAgentID, buf, len);
    strncpy(self->data.BrokerSecAgentID, buf, sizeof(self->data.BrokerSecAgentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQrySecAgentTradeInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerID, (setter)PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///境外中介机构资金帐号 
    {(char *)"BrokerSecAgentID", (getter)PyCThostFtdcQrySecAgentTradeInfoField_get_BrokerSecAgentID, (setter)PyCThostFtdcQrySecAgentTradeInfoField_set_BrokerSecAgentID, (char *)"BrokerSecAgentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySecAgentTradeInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySecAgentTradeInfoField",	/* tp_name */
	sizeof(PyCThostFtdcQrySecAgentTradeInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySecAgentTradeInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySecAgentTradeInfoField_repr,   /* tp_repr */
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
	"CThostFtdcQrySecAgentTradeInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySecAgentTradeInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySecAgentTradeInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySecAgentTradeInfoField_new,       /* tp_new */
};

int PyCThostFtdcQrySecAgentTradeInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySecAgentTradeInfoField  */
	if (PyType_Ready(&PyCThostFtdcQrySecAgentTradeInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySecAgentTradeInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySecAgentTradeInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySecAgentTradeInfoField", (PyObject *)&PyCThostFtdcQrySecAgentTradeInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySecAgentTradeInfoField to module");
        Py_DECREF(&PyCThostFtdcQrySecAgentTradeInfoFieldType);
		return -1;
    }

    return 0;
}
