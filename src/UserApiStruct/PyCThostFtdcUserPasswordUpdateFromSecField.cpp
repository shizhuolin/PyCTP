
#include "PyCThostFtdcUserPasswordUpdateFromSecField.h"

///来自次席的用户口令变更

static PyObject *PyCThostFtdcUserPasswordUpdateFromSecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserPasswordUpdateFromSecField *self = (PyCThostFtdcUserPasswordUpdateFromSecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcUserPasswordUpdateFromSecField_init(PyCThostFtdcUserPasswordUpdateFromSecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "OldPassword", "NewPassword", "FromSec",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *UserPasswordUpdateFromSecField_BrokerID = NULL;
    Py_ssize_t UserPasswordUpdateFromSecField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *UserPasswordUpdateFromSecField_UserID = NULL;
    Py_ssize_t UserPasswordUpdateFromSecField_UserID_len = 0;
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    const char *UserPasswordUpdateFromSecField_OldPassword = NULL;
    Py_ssize_t UserPasswordUpdateFromSecField_OldPassword_len = 0;
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    const char *UserPasswordUpdateFromSecField_NewPassword = NULL;
    Py_ssize_t UserPasswordUpdateFromSecField_NewPassword_len = 0;
            
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    int UserPasswordUpdateFromSecField_FromSec = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#i", (char **)kwlist
#endif

        , &UserPasswordUpdateFromSecField_BrokerID, &UserPasswordUpdateFromSecField_BrokerID_len 
        , &UserPasswordUpdateFromSecField_UserID, &UserPasswordUpdateFromSecField_UserID_len 
        , &UserPasswordUpdateFromSecField_OldPassword, &UserPasswordUpdateFromSecField_OldPassword_len 
        , &UserPasswordUpdateFromSecField_NewPassword, &UserPasswordUpdateFromSecField_NewPassword_len 
        , &UserPasswordUpdateFromSecField_FromSec 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( UserPasswordUpdateFromSecField_BrokerID != NULL ) {
        if(UserPasswordUpdateFromSecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", UserPasswordUpdateFromSecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, UserPasswordUpdateFromSecField_BrokerID, UserPasswordUpdateFromSecField_BrokerID_len);        
        strncpy(self->data.BrokerID, UserPasswordUpdateFromSecField_BrokerID, sizeof(self->data.BrokerID) );
        UserPasswordUpdateFromSecField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( UserPasswordUpdateFromSecField_UserID != NULL ) {
        if(UserPasswordUpdateFromSecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", UserPasswordUpdateFromSecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, UserPasswordUpdateFromSecField_UserID, UserPasswordUpdateFromSecField_UserID_len);        
        strncpy(self->data.UserID, UserPasswordUpdateFromSecField_UserID, sizeof(self->data.UserID) );
        UserPasswordUpdateFromSecField_UserID = NULL;
    }
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    if( UserPasswordUpdateFromSecField_OldPassword != NULL ) {
        if(UserPasswordUpdateFromSecField_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", UserPasswordUpdateFromSecField_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
            return -1;
        }
        // memset(self->data.OldPassword, 0, sizeof(self->data.OldPassword));
        // memcpy(self->data.OldPassword, UserPasswordUpdateFromSecField_OldPassword, UserPasswordUpdateFromSecField_OldPassword_len);        
        strncpy(self->data.OldPassword, UserPasswordUpdateFromSecField_OldPassword, sizeof(self->data.OldPassword) );
        UserPasswordUpdateFromSecField_OldPassword = NULL;
    }
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    if( UserPasswordUpdateFromSecField_NewPassword != NULL ) {
        if(UserPasswordUpdateFromSecField_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", UserPasswordUpdateFromSecField_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
            return -1;
        }
        // memset(self->data.NewPassword, 0, sizeof(self->data.NewPassword));
        // memcpy(self->data.NewPassword, UserPasswordUpdateFromSecField_NewPassword, UserPasswordUpdateFromSecField_NewPassword_len);        
        strncpy(self->data.NewPassword, UserPasswordUpdateFromSecField_NewPassword, sizeof(self->data.NewPassword) );
        UserPasswordUpdateFromSecField_NewPassword = NULL;
    }
            
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.FromSec = UserPasswordUpdateFromSecField_FromSec;
        

    return 0;
}

static void PyCThostFtdcUserPasswordUpdateFromSecField_dealloc(PyCThostFtdcUserPasswordUpdateFromSecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserPasswordUpdateFromSecField_repr(PyCThostFtdcUserPasswordUpdateFromSecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"OldPassword", self->data.OldPassword//, (Py_ssize_t)sizeof(self->data.OldPassword) 
        ,"NewPassword", self->data.NewPassword//, (Py_ssize_t)sizeof(self->data.NewPassword) 
        ,"FromSec", self->data.FromSec 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserPasswordUpdateFromSecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecField_get_BrokerID(PyCThostFtdcUserPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcUserPasswordUpdateFromSecField_set_BrokerID(PyCThostFtdcUserPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecField_get_UserID(PyCThostFtdcUserPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcUserPasswordUpdateFromSecField_set_UserID(PyCThostFtdcUserPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
            
///原来的口令
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecField_get_OldPassword(PyCThostFtdcUserPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OldPassword, (Py_ssize_t)sizeof(self->data.OldPassword));
    return PyBytes_FromString(self->data.OldPassword);
}

///原来的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcUserPasswordUpdateFromSecField_set_OldPassword(PyCThostFtdcUserPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
        PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.OldPassword, 0, sizeof(self->data.OldPassword));
    // memcpy(self->data.OldPassword, buf, len);
    strncpy(self->data.OldPassword, buf, sizeof(self->data.OldPassword));
    return 0;
}
            
///新的口令
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecField_get_NewPassword(PyCThostFtdcUserPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewPassword, (Py_ssize_t)sizeof(self->data.NewPassword));
    return PyBytes_FromString(self->data.NewPassword);
}

///新的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcUserPasswordUpdateFromSecField_set_NewPassword(PyCThostFtdcUserPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
        PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.NewPassword, 0, sizeof(self->data.NewPassword));
    // memcpy(self->data.NewPassword, buf, len);
    strncpy(self->data.NewPassword, buf, sizeof(self->data.NewPassword));
    return 0;
}
            
///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcUserPasswordUpdateFromSecField_get_FromSec(PyCThostFtdcUserPasswordUpdateFromSecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FromSec);
#else
    return PyInt_FromLong(self->data.FromSec);
#endif
}

///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcUserPasswordUpdateFromSecField_set_FromSec(PyCThostFtdcUserPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromSec Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromSec Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FromSec value out of range for C int");
        return -1;
    }
    self->data.FromSec = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcUserPasswordUpdateFromSecField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcUserPasswordUpdateFromSecField_get_BrokerID, (setter)PyCThostFtdcUserPasswordUpdateFromSecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcUserPasswordUpdateFromSecField_get_UserID, (setter)PyCThostFtdcUserPasswordUpdateFromSecField_set_UserID, (char *)"UserID", NULL},
    ///原来的口令 
    {(char *)"OldPassword", (getter)PyCThostFtdcUserPasswordUpdateFromSecField_get_OldPassword, (setter)PyCThostFtdcUserPasswordUpdateFromSecField_set_OldPassword, (char *)"OldPassword", NULL},
    ///新的口令 
    {(char *)"NewPassword", (getter)PyCThostFtdcUserPasswordUpdateFromSecField_get_NewPassword, (setter)PyCThostFtdcUserPasswordUpdateFromSecField_set_NewPassword, (char *)"NewPassword", NULL},
    ///次席的交易中心代码 
    {(char *)"FromSec", (getter)PyCThostFtdcUserPasswordUpdateFromSecField_get_FromSec, (setter)PyCThostFtdcUserPasswordUpdateFromSecField_set_FromSec, (char *)"FromSec", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserPasswordUpdateFromSecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserPasswordUpdateFromSecField",	/* tp_name */
	sizeof(PyCThostFtdcUserPasswordUpdateFromSecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserPasswordUpdateFromSecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserPasswordUpdateFromSecField_repr,   /* tp_repr */
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
	"CThostFtdcUserPasswordUpdateFromSecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserPasswordUpdateFromSecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserPasswordUpdateFromSecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserPasswordUpdateFromSecField_new,       /* tp_new */
};

int PyCThostFtdcUserPasswordUpdateFromSecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserPasswordUpdateFromSecField  */
	if (PyType_Ready(&PyCThostFtdcUserPasswordUpdateFromSecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserPasswordUpdateFromSecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserPasswordUpdateFromSecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserPasswordUpdateFromSecField", (PyObject *)&PyCThostFtdcUserPasswordUpdateFromSecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserPasswordUpdateFromSecField to module");
        Py_DECREF(&PyCThostFtdcUserPasswordUpdateFromSecFieldType);
		return -1;
    }

    return 0;
}
