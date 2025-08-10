
#include "PyCThostFtdcQryThostUserFunctionField.h"

///Thost终端用户功能权限查询

static PyObject *PyCThostFtdcQryThostUserFunctionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryThostUserFunctionField *self = (PyCThostFtdcQryThostUserFunctionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryThostUserFunctionField_init(PyCThostFtdcQryThostUserFunctionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryThostUserFunctionField_BrokerID = NULL;
    Py_ssize_t QryThostUserFunctionField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *QryThostUserFunctionField_UserID = NULL;
    Py_ssize_t QryThostUserFunctionField_UserID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QryThostUserFunctionField_BrokerID, &QryThostUserFunctionField_BrokerID_len 
        , &QryThostUserFunctionField_UserID, &QryThostUserFunctionField_UserID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryThostUserFunctionField_BrokerID != NULL ) {
        if(QryThostUserFunctionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryThostUserFunctionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryThostUserFunctionField_BrokerID, QryThostUserFunctionField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryThostUserFunctionField_BrokerID, sizeof(self->data.BrokerID) );
        QryThostUserFunctionField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( QryThostUserFunctionField_UserID != NULL ) {
        if(QryThostUserFunctionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", QryThostUserFunctionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, QryThostUserFunctionField_UserID, QryThostUserFunctionField_UserID_len);        
        strncpy(self->data.UserID, QryThostUserFunctionField_UserID, sizeof(self->data.UserID) );
        QryThostUserFunctionField_UserID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryThostUserFunctionField_dealloc(PyCThostFtdcQryThostUserFunctionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryThostUserFunctionField_repr(PyCThostFtdcQryThostUserFunctionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryThostUserFunctionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryThostUserFunctionField_get_BrokerID(PyCThostFtdcQryThostUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryThostUserFunctionField_set_BrokerID(PyCThostFtdcQryThostUserFunctionField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcQryThostUserFunctionField_get_UserID(PyCThostFtdcQryThostUserFunctionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQryThostUserFunctionField_set_UserID(PyCThostFtdcQryThostUserFunctionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryThostUserFunctionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryThostUserFunctionField_get_BrokerID, (setter)PyCThostFtdcQryThostUserFunctionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcQryThostUserFunctionField_get_UserID, (setter)PyCThostFtdcQryThostUserFunctionField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryThostUserFunctionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryThostUserFunctionField",	/* tp_name */
	sizeof(PyCThostFtdcQryThostUserFunctionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryThostUserFunctionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryThostUserFunctionField_repr,   /* tp_repr */
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
	"CThostFtdcQryThostUserFunctionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryThostUserFunctionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryThostUserFunctionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryThostUserFunctionField_new,       /* tp_new */
};

int PyCThostFtdcQryThostUserFunctionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryThostUserFunctionField  */
	if (PyType_Ready(&PyCThostFtdcQryThostUserFunctionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryThostUserFunctionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryThostUserFunctionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryThostUserFunctionField", (PyObject *)&PyCThostFtdcQryThostUserFunctionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryThostUserFunctionField to module");
        Py_DECREF(&PyCThostFtdcQryThostUserFunctionFieldType);
		return -1;
    }

    return 0;
}
