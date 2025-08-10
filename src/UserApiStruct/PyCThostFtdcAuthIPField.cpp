
#include "PyCThostFtdcAuthIPField.h"

///用户IP绑定信息

static PyObject *PyCThostFtdcAuthIPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAuthIPField *self = (PyCThostFtdcAuthIPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcAuthIPField_init(PyCThostFtdcAuthIPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AppID", "IPAddress",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *AuthIPField_BrokerID = NULL;
    Py_ssize_t AuthIPField_BrokerID_len = 0;
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *AuthIPField_AppID = NULL;
    Py_ssize_t AuthIPField_AppID_len = 0;
            
    ///用户代码
    // TThostFtdcIPAddressType char[33]
    const char *AuthIPField_IPAddress = NULL;
    Py_ssize_t AuthIPField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &AuthIPField_BrokerID, &AuthIPField_BrokerID_len 
        , &AuthIPField_AppID, &AuthIPField_AppID_len 
        , &AuthIPField_IPAddress, &AuthIPField_IPAddress_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( AuthIPField_BrokerID != NULL ) {
        if(AuthIPField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", AuthIPField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, AuthIPField_BrokerID, AuthIPField_BrokerID_len);        
        strncpy(self->data.BrokerID, AuthIPField_BrokerID, sizeof(self->data.BrokerID) );
        AuthIPField_BrokerID = NULL;
    }
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( AuthIPField_AppID != NULL ) {
        if(AuthIPField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", AuthIPField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
            return -1;
        }
        // memset(self->data.AppID, 0, sizeof(self->data.AppID));
        // memcpy(self->data.AppID, AuthIPField_AppID, AuthIPField_AppID_len);        
        strncpy(self->data.AppID, AuthIPField_AppID, sizeof(self->data.AppID) );
        AuthIPField_AppID = NULL;
    }
            
    ///用户代码
    // TThostFtdcIPAddressType char[33]
    if( AuthIPField_IPAddress != NULL ) {
        if(AuthIPField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", AuthIPField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, AuthIPField_IPAddress, AuthIPField_IPAddress_len);        
        strncpy(self->data.IPAddress, AuthIPField_IPAddress, sizeof(self->data.IPAddress) );
        AuthIPField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcAuthIPField_dealloc(PyCThostFtdcAuthIPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAuthIPField_repr(PyCThostFtdcAuthIPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AppID", self->data.AppID//, (Py_ssize_t)sizeof(self->data.AppID) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthIPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcAuthIPField_get_BrokerID(PyCThostFtdcAuthIPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcAuthIPField_set_BrokerID(PyCThostFtdcAuthIPField *self, PyObject* val, void *closure) {
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
            
///App代码
// TThostFtdcAppIDType char[33]
static PyObject *PyCThostFtdcAuthIPField_get_AppID(PyCThostFtdcAuthIPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AppID, (Py_ssize_t)sizeof(self->data.AppID));
    return PyBytes_FromString(self->data.AppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcAuthIPField_set_AppID(PyCThostFtdcAuthIPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.AppID, 0, sizeof(self->data.AppID));
    // memcpy(self->data.AppID, buf, len);
    strncpy(self->data.AppID, buf, sizeof(self->data.AppID));
    return 0;
}
            
///用户代码
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcAuthIPField_get_IPAddress(PyCThostFtdcAuthIPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///用户代码
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcAuthIPField_set_IPAddress(PyCThostFtdcAuthIPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcAuthIPField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcAuthIPField_get_BrokerID, (setter)PyCThostFtdcAuthIPField_set_BrokerID, (char *)"BrokerID", NULL},
    ///App代码 
    {(char *)"AppID", (getter)PyCThostFtdcAuthIPField_get_AppID, (setter)PyCThostFtdcAuthIPField_set_AppID, (char *)"AppID", NULL},
    ///用户代码 
    {(char *)"IPAddress", (getter)PyCThostFtdcAuthIPField_get_IPAddress, (setter)PyCThostFtdcAuthIPField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAuthIPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAuthIPField",	/* tp_name */
	sizeof(PyCThostFtdcAuthIPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAuthIPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAuthIPField_repr,   /* tp_repr */
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
	"CThostFtdcAuthIPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAuthIPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAuthIPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAuthIPField_new,       /* tp_new */
};

int PyCThostFtdcAuthIPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAuthIPField  */
	if (PyType_Ready(&PyCThostFtdcAuthIPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAuthIPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAuthIPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAuthIPField", (PyObject *)&PyCThostFtdcAuthIPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthIPField to module");
        Py_DECREF(&PyCThostFtdcAuthIPFieldType);
		return -1;
    }

    return 0;
}
