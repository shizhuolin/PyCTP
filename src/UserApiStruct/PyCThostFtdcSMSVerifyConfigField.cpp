
#include "PyCThostFtdcSMSVerifyConfigField.h"

///登录验证设置

static PyObject *PyCThostFtdcSMSVerifyConfigField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSMSVerifyConfigField *self = (PyCThostFtdcSMSVerifyConfigField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSMSVerifyConfigField_init(PyCThostFtdcSMSVerifyConfigField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"UserID", "BrokerID", "Mobile", "UseSMSVerify",  NULL};


    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *SMSVerifyConfigField_UserID = NULL;
    Py_ssize_t SMSVerifyConfigField_UserID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SMSVerifyConfigField_BrokerID = NULL;
    Py_ssize_t SMSVerifyConfigField_BrokerID_len = 0;
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    const char *SMSVerifyConfigField_Mobile = NULL;
    Py_ssize_t SMSVerifyConfigField_Mobile_len = 0;
            
    ///是否启用短信验证
    // TThostFtdcBoolType int
    int SMSVerifyConfigField_UseSMSVerify = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

        , &SMSVerifyConfigField_UserID, &SMSVerifyConfigField_UserID_len 
        , &SMSVerifyConfigField_BrokerID, &SMSVerifyConfigField_BrokerID_len 
        , &SMSVerifyConfigField_Mobile, &SMSVerifyConfigField_Mobile_len 
        , &SMSVerifyConfigField_UseSMSVerify 


    )) {
        return -1;
    }


    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( SMSVerifyConfigField_UserID != NULL ) {
        if(SMSVerifyConfigField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", SMSVerifyConfigField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, SMSVerifyConfigField_UserID, SMSVerifyConfigField_UserID_len);        
        strncpy(self->data.UserID, SMSVerifyConfigField_UserID, sizeof(self->data.UserID) );
        SMSVerifyConfigField_UserID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SMSVerifyConfigField_BrokerID != NULL ) {
        if(SMSVerifyConfigField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SMSVerifyConfigField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SMSVerifyConfigField_BrokerID, SMSVerifyConfigField_BrokerID_len);        
        strncpy(self->data.BrokerID, SMSVerifyConfigField_BrokerID, sizeof(self->data.BrokerID) );
        SMSVerifyConfigField_BrokerID = NULL;
    }
            
    ///手机号
    // TThostFtdcSMSPhoneType char[17]
    if( SMSVerifyConfigField_Mobile != NULL ) {
        if(SMSVerifyConfigField_Mobile_len > (Py_ssize_t)sizeof(self->data.Mobile)) {
            PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is %zd)", SMSVerifyConfigField_Mobile_len, (Py_ssize_t)sizeof(self->data.Mobile));
            return -1;
        }
        // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
        // memcpy(self->data.Mobile, SMSVerifyConfigField_Mobile, SMSVerifyConfigField_Mobile_len);        
        strncpy(self->data.Mobile, SMSVerifyConfigField_Mobile, sizeof(self->data.Mobile) );
        SMSVerifyConfigField_Mobile = NULL;
    }
            
    ///是否启用短信验证
    // TThostFtdcBoolType int
    self->data.UseSMSVerify = SMSVerifyConfigField_UseSMSVerify;
        

    return 0;
}

static void PyCThostFtdcSMSVerifyConfigField_dealloc(PyCThostFtdcSMSVerifyConfigField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSMSVerifyConfigField_repr(PyCThostFtdcSMSVerifyConfigField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"Mobile", self->data.Mobile//, (Py_ssize_t)sizeof(self->data.Mobile) 
        ,"UseSMSVerify", self->data.UseSMSVerify 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSMSVerifyConfigField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcSMSVerifyConfigField_get_UserID(PyCThostFtdcSMSVerifyConfigField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSMSVerifyConfigField_set_UserID(PyCThostFtdcSMSVerifyConfigField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSMSVerifyConfigField_get_BrokerID(PyCThostFtdcSMSVerifyConfigField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSMSVerifyConfigField_set_BrokerID(PyCThostFtdcSMSVerifyConfigField *self, PyObject* val, void *closure) {
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
            
///手机号
// TThostFtdcSMSPhoneType char[17]
static PyObject *PyCThostFtdcSMSVerifyConfigField_get_Mobile(PyCThostFtdcSMSVerifyConfigField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Mobile, (Py_ssize_t)sizeof(self->data.Mobile));
    return PyBytes_FromString(self->data.Mobile);
}

///手机号
// TThostFtdcSMSPhoneType char[17]
static int PyCThostFtdcSMSVerifyConfigField_set_Mobile(PyCThostFtdcSMSVerifyConfigField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Mobile)) {
        PyErr_SetString(PyExc_ValueError, "Mobile must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.Mobile, 0, sizeof(self->data.Mobile));
    // memcpy(self->data.Mobile, buf, len);
    strncpy(self->data.Mobile, buf, sizeof(self->data.Mobile));
    return 0;
}
            
///是否启用短信验证
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSMSVerifyConfigField_get_UseSMSVerify(PyCThostFtdcSMSVerifyConfigField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UseSMSVerify);
#else
    return PyInt_FromLong(self->data.UseSMSVerify);
#endif
}

///是否启用短信验证
// TThostFtdcBoolType int
static int PyCThostFtdcSMSVerifyConfigField_set_UseSMSVerify(PyCThostFtdcSMSVerifyConfigField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseSMSVerify Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseSMSVerify Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the UseSMSVerify value out of range for C int");
        return -1;
    }
    self->data.UseSMSVerify = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSMSVerifyConfigField_getset[] = {
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcSMSVerifyConfigField_get_UserID, (setter)PyCThostFtdcSMSVerifyConfigField_set_UserID, (char *)"UserID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSMSVerifyConfigField_get_BrokerID, (setter)PyCThostFtdcSMSVerifyConfigField_set_BrokerID, (char *)"BrokerID", NULL},
    ///手机号 
    {(char *)"Mobile", (getter)PyCThostFtdcSMSVerifyConfigField_get_Mobile, (setter)PyCThostFtdcSMSVerifyConfigField_set_Mobile, (char *)"Mobile", NULL},
    ///是否启用短信验证 
    {(char *)"UseSMSVerify", (getter)PyCThostFtdcSMSVerifyConfigField_get_UseSMSVerify, (setter)PyCThostFtdcSMSVerifyConfigField_set_UseSMSVerify, (char *)"UseSMSVerify", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSMSVerifyConfigFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSMSVerifyConfigField",	/* tp_name */
	sizeof(PyCThostFtdcSMSVerifyConfigField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSMSVerifyConfigField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSMSVerifyConfigField_repr,   /* tp_repr */
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
	"CThostFtdcSMSVerifyConfigField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSMSVerifyConfigField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSMSVerifyConfigField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSMSVerifyConfigField_new,       /* tp_new */
};

int PyCThostFtdcSMSVerifyConfigFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSMSVerifyConfigField  */
	if (PyType_Ready(&PyCThostFtdcSMSVerifyConfigFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSMSVerifyConfigField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSMSVerifyConfigFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSMSVerifyConfigField", (PyObject *)&PyCThostFtdcSMSVerifyConfigFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSMSVerifyConfigField to module");
        Py_DECREF(&PyCThostFtdcSMSVerifyConfigFieldType);
		return -1;
    }

    return 0;
}
