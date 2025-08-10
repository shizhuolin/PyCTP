
#include "PyCThostFtdcForceUserLogoutField.h"

///强制交易员退出

static PyObject *PyCThostFtdcForceUserLogoutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcForceUserLogoutField *self = (PyCThostFtdcForceUserLogoutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcForceUserLogoutField_init(PyCThostFtdcForceUserLogoutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ForceUserLogoutField_BrokerID = NULL;
    Py_ssize_t ForceUserLogoutField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ForceUserLogoutField_UserID = NULL;
    Py_ssize_t ForceUserLogoutField_UserID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

        , &ForceUserLogoutField_BrokerID, &ForceUserLogoutField_BrokerID_len 
        , &ForceUserLogoutField_UserID, &ForceUserLogoutField_UserID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ForceUserLogoutField_BrokerID != NULL ) {
        if(ForceUserLogoutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ForceUserLogoutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ForceUserLogoutField_BrokerID, ForceUserLogoutField_BrokerID_len);        
        strncpy(self->data.BrokerID, ForceUserLogoutField_BrokerID, sizeof(self->data.BrokerID) );
        ForceUserLogoutField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ForceUserLogoutField_UserID != NULL ) {
        if(ForceUserLogoutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ForceUserLogoutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ForceUserLogoutField_UserID, ForceUserLogoutField_UserID_len);        
        strncpy(self->data.UserID, ForceUserLogoutField_UserID, sizeof(self->data.UserID) );
        ForceUserLogoutField_UserID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcForceUserLogoutField_dealloc(PyCThostFtdcForceUserLogoutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcForceUserLogoutField_repr(PyCThostFtdcForceUserLogoutField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForceUserLogoutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcForceUserLogoutField_get_BrokerID(PyCThostFtdcForceUserLogoutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcForceUserLogoutField_set_BrokerID(PyCThostFtdcForceUserLogoutField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcForceUserLogoutField_get_UserID(PyCThostFtdcForceUserLogoutField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcForceUserLogoutField_set_UserID(PyCThostFtdcForceUserLogoutField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcForceUserLogoutField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcForceUserLogoutField_get_BrokerID, (setter)PyCThostFtdcForceUserLogoutField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcForceUserLogoutField_get_UserID, (setter)PyCThostFtdcForceUserLogoutField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcForceUserLogoutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcForceUserLogoutField",	/* tp_name */
	sizeof(PyCThostFtdcForceUserLogoutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcForceUserLogoutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcForceUserLogoutField_repr,   /* tp_repr */
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
	"CThostFtdcForceUserLogoutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcForceUserLogoutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcForceUserLogoutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcForceUserLogoutField_new,       /* tp_new */
};

int PyCThostFtdcForceUserLogoutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcForceUserLogoutField  */
	if (PyType_Ready(&PyCThostFtdcForceUserLogoutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcForceUserLogoutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcForceUserLogoutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcForceUserLogoutField", (PyObject *)&PyCThostFtdcForceUserLogoutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForceUserLogoutField to module");
        Py_DECREF(&PyCThostFtdcForceUserLogoutFieldType);
		return -1;
    }

    return 0;
}
