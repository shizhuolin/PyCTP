
#include "PyCThostFtdcFensUserInfoField.h"

///Fens用户信息

static PyObject *PyCThostFtdcFensUserInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcFensUserInfoField *self = (PyCThostFtdcFensUserInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcFensUserInfoField_init(PyCThostFtdcFensUserInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "LoginMode",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *FensUserInfoField_BrokerID = NULL;
    Py_ssize_t FensUserInfoField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *FensUserInfoField_UserID = NULL;
    Py_ssize_t FensUserInfoField_UserID_len = 0;
            
    ///登录模式
    // TThostFtdcLoginModeType char
    char FensUserInfoField_LoginMode = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#c", (char **)kwlist
#endif

        , &FensUserInfoField_BrokerID, &FensUserInfoField_BrokerID_len 
        , &FensUserInfoField_UserID, &FensUserInfoField_UserID_len 
        , &FensUserInfoField_LoginMode 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( FensUserInfoField_BrokerID != NULL ) {
        if(FensUserInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", FensUserInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, FensUserInfoField_BrokerID, FensUserInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, FensUserInfoField_BrokerID, sizeof(self->data.BrokerID) );
        FensUserInfoField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( FensUserInfoField_UserID != NULL ) {
        if(FensUserInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", FensUserInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, FensUserInfoField_UserID, FensUserInfoField_UserID_len);        
        strncpy(self->data.UserID, FensUserInfoField_UserID, sizeof(self->data.UserID) );
        FensUserInfoField_UserID = NULL;
    }
            
    ///登录模式
    // TThostFtdcLoginModeType char
    self->data.LoginMode = FensUserInfoField_LoginMode;
            

    return 0;
}

static void PyCThostFtdcFensUserInfoField_dealloc(PyCThostFtdcFensUserInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcFensUserInfoField_repr(PyCThostFtdcFensUserInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"LoginMode", self->data.LoginMode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFensUserInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcFensUserInfoField_get_BrokerID(PyCThostFtdcFensUserInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcFensUserInfoField_set_BrokerID(PyCThostFtdcFensUserInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcFensUserInfoField_get_UserID(PyCThostFtdcFensUserInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcFensUserInfoField_set_UserID(PyCThostFtdcFensUserInfoField *self, PyObject* val, void *closure) {
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
            
///登录模式
// TThostFtdcLoginModeType char
static PyObject *PyCThostFtdcFensUserInfoField_get_LoginMode(PyCThostFtdcFensUserInfoField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.LoginMode), 1);
}

///登录模式
// TThostFtdcLoginModeType char
static int PyCThostFtdcFensUserInfoField_set_LoginMode(PyCThostFtdcFensUserInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginMode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LoginMode)) {
        PyErr_SetString(PyExc_ValueError, "LoginMode must be equal 1 bytes");
        return -1;
    }
    self->data.LoginMode = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcFensUserInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcFensUserInfoField_get_BrokerID, (setter)PyCThostFtdcFensUserInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcFensUserInfoField_get_UserID, (setter)PyCThostFtdcFensUserInfoField_set_UserID, (char *)"UserID", NULL},
    ///登录模式 
    {(char *)"LoginMode", (getter)PyCThostFtdcFensUserInfoField_get_LoginMode, (setter)PyCThostFtdcFensUserInfoField_set_LoginMode, (char *)"LoginMode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcFensUserInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcFensUserInfoField",	/* tp_name */
	sizeof(PyCThostFtdcFensUserInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcFensUserInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcFensUserInfoField_repr,   /* tp_repr */
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
	"CThostFtdcFensUserInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcFensUserInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcFensUserInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcFensUserInfoField_new,       /* tp_new */
};

int PyCThostFtdcFensUserInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcFensUserInfoField  */
	if (PyType_Ready(&PyCThostFtdcFensUserInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcFensUserInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcFensUserInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcFensUserInfoField", (PyObject *)&PyCThostFtdcFensUserInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFensUserInfoField to module");
        Py_DECREF(&PyCThostFtdcFensUserInfoFieldType);
		return -1;
    }

    return 0;
}
