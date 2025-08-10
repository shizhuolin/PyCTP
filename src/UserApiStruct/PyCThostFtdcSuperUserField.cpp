
#include "PyCThostFtdcSuperUserField.h"

///管理用户

static PyObject *PyCThostFtdcSuperUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSuperUserField *self = (PyCThostFtdcSuperUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSuperUserField_init(PyCThostFtdcSuperUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UserID", "UserName", "Password", "IsActive",  NULL};


    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *SuperUserField_UserID = NULL;
    Py_ssize_t SuperUserField_UserID_len = 0;
            
    ///用户名称
    // TThostFtdcUserNameType char[81]
    const char *SuperUserField_UserName = NULL;
    Py_ssize_t SuperUserField_UserName_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *SuperUserField_Password = NULL;
    Py_ssize_t SuperUserField_Password_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int SuperUserField_IsActive = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

        , &SuperUserField_UserID, &SuperUserField_UserID_len 
        , &SuperUserField_UserName, &SuperUserField_UserName_len 
        , &SuperUserField_Password, &SuperUserField_Password_len 
        , &SuperUserField_IsActive 


    )) {
        return -1;
    }


    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( SuperUserField_UserID != NULL ) {
        if(SuperUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", SuperUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, SuperUserField_UserID, SuperUserField_UserID_len);        
        strncpy(self->data.UserID, SuperUserField_UserID, sizeof(self->data.UserID) );
        SuperUserField_UserID = NULL;
    }
            
    ///用户名称
    // TThostFtdcUserNameType char[81]
    if( SuperUserField_UserName != NULL ) {
        if(SuperUserField_UserName_len > (Py_ssize_t)sizeof(self->data.UserName)) {
            PyErr_Format(PyExc_ValueError, "UserName too long: length=%zd (max allowed is %zd)", SuperUserField_UserName_len, (Py_ssize_t)sizeof(self->data.UserName));
            return -1;
        }
        // memset(self->data.UserName, 0, sizeof(self->data.UserName));
        // memcpy(self->data.UserName, SuperUserField_UserName, SuperUserField_UserName_len);        
        strncpy(self->data.UserName, SuperUserField_UserName, sizeof(self->data.UserName) );
        SuperUserField_UserName = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( SuperUserField_Password != NULL ) {
        if(SuperUserField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", SuperUserField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, SuperUserField_Password, SuperUserField_Password_len);        
        strncpy(self->data.Password, SuperUserField_Password, sizeof(self->data.Password) );
        SuperUserField_Password = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = SuperUserField_IsActive;
        

    return 0;
}

static void PyCThostFtdcSuperUserField_dealloc(PyCThostFtdcSuperUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSuperUserField_repr(PyCThostFtdcSuperUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"UserName", self->data.UserName//, (Py_ssize_t)sizeof(self->data.UserName) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"IsActive", self->data.IsActive 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSuperUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcSuperUserField_get_UserID(PyCThostFtdcSuperUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSuperUserField_set_UserID(PyCThostFtdcSuperUserField *self, PyObject* val, void *closure) {
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
            
///用户名称
// TThostFtdcUserNameType char[81]
static PyObject *PyCThostFtdcSuperUserField_get_UserName(PyCThostFtdcSuperUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserName, (Py_ssize_t)sizeof(self->data.UserName));
    return PyBytes_FromString(self->data.UserName);
}

///用户名称
// TThostFtdcUserNameType char[81]
static int PyCThostFtdcSuperUserField_set_UserName(PyCThostFtdcSuperUserField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserName)) {
        PyErr_SetString(PyExc_ValueError, "UserName must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.UserName, 0, sizeof(self->data.UserName));
    // memcpy(self->data.UserName, buf, len);
    strncpy(self->data.UserName, buf, sizeof(self->data.UserName));
    return 0;
}
            
///密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcSuperUserField_get_Password(PyCThostFtdcSuperUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcSuperUserField_set_Password(PyCThostFtdcSuperUserField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Password, 0, sizeof(self->data.Password));
    // memcpy(self->data.Password, buf, len);
    strncpy(self->data.Password, buf, sizeof(self->data.Password));
    return 0;
}
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSuperUserField_get_IsActive(PyCThostFtdcSuperUserField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcSuperUserField_set_IsActive(PyCThostFtdcSuperUserField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActive value out of range for C int");
        return -1;
    }
    self->data.IsActive = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSuperUserField_getset[] = {
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcSuperUserField_get_UserID, (setter)PyCThostFtdcSuperUserField_set_UserID, (char *)"UserID", NULL},
    ///用户名称 
    {(char *)"UserName", (getter)PyCThostFtdcSuperUserField_get_UserName, (setter)PyCThostFtdcSuperUserField_set_UserName, (char *)"UserName", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcSuperUserField_get_Password, (setter)PyCThostFtdcSuperUserField_set_Password, (char *)"Password", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcSuperUserField_get_IsActive, (setter)PyCThostFtdcSuperUserField_set_IsActive, (char *)"IsActive", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSuperUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSuperUserField",	/* tp_name */
	sizeof(PyCThostFtdcSuperUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSuperUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSuperUserField_repr,   /* tp_repr */
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
	"CThostFtdcSuperUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSuperUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSuperUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSuperUserField_new,       /* tp_new */
};

int PyCThostFtdcSuperUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSuperUserField  */
	if (PyType_Ready(&PyCThostFtdcSuperUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSuperUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSuperUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSuperUserField", (PyObject *)&PyCThostFtdcSuperUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSuperUserField to module");
        Py_DECREF(&PyCThostFtdcSuperUserFieldType);
		return -1;
    }

    return 0;
}
