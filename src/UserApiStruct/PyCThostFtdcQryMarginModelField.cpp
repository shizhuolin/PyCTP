
#include "PyCThostFtdcQryMarginModelField.h"

///请求查询投资者保证金率模板

static PyObject *PyCThostFtdcQryMarginModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMarginModelField *self = (PyCThostFtdcQryMarginModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryMarginModelField_init(PyCThostFtdcQryMarginModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "MarginModelID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryMarginModelField_BrokerID = NULL;
    Py_ssize_t QryMarginModelField_BrokerID_len = 0;
            
    ///保证金率模板代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryMarginModelField_MarginModelID = NULL;
    Py_ssize_t QryMarginModelField_MarginModelID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QryMarginModelField_BrokerID, &QryMarginModelField_BrokerID_len 
        , &QryMarginModelField_MarginModelID, &QryMarginModelField_MarginModelID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryMarginModelField_BrokerID != NULL ) {
        if(QryMarginModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryMarginModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryMarginModelField_BrokerID, QryMarginModelField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryMarginModelField_BrokerID, sizeof(self->data.BrokerID) );
        QryMarginModelField_BrokerID = NULL;
    }
            
    ///保证金率模板代码
    // TThostFtdcInvestorIDType char[13]
    if( QryMarginModelField_MarginModelID != NULL ) {
        if(QryMarginModelField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
            PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", QryMarginModelField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
            return -1;
        }
        // memset(self->data.MarginModelID, 0, sizeof(self->data.MarginModelID));
        // memcpy(self->data.MarginModelID, QryMarginModelField_MarginModelID, QryMarginModelField_MarginModelID_len);        
        strncpy(self->data.MarginModelID, QryMarginModelField_MarginModelID, sizeof(self->data.MarginModelID) );
        QryMarginModelField_MarginModelID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryMarginModelField_dealloc(PyCThostFtdcQryMarginModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMarginModelField_repr(PyCThostFtdcQryMarginModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"MarginModelID", self->data.MarginModelID//, (Py_ssize_t)sizeof(self->data.MarginModelID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMarginModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryMarginModelField_get_BrokerID(PyCThostFtdcQryMarginModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryMarginModelField_set_BrokerID(PyCThostFtdcQryMarginModelField *self, PyObject* val, void *closure) {
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
            
///保证金率模板代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcQryMarginModelField_get_MarginModelID(PyCThostFtdcQryMarginModelField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MarginModelID, (Py_ssize_t)sizeof(self->data.MarginModelID));
    return PyBytes_FromString(self->data.MarginModelID);
}

///保证金率模板代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryMarginModelField_set_MarginModelID(PyCThostFtdcQryMarginModelField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
        PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.MarginModelID, 0, sizeof(self->data.MarginModelID));
    // memcpy(self->data.MarginModelID, buf, len);
    strncpy(self->data.MarginModelID, buf, sizeof(self->data.MarginModelID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryMarginModelField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryMarginModelField_get_BrokerID, (setter)PyCThostFtdcQryMarginModelField_set_BrokerID, (char *)"BrokerID", NULL},
    ///保证金率模板代码 
    {(char *)"MarginModelID", (getter)PyCThostFtdcQryMarginModelField_get_MarginModelID, (setter)PyCThostFtdcQryMarginModelField_set_MarginModelID, (char *)"MarginModelID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMarginModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMarginModelField",	/* tp_name */
	sizeof(PyCThostFtdcQryMarginModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMarginModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMarginModelField_repr,   /* tp_repr */
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
	"CThostFtdcQryMarginModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMarginModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMarginModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMarginModelField_new,       /* tp_new */
};

int PyCThostFtdcQryMarginModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMarginModelField  */
	if (PyType_Ready(&PyCThostFtdcQryMarginModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMarginModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMarginModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMarginModelField", (PyObject *)&PyCThostFtdcQryMarginModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMarginModelField to module");
        Py_DECREF(&PyCThostFtdcQryMarginModelFieldType);
		return -1;
    }

    return 0;
}
