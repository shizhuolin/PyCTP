
#include "PyCThostFtdcQryUserRightsAssignField.h"

///查询用户下单权限分配表

static PyObject *PyCThostFtdcQryUserRightsAssignField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryUserRightsAssignField *self = (PyCThostFtdcQryUserRightsAssignField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryUserRightsAssignField_init(PyCThostFtdcQryUserRightsAssignField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID",  NULL};


    ///应用单元代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryUserRightsAssignField_BrokerID = NULL;
    Py_ssize_t QryUserRightsAssignField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *QryUserRightsAssignField_UserID = NULL;
    Py_ssize_t QryUserRightsAssignField_UserID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &QryUserRightsAssignField_BrokerID, &QryUserRightsAssignField_BrokerID_len 
        , &QryUserRightsAssignField_UserID, &QryUserRightsAssignField_UserID_len 


    )) {
        return -1;
    }


    ///应用单元代码
    // TThostFtdcBrokerIDType char[11]
    if( QryUserRightsAssignField_BrokerID != NULL ) {
        if(QryUserRightsAssignField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryUserRightsAssignField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryUserRightsAssignField_BrokerID, QryUserRightsAssignField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryUserRightsAssignField_BrokerID, sizeof(self->data.BrokerID) );
        QryUserRightsAssignField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( QryUserRightsAssignField_UserID != NULL ) {
        if(QryUserRightsAssignField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", QryUserRightsAssignField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, QryUserRightsAssignField_UserID, QryUserRightsAssignField_UserID_len);        
        strncpy(self->data.UserID, QryUserRightsAssignField_UserID, sizeof(self->data.UserID) );
        QryUserRightsAssignField_UserID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryUserRightsAssignField_dealloc(PyCThostFtdcQryUserRightsAssignField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryUserRightsAssignField_repr(PyCThostFtdcQryUserRightsAssignField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryUserRightsAssignField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///应用单元代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryUserRightsAssignField_get_BrokerID(PyCThostFtdcQryUserRightsAssignField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///应用单元代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryUserRightsAssignField_set_BrokerID(PyCThostFtdcQryUserRightsAssignField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryUserRightsAssignField_get_UserID(PyCThostFtdcQryUserRightsAssignField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQryUserRightsAssignField_set_UserID(PyCThostFtdcQryUserRightsAssignField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryUserRightsAssignField_getset[] = {
    ///应用单元代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryUserRightsAssignField_get_BrokerID, (setter)PyCThostFtdcQryUserRightsAssignField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcQryUserRightsAssignField_get_UserID, (setter)PyCThostFtdcQryUserRightsAssignField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryUserRightsAssignFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryUserRightsAssignField",	/* tp_name */
	sizeof(PyCThostFtdcQryUserRightsAssignField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryUserRightsAssignField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryUserRightsAssignField_repr,   /* tp_repr */
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
	"CThostFtdcQryUserRightsAssignField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryUserRightsAssignField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryUserRightsAssignField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryUserRightsAssignField_new,       /* tp_new */
};

int PyCThostFtdcQryUserRightsAssignFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryUserRightsAssignField  */
	if (PyType_Ready(&PyCThostFtdcQryUserRightsAssignFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryUserRightsAssignField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryUserRightsAssignFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryUserRightsAssignField", (PyObject *)&PyCThostFtdcQryUserRightsAssignFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryUserRightsAssignField to module");
        Py_DECREF(&PyCThostFtdcQryUserRightsAssignFieldType);
		return -1;
    }

    return 0;
}
