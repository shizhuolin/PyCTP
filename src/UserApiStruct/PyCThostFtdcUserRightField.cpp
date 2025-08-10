
#include "PyCThostFtdcUserRightField.h"

///用户权限

static PyObject *PyCThostFtdcUserRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserRightField *self = (PyCThostFtdcUserRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcUserRightField_init(PyCThostFtdcUserRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserRightType", "IsForbidden",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *UserRightField_BrokerID = NULL;
    Py_ssize_t UserRightField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *UserRightField_UserID = NULL;
    Py_ssize_t UserRightField_UserID_len = 0;
            
    ///客户权限类型
    // TThostFtdcUserRightTypeType char
    char UserRightField_UserRightType = 0;
            
    ///是否禁止
    // TThostFtdcBoolType int
    int UserRightField_IsForbidden = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ci", (char **)kwlist
#endif

        , &UserRightField_BrokerID, &UserRightField_BrokerID_len 
        , &UserRightField_UserID, &UserRightField_UserID_len 
        , &UserRightField_UserRightType 
        , &UserRightField_IsForbidden 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( UserRightField_BrokerID != NULL ) {
        if(UserRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", UserRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, UserRightField_BrokerID, UserRightField_BrokerID_len);        
        strncpy(self->data.BrokerID, UserRightField_BrokerID, sizeof(self->data.BrokerID) );
        UserRightField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( UserRightField_UserID != NULL ) {
        if(UserRightField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", UserRightField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, UserRightField_UserID, UserRightField_UserID_len);        
        strncpy(self->data.UserID, UserRightField_UserID, sizeof(self->data.UserID) );
        UserRightField_UserID = NULL;
    }
            
    ///客户权限类型
    // TThostFtdcUserRightTypeType char
    self->data.UserRightType = UserRightField_UserRightType;
            
    ///是否禁止
    // TThostFtdcBoolType int
    self->data.IsForbidden = UserRightField_IsForbidden;
        

    return 0;
}

static void PyCThostFtdcUserRightField_dealloc(PyCThostFtdcUserRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserRightField_repr(PyCThostFtdcUserRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"UserRightType", self->data.UserRightType 
        ,"IsForbidden", self->data.IsForbidden 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcUserRightField_get_BrokerID(PyCThostFtdcUserRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcUserRightField_set_BrokerID(PyCThostFtdcUserRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcUserRightField_get_UserID(PyCThostFtdcUserRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcUserRightField_set_UserID(PyCThostFtdcUserRightField *self, PyObject* val, void *closure) {
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
            
///客户权限类型
// TThostFtdcUserRightTypeType char
static PyObject *PyCThostFtdcUserRightField_get_UserRightType(PyCThostFtdcUserRightField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.UserRightType), 1);
}

///客户权限类型
// TThostFtdcUserRightTypeType char
static int PyCThostFtdcUserRightField_set_UserRightType(PyCThostFtdcUserRightField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserRightType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserRightType)) {
        PyErr_SetString(PyExc_ValueError, "UserRightType must be equal 1 bytes");
        return -1;
    }
    self->data.UserRightType = *buf;
    return 0;
}
            
///是否禁止
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcUserRightField_get_IsForbidden(PyCThostFtdcUserRightField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsForbidden);
#else
    return PyInt_FromLong(self->data.IsForbidden);
#endif
}

///是否禁止
// TThostFtdcBoolType int
static int PyCThostFtdcUserRightField_set_IsForbidden(PyCThostFtdcUserRightField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsForbidden Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsForbidden Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the IsForbidden value out of range for C int");
        return -1;
    }
    self->data.IsForbidden = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcUserRightField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcUserRightField_get_BrokerID, (setter)PyCThostFtdcUserRightField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcUserRightField_get_UserID, (setter)PyCThostFtdcUserRightField_set_UserID, (char *)"UserID", NULL},
    ///客户权限类型 
    {(char *)"UserRightType", (getter)PyCThostFtdcUserRightField_get_UserRightType, (setter)PyCThostFtdcUserRightField_set_UserRightType, (char *)"UserRightType", NULL},
    ///是否禁止 
    {(char *)"IsForbidden", (getter)PyCThostFtdcUserRightField_get_IsForbidden, (setter)PyCThostFtdcUserRightField_set_IsForbidden, (char *)"IsForbidden", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserRightField",	/* tp_name */
	sizeof(PyCThostFtdcUserRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserRightField_repr,   /* tp_repr */
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
	"CThostFtdcUserRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserRightField_new,       /* tp_new */
};

int PyCThostFtdcUserRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserRightField  */
	if (PyType_Ready(&PyCThostFtdcUserRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserRightField", (PyObject *)&PyCThostFtdcUserRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserRightField to module");
        Py_DECREF(&PyCThostFtdcUserRightFieldType);
		return -1;
    }

    return 0;
}
