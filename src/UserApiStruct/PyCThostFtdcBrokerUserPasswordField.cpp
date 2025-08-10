
#include "PyCThostFtdcBrokerUserPasswordField.h"

///经纪公司用户口令

static PyObject *PyCThostFtdcBrokerUserPasswordField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserPasswordField *self = (PyCThostFtdcBrokerUserPasswordField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserPasswordField_init(PyCThostFtdcBrokerUserPasswordField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "Password", "LastUpdateTime", "LastLoginTime", "ExpireDate", "WeakExpireDate",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerUserPasswordField_BrokerID = NULL;
    Py_ssize_t BrokerUserPasswordField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *BrokerUserPasswordField_UserID = NULL;
    Py_ssize_t BrokerUserPasswordField_UserID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *BrokerUserPasswordField_Password = NULL;
    Py_ssize_t BrokerUserPasswordField_Password_len = 0;
            
    ///上次修改时间
    // TThostFtdcDateTimeType char[17]
    const char *BrokerUserPasswordField_LastUpdateTime = NULL;
    Py_ssize_t BrokerUserPasswordField_LastUpdateTime_len = 0;
            
    ///上次登陆时间
    // TThostFtdcDateTimeType char[17]
    const char *BrokerUserPasswordField_LastLoginTime = NULL;
    Py_ssize_t BrokerUserPasswordField_LastLoginTime_len = 0;
            
    ///密码过期时间
    // TThostFtdcDateType char[9]
    const char *BrokerUserPasswordField_ExpireDate = NULL;
    Py_ssize_t BrokerUserPasswordField_ExpireDate_len = 0;
            
    ///弱密码过期时间
    // TThostFtdcDateType char[9]
    const char *BrokerUserPasswordField_WeakExpireDate = NULL;
    Py_ssize_t BrokerUserPasswordField_WeakExpireDate_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &BrokerUserPasswordField_BrokerID, &BrokerUserPasswordField_BrokerID_len 
        , &BrokerUserPasswordField_UserID, &BrokerUserPasswordField_UserID_len 
        , &BrokerUserPasswordField_Password, &BrokerUserPasswordField_Password_len 
        , &BrokerUserPasswordField_LastUpdateTime, &BrokerUserPasswordField_LastUpdateTime_len 
        , &BrokerUserPasswordField_LastLoginTime, &BrokerUserPasswordField_LastLoginTime_len 
        , &BrokerUserPasswordField_ExpireDate, &BrokerUserPasswordField_ExpireDate_len 
        , &BrokerUserPasswordField_WeakExpireDate, &BrokerUserPasswordField_WeakExpireDate_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerUserPasswordField_BrokerID != NULL ) {
        if(BrokerUserPasswordField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerUserPasswordField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerUserPasswordField_BrokerID, BrokerUserPasswordField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerUserPasswordField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerUserPasswordField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( BrokerUserPasswordField_UserID != NULL ) {
        if(BrokerUserPasswordField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", BrokerUserPasswordField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, BrokerUserPasswordField_UserID, BrokerUserPasswordField_UserID_len);        
        strncpy(self->data.UserID, BrokerUserPasswordField_UserID, sizeof(self->data.UserID) );
        BrokerUserPasswordField_UserID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( BrokerUserPasswordField_Password != NULL ) {
        if(BrokerUserPasswordField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", BrokerUserPasswordField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, BrokerUserPasswordField_Password, BrokerUserPasswordField_Password_len);        
        strncpy(self->data.Password, BrokerUserPasswordField_Password, sizeof(self->data.Password) );
        BrokerUserPasswordField_Password = NULL;
    }
            
    ///上次修改时间
    // TThostFtdcDateTimeType char[17]
    if( BrokerUserPasswordField_LastUpdateTime != NULL ) {
        if(BrokerUserPasswordField_LastUpdateTime_len > (Py_ssize_t)sizeof(self->data.LastUpdateTime)) {
            PyErr_Format(PyExc_ValueError, "LastUpdateTime too long: length=%zd (max allowed is %zd)", BrokerUserPasswordField_LastUpdateTime_len, (Py_ssize_t)sizeof(self->data.LastUpdateTime));
            return -1;
        }
        // memset(self->data.LastUpdateTime, 0, sizeof(self->data.LastUpdateTime));
        // memcpy(self->data.LastUpdateTime, BrokerUserPasswordField_LastUpdateTime, BrokerUserPasswordField_LastUpdateTime_len);        
        strncpy(self->data.LastUpdateTime, BrokerUserPasswordField_LastUpdateTime, sizeof(self->data.LastUpdateTime) );
        BrokerUserPasswordField_LastUpdateTime = NULL;
    }
            
    ///上次登陆时间
    // TThostFtdcDateTimeType char[17]
    if( BrokerUserPasswordField_LastLoginTime != NULL ) {
        if(BrokerUserPasswordField_LastLoginTime_len > (Py_ssize_t)sizeof(self->data.LastLoginTime)) {
            PyErr_Format(PyExc_ValueError, "LastLoginTime too long: length=%zd (max allowed is %zd)", BrokerUserPasswordField_LastLoginTime_len, (Py_ssize_t)sizeof(self->data.LastLoginTime));
            return -1;
        }
        // memset(self->data.LastLoginTime, 0, sizeof(self->data.LastLoginTime));
        // memcpy(self->data.LastLoginTime, BrokerUserPasswordField_LastLoginTime, BrokerUserPasswordField_LastLoginTime_len);        
        strncpy(self->data.LastLoginTime, BrokerUserPasswordField_LastLoginTime, sizeof(self->data.LastLoginTime) );
        BrokerUserPasswordField_LastLoginTime = NULL;
    }
            
    ///密码过期时间
    // TThostFtdcDateType char[9]
    if( BrokerUserPasswordField_ExpireDate != NULL ) {
        if(BrokerUserPasswordField_ExpireDate_len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
            PyErr_Format(PyExc_ValueError, "ExpireDate too long: length=%zd (max allowed is %zd)", BrokerUserPasswordField_ExpireDate_len, (Py_ssize_t)sizeof(self->data.ExpireDate));
            return -1;
        }
        // memset(self->data.ExpireDate, 0, sizeof(self->data.ExpireDate));
        // memcpy(self->data.ExpireDate, BrokerUserPasswordField_ExpireDate, BrokerUserPasswordField_ExpireDate_len);        
        strncpy(self->data.ExpireDate, BrokerUserPasswordField_ExpireDate, sizeof(self->data.ExpireDate) );
        BrokerUserPasswordField_ExpireDate = NULL;
    }
            
    ///弱密码过期时间
    // TThostFtdcDateType char[9]
    if( BrokerUserPasswordField_WeakExpireDate != NULL ) {
        if(BrokerUserPasswordField_WeakExpireDate_len > (Py_ssize_t)sizeof(self->data.WeakExpireDate)) {
            PyErr_Format(PyExc_ValueError, "WeakExpireDate too long: length=%zd (max allowed is %zd)", BrokerUserPasswordField_WeakExpireDate_len, (Py_ssize_t)sizeof(self->data.WeakExpireDate));
            return -1;
        }
        // memset(self->data.WeakExpireDate, 0, sizeof(self->data.WeakExpireDate));
        // memcpy(self->data.WeakExpireDate, BrokerUserPasswordField_WeakExpireDate, BrokerUserPasswordField_WeakExpireDate_len);        
        strncpy(self->data.WeakExpireDate, BrokerUserPasswordField_WeakExpireDate, sizeof(self->data.WeakExpireDate) );
        BrokerUserPasswordField_WeakExpireDate = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcBrokerUserPasswordField_dealloc(PyCThostFtdcBrokerUserPasswordField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_repr(PyCThostFtdcBrokerUserPasswordField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"LastUpdateTime", self->data.LastUpdateTime//, (Py_ssize_t)sizeof(self->data.LastUpdateTime) 
        ,"LastLoginTime", self->data.LastLoginTime//, (Py_ssize_t)sizeof(self->data.LastLoginTime) 
        ,"ExpireDate", self->data.ExpireDate//, (Py_ssize_t)sizeof(self->data.ExpireDate) 
        ,"WeakExpireDate", self->data.WeakExpireDate//, (Py_ssize_t)sizeof(self->data.WeakExpireDate) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserPasswordField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerUserPasswordField_get_BrokerID(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerUserPasswordField_set_BrokerID(PyCThostFtdcBrokerUserPasswordField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBrokerUserPasswordField_get_UserID(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcBrokerUserPasswordField_set_UserID(PyCThostFtdcBrokerUserPasswordField *self, PyObject* val, void *closure) {
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
            
///密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcBrokerUserPasswordField_get_Password(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcBrokerUserPasswordField_set_Password(PyCThostFtdcBrokerUserPasswordField *self, PyObject* val, void *closure) {
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
            
///上次修改时间
// TThostFtdcDateTimeType char[17]
static PyObject *PyCThostFtdcBrokerUserPasswordField_get_LastUpdateTime(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LastUpdateTime, (Py_ssize_t)sizeof(self->data.LastUpdateTime));
    return PyBytes_FromString(self->data.LastUpdateTime);
}

///上次修改时间
// TThostFtdcDateTimeType char[17]
static int PyCThostFtdcBrokerUserPasswordField_set_LastUpdateTime(PyCThostFtdcBrokerUserPasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastUpdateTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LastUpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "LastUpdateTime must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.LastUpdateTime, 0, sizeof(self->data.LastUpdateTime));
    // memcpy(self->data.LastUpdateTime, buf, len);
    strncpy(self->data.LastUpdateTime, buf, sizeof(self->data.LastUpdateTime));
    return 0;
}
            
///上次登陆时间
// TThostFtdcDateTimeType char[17]
static PyObject *PyCThostFtdcBrokerUserPasswordField_get_LastLoginTime(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LastLoginTime, (Py_ssize_t)sizeof(self->data.LastLoginTime));
    return PyBytes_FromString(self->data.LastLoginTime);
}

///上次登陆时间
// TThostFtdcDateTimeType char[17]
static int PyCThostFtdcBrokerUserPasswordField_set_LastLoginTime(PyCThostFtdcBrokerUserPasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastLoginTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LastLoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LastLoginTime must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.LastLoginTime, 0, sizeof(self->data.LastLoginTime));
    // memcpy(self->data.LastLoginTime, buf, len);
    strncpy(self->data.LastLoginTime, buf, sizeof(self->data.LastLoginTime));
    return 0;
}
            
///密码过期时间
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcBrokerUserPasswordField_get_ExpireDate(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExpireDate, (Py_ssize_t)sizeof(self->data.ExpireDate));
    return PyBytes_FromString(self->data.ExpireDate);
}

///密码过期时间
// TThostFtdcDateType char[9]
static int PyCThostFtdcBrokerUserPasswordField_set_ExpireDate(PyCThostFtdcBrokerUserPasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExpireDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
        PyErr_SetString(PyExc_ValueError, "ExpireDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExpireDate, 0, sizeof(self->data.ExpireDate));
    // memcpy(self->data.ExpireDate, buf, len);
    strncpy(self->data.ExpireDate, buf, sizeof(self->data.ExpireDate));
    return 0;
}
            
///弱密码过期时间
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcBrokerUserPasswordField_get_WeakExpireDate(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.WeakExpireDate, (Py_ssize_t)sizeof(self->data.WeakExpireDate));
    return PyBytes_FromString(self->data.WeakExpireDate);
}

///弱密码过期时间
// TThostFtdcDateType char[9]
static int PyCThostFtdcBrokerUserPasswordField_set_WeakExpireDate(PyCThostFtdcBrokerUserPasswordField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WeakExpireDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.WeakExpireDate)) {
        PyErr_SetString(PyExc_ValueError, "WeakExpireDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.WeakExpireDate, 0, sizeof(self->data.WeakExpireDate));
    // memcpy(self->data.WeakExpireDate, buf, len);
    strncpy(self->data.WeakExpireDate, buf, sizeof(self->data.WeakExpireDate));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcBrokerUserPasswordField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserPasswordField_get_BrokerID, (setter)PyCThostFtdcBrokerUserPasswordField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcBrokerUserPasswordField_get_UserID, (setter)PyCThostFtdcBrokerUserPasswordField_set_UserID, (char *)"UserID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcBrokerUserPasswordField_get_Password, (setter)PyCThostFtdcBrokerUserPasswordField_set_Password, (char *)"Password", NULL},
    ///上次修改时间 
    {(char *)"LastUpdateTime", (getter)PyCThostFtdcBrokerUserPasswordField_get_LastUpdateTime, (setter)PyCThostFtdcBrokerUserPasswordField_set_LastUpdateTime, (char *)"LastUpdateTime", NULL},
    ///上次登陆时间 
    {(char *)"LastLoginTime", (getter)PyCThostFtdcBrokerUserPasswordField_get_LastLoginTime, (setter)PyCThostFtdcBrokerUserPasswordField_set_LastLoginTime, (char *)"LastLoginTime", NULL},
    ///密码过期时间 
    {(char *)"ExpireDate", (getter)PyCThostFtdcBrokerUserPasswordField_get_ExpireDate, (setter)PyCThostFtdcBrokerUserPasswordField_set_ExpireDate, (char *)"ExpireDate", NULL},
    ///弱密码过期时间 
    {(char *)"WeakExpireDate", (getter)PyCThostFtdcBrokerUserPasswordField_get_WeakExpireDate, (setter)PyCThostFtdcBrokerUserPasswordField_set_WeakExpireDate, (char *)"WeakExpireDate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserPasswordFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserPasswordField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserPasswordField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserPasswordField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserPasswordField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserPasswordField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserPasswordField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserPasswordField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserPasswordField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserPasswordFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserPasswordField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserPasswordFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserPasswordField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserPasswordFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserPasswordField", (PyObject *)&PyCThostFtdcBrokerUserPasswordFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserPasswordField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserPasswordFieldType);
		return -1;
    }

    return 0;
}
